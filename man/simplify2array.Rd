% Generated by roxygen2 (4.1.0): do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{simplify2array}
\alias{simplify2array}
\title{simplify2array}
\usage{
simplify2array(x)
}
\arguments{
\item{x}{- list of numeric vectors}
}
\value{
numeric matrix
}
\description{
Function simplify2array()  - simplify the list of numeric vectors to numeric matrix
}
\examples{
simplify2array(list(1:2, 3:4, 5:6))

x <- list(runif(1000),runif(1000),runif(1000),runif(1000),runif(1000))
simplify2array (x)
}

