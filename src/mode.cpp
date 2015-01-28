#include <Rcpp.h>
using namespace Rcpp;

//' @title  Mode
//' @description function mode() determines the most frequently occurring value in an integer vector (mode).
//'
//' @param x - integer vector
//' @return Integer, containing the most frequently occurring value in the input vector
//'
//' @examples
//'
//' mode(c (5,8,3,9,3,0,1,5,4,5,9))
//' mode(c (1))
//' mode(1:10)
//'
//' @export
// [[Rcpp::export]]

int mode (const IntegerVector x ) {
    int Nx = x.size();
    int counter = 1;
    int m =1 ;
    int val_m = x[0];
    int val_p = x[0];
    std::sort(x.begin(), x.end());
    for (int i=1; i < Nx; ++i) {
       if (!IntegerVector::is_na(x[i])) {
         if (val_p == x[i]) {
            counter++;
         } else counter =0;
         if (counter >= m) {
            m = counter;
            val_m = x[i];
         }
         val_p = x[i];
       }
      }
      return val_m;
}

