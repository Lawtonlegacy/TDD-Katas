#include "catch.hpp"
#include "FizzBuzzWoof.hpp"

TEST_CASE("A number is fizz if divisible by 3, or has 3 in it"){
    REQUIRE(isDivisible(3) == "Fizz");
    REQUIRE(isDivisible(33) == "Fizz");
    REQUIRE(isDivisible(99) == "Fizz");
}

