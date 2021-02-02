#include "catch.hpp"
#include "FizzBuzzWoof.hpp"

TEST_CASE("A number is Fizz if divisible by 3"){
    REQUIRE(isDivisible(3) == "Fizz");
    REQUIRE(isDivisible(33) == "Fizz");
    REQUIRE(isDivisible(99) == "Fizz");
}

TEST_CASE("A number is Buzz if divisible by 5"){
    REQUIRE(isDivisible(5) == "Buzz");
    REQUIRE(isDivisible(20) == "Buzz");
    REQUIRE(isDivisible(100) == "Buzz");
}

TEST_CASE("A number is Woof if divisible by 7"){
    REQUIRE(isDivisible(7) == "Woof");
    REQUIRE(isDivisible(14) == "Woof");
    REQUIRE(isDivisible(77) == "Woof");
}

TEST_CASE("A number is FizzBuzz if divisible by 3 & 5"){
    REQUIRE(isDivisible(15) == "FizzBuzz");
    REQUIRE(isDivisible(30) == "FizzBuzz");
    REQUIRE(isDivisible(60) == "FizzBuzz");
}
