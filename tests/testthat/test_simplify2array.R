expect_true(
   is.matrix(HW6::simplify2array(list(1:2, 3:4, 5:6)))
)


x <- list(runif(10),runif(10),runif(10),runif(10),runif(10))
expect_equal(
length(x), ncol(HW6::simplify2array(x))
)


expect_equal(
HW6::simplify2array(list(1:2, 3:4, 5:6))
,matrix(c(
1,3,5,
2,4,6
),
2,3, byrow = TRUE)
)

expect_equal(
HW6::simplify2array(list(1:2, c (NA, NA), 5:6))
,matrix(c(
1,NA,5,
2,NA,6
),
2,3, byrow = TRUE)
)


expect_equal(
HW6::simplify2array(list(1:2))
,matrix(c(
1,2),
2,1, byrow = TRUE)
)

expect_equal(
HW6::simplify2array(list(1))
,matrix(c(
1),
1,1, byrow = TRUE)
)



