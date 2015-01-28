expect_equal(length(mode(c (5,8,3,9,3,0,1,5,4,5,9))),1)

expect_equal(mode(c (5,8,3,9,3,0,1,5,4,5,9)),5)

expect_equal(mode(c (5,5,5,5,5,4,4,4,4,4,9)),5)

expect_equal(mode(c (1,2,3,4,5,6,7,8,9)),1)

expect_equal(mode(c (1,1,NA,NA,NA)),1)

expect_equal(mode(c (1,1,NA,NA,NA)),1)
expect_true(is.na(mode(c (NA,NA,NA))))

expect_equal(mode ( c (0.033,0.033,5.3,6.4,6.3)),0)
expect_error(mode ( c ("0.033",'4','5')))
expect_equal(mode(c (1)),1)

expect_equal(mode(c (-5,8,3,9,3,0,1,5,4,5,9)),9)
