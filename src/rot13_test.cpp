// (c) 2020 Jim Stockwell
// This code is licensed under MIT license
// (see http://opensource.org/licenses/MIT for details)

#include <string>
using namespace std;

extern string& transform(string& source, string& dest);


#define CATCH_CONFIG_MAIN
#include "../lib/catch.hpp"

TEST_CASE("Empty string works") {
    string source;
    string dest;

    REQUIRE(transform(source.assign(""),dest) == "");
    REQUIRE(transform(source.assign("abcdefghijklm"),dest) == "nopqrstuvwxyz");
    REQUIRE(transform(source.assign("nopqrstuvwxyz"),dest) == "abcdefghijklm");
    REQUIRE(transform(source.assign("ABCDEFGHIJKLM"),dest) == "NOPQRSTUVWXYZ");
    REQUIRE(transform(source.assign("NOPQRSTUVWXYZ"),dest) == "ABCDEFGHIJKLM");
    REQUIRE(transform(source.assign(".,123"),dest) == ".,123");
}