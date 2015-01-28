#include <Rcpp.h>
using namespace Rcpp;

//' @title  perms
//' @description Function perms() generates all the possible permutations of the set {1,2,...,n} (for some given n)
//'
//' @param n - positive integer
//' @return a matrix with n! rows and n columns
//' @examples
//' perms(3)
//' perms(1)
//' @export
// [[Rcpp::export]]

IntegerVector perms (int n) {
if (n<=0) stop("n is not positive integer");

IntegerVector p (n);
int n_fact =1;
for (int i=0; i<n; ++i) {
   p[i] = i+1;
   n_fact *= (i+1);
}

IntegerVector out (n*n_fact);
out.attr("dim") = IntegerVector::create(n_fact,n);
for (int i=0; i<n; ++i)  out[n_fact*i] = p[i] ;
int j=1;
while (std::next_permutation(p.begin(), p.end())) {
 for (int i=0; i<n; ++i)  out[j+n_fact*i] = p[i] ;
 j++;
}
return out;
}
