#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]

//' Spatial Balance Index
//'
//' \code{sbi} computes the Spatial Balance Index (SBI), which is a measure of
//' balance of a sample. The lower it is, the better the balance.
//'
//' The SBI is based on Voronoi polygons. Given a sample s, each unit \eqn{i}
//' in the sample has its own Voronoi polygon, which is composed by all
//' population units closer to \eqn{i} than to any other sample unit \eqn{j}.
//' Then, per each Voronoi polygon, define \eqn{v_{i}} as the sum of the
//' inclusion probabilities of all units in the \eqn{i}-th Voronoi polygon.
//' Finally, the variance of \eqn{v_{i}} is the SBI.
//'
//' @param dis A distance matrix NxN that specifies how far are all the pairs of units in the population.
//' @param pi A vector of first order inclusion probabilities of the units of the population.
//' @param s A vector of labels of the sample.
//' @return Return the Spatial Balance Index.
//' @references
//' Stevens DL, Olsen AR (2004). “Spatially Balanced Sampling of Natural Resources.”
//' \emph{Journal of the American Statistical Association}, \strong{99}(465), 262–278.
//' @examples
//' \dontshow{
//' d <- matrix(runif(200), 100, 2)
//' dis <- as.matrix(dist(d))
//' pi <- rep(10 / 100, 100)
//' sample <- sample(1:100,10)
//' sbi(dis, pi, sample)
//' }
//' \donttest{
//' dis <- as.matrix(dist(cbind(simul1$x, simul1$y))) # distance matrix
//' vec <- rep(0, nrow(dis)) # vector of constraints
//' stand_dist <- stprod(dis, vec) # standardized matrix
//' nsamp <- 100 # sample size
//' pi <- rep(100 / nrow(dis), nrow(dis)) # vector of probabilities inclusion
//' sample <- pwd(stand_dist, 100) # sample
//' sbi(dis, pi, sample[, 2])
//' }
//' @importFrom stats var
//' @export
// [[Rcpp::export]]

double sbi(arma::mat dis, arma::vec pi, arma::uvec s)
{
  if(dis.is_square() == FALSE)
  {
    throw Rcpp::exception("The distance matrix has to be N x N.");
  }
  if(dis.is_symmetric() == FALSE)
  {
    Rcpp::warning("The distance matrix is not symmetric.");
  }
  if(pi.n_elem != dis.n_rows)
  {
    Rcpp::warning("The vector pi has length different from population size.");
  }
  arma::uvec near;
  arma::uvec ii;
  int N = pi.n_elem;
  int n = s.n_elem;
  arma::vec incl(n, arma::fill::zeros);
  for(int i = 0; i < N; i++)
  {
    ii = i;
    near = arma::find(dis.submat(ii, s-1) == dis.submat(ii, s-1).min());
    incl(near) = incl(near) + pi(i);
  }
  return arma::var(incl);
}
