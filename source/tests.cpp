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

TEST_CASE("describe_sum_multiples ", "[sum_multiples]" )
{
REQUIRE (sum_multiples(10) == 23);
REQUIRE (sum_multiples(1000) == 12);
}

int main (int argc ,char* argv [])
{
return Catch::Session().run(argc, argv);
}