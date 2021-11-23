#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"

unsigned int Factorial(unsigned int number) {
    return number <= 1 ? number : Factorial(number - 1) * number;
}

TEST_CASE("Factorials are computed", "[factorial]")
{
    std::cout << "liang";
    std::cout << "zhongguo ";
    REQUIRE(Factorial(1) == 6);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 5);
    REQUIRE(Factorial(10) == 3628800);
}

TEST_CASE("Factorials are computed2", "[factorial]")
{
    // REQUIRE(Factorial(1) == 6);
    REQUIRE(Factorial(2) == 2);
    // REQUIRE(Factorial(3) == 5);
    REQUIRE(Factorial(10) == 3628800);
}
