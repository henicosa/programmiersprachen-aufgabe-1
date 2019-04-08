#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include "aufgabe_1_3.cpp"

TEST_CASE("describe_ggT ", "[gcd]" )
{
REQUIRE ( ggT(2 ,4) == 2);
REQUIRE ( ggT(9 ,0) == 0);
REQUIRE ( ggT(3 ,7) == 1);
}

TEST_CASE("describe_catchSum ", "[catchSum]" )
{
REQUIRE ( checkSum(120252) == 12);
REQUIRE ( checkSum(000000) == 0);
REQUIRE ( checkSum(520892) == 26);
REQUIRE ( checkSum(999999) == 54);
}

TEST_CASE("describe_leastCommon ", "[leastCommon]" )
{
REQUIRE ( leastCommon(20) == 232792560);
}

TEST_CASE("describe_sum_multiples ", "[sum_multiples]" )
{
REQUIRE (sum_multiples(5) == 8);
REQUIRE (sum_multiples(6) == 14);
REQUIRE (sum_multiples(9) == 23);
REQUIRE (sum_multiples(10) == 33);
REQUIRE (sum_multiples(1000) == 234168);
}

TEST_CASE("describe_cylinder", "[cylinder]" )
{
REQUIRE (volumeCylinder(2,4) == Approx(50.265));
REQUIRE (surfaceCylinder(2,4) == Approx(75.398223686));
}

TEST_CASE("describe_factorial", "[factorial]" )
{
REQUIRE (factorial(5) == 120);
REQUIRE (factorial(0) == 1);
}

TEST_CASE("describe_is_prime", "[is_prime]" )
{
REQUIRE (is_prime(5) == true);
REQUIRE (is_prime(3343) == true);
REQUIRE (is_prime(1) == false);
REQUIRE (is_prime(55) == false);
REQUIRE (is_prime(0) == false);
}

TEST_CASE("describe_fract", "[fract]" )
{
REQUIRE (fract(5.3) == Approx(0.3));
REQUIRE (fract(0.045) == Approx(0.045));
REQUIRE (fract(-9.083) == Approx(-0.083));
}

int main (int argc ,char* argv [])
{
return Catch::Session().run(argc, argv);
}