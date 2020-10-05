// (c) 2020 Jim Stockwell
// This code is licensed under MIT license
// (see http://opensource.org/licenses/MIT for details)

#include <string>
using namespace std;

extern string& transform(string& source, string& dest);


#define CATCH_CONFIG_MAIN
#include "../lib/catch.hpp"

TEST_CASE("Empty string works") {
    string source("");
    string dest;

    REQUIRE(transform(source.assign(""),dest) == "");
    REQUIRE(transform(source.assign("a"),dest) == "n");
    REQUIRE(transform(source.assign("n"),dest) == "a");
    REQUIRE(transform(source.assign("."),dest) == ".");
    REQUIRE(transform(source.assign("A"),dest) == "N");
    REQUIRE(transform(source.assign("N"),dest) == "A");
    REQUIRE(transform(source.assign("abc"),dest) == "nop");
}