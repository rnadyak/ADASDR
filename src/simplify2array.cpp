#include <Rcpp.h>
using namespace Rcpp;

//' @title  simplify2array
//' @description Function simplify2array()  - simplify the list of numeric vectors to numeric matrix
//'
//' @param x - list of numeric vectors
//' @return numeric matrix
//' @examples
//' simplify2array(list(1:2, 3:4, 5:6))
//'
//' x <- list(runif(1000),runif(1000),runif(1000),runif(1000),runif(1000))
//' simplify2array (x)
//'
//' @export
// [[Rcpp::export]]

RObject simplify2array (List x) {


bool yeswecan = true;
bool not_numeric = false;
IntegerVector Nx (x.size());

 for (int i=0; i<x.size(); ++i) {

      if ( Rf_isNumeric(x[i]) ) {
         NumericVector elem(x[i]);
         Nx[i] = elem.size();
         if ( i>0 && !((Nx[i] == Nx[i-1]) ) ){
            yeswecan = false;
         }
      }


       else { not_numeric = true; break;}
  }




   if (not_numeric) {
         return (x);
   }
   else if (yeswecan == false) {return (x);}
   else {

            NumericVector out(Nx[0]*Nx.size());
            for (int i=0; i<x.size(); ++i) {
               NumericVector elem(x[i]);
               for (int r=0; r<elem.size(); ++r) {
                     out[i*Nx[0]+r] = elem[r];
               }
            }

          out.attr("dim") = IntegerVector::create(Nx[0],x.size());
          return (out);
   }
}
