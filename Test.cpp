#include "doctest.h"
#include "snowman.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Good snowman code") {
    //test unit for each part
    CHECK(ariel::snowman(11111111) == string(" _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(ariel::snowman(22222222) == string("  ___\n .....\n\\(o.o)/\n (] [)\n (\" \")"));
    CHECK(ariel::snowman(33333333) == string("   _\n  /_\\\n (O_O)\n/(> <)\\\n (___)"));
    CHECK(ariel::snowman(44444444) == string("  ___\n (_*_)\n (- -)\n (   )\n (   )"));
    //test combination of parts
    CHECK(ariel::snowman(12344321) == string(" _===_\n (O.-)\n (] [)\\\n ( : )"));
    CHECK(ariel::snowman(43211234) == string("  ___\n (_*_)\n (o_.)/\n<(> <)\n (   )"));
    CHECK(ariel::snowman(11114411) == string(" _===_\n (.,.)\n ( : )\n ( : )"));
    CHECK(ariel::snowman(33232124) == string("   _\n  /_\\\n\\(o_O)\n (] [)>\n (   )"));
    CHECK(ariel::snowman(23412341) == string("  ___\n .....\n\\(-_.)\n (   )\\\n ( : )"));
    CHECK(ariel::snowman(22334411) == string("  ___\n .....\n (O.O)\n ( : )\n ( : )"));
    CHECK(ariel::snowman(43211232) == string("  ___\n (_*_)\n (o_.)/\n<(> <)\n (\" \")" ));
    CHECK(ariel::snowman(31412111) == string("   _\n  /_\\\n\\(-,.)\n ( : )>\n ( : )"));
    CHECK(ariel::snowman(22233341) == string("  ___\n .....\n (o.O)\n/(   )\\\n ( : )"));
    CHECK(ariel::snowman(14234123) == string(" _===_\n (o O)\n (] [)>\n (___)"));
}

TEST_CASE("Bad snowman code") {
            CHECK_THROWS(ariel::snowman(555));
            CHECK_THROWS(ariel::snowman(123456789));
            CHECK_THROWS(ariel::snowman('a'));
            CHECK_THROWS(ariel::snowman(01010101));
            CHECK_THROWS(ariel::snowman(-12345678));
            CHECK_THROWS(ariel::snowman(-1-2-3));
    /* Add more checks here */
}


