expect_equal(
perms(3),
matrix(c(
1,2,3,
1,3,2,
2,1,3,
2,3,1,
3,1,2,
3,2,1
),
6,3, byrow = TRUE)
)



expect_equal(
perms(1),
matrix(c(
1
),
1,1, byrow = TRUE)
)

expect_true(is.matrix(
 perms(3)
))


expect_error(perms(0))
