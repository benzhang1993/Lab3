//
// Created by benzh on 2018-09-27.
//

#define CATCH_CONFIG_MAIN // Tells Catch to provide a main()
#include "Catch.hpp"
#include "Stack.hpp"

TEST_CASE ("A new stack is empty", "[stack]") {

    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE ("Pop from an empty Stack") {
    Stack tester;
    REQUIRE_THROWS(tester.pop());
}

TEST_CASE ("Pushing elements to the Stack") {

    Stack tester;

    SECTION("Pushing 1 item") {
        tester.push(5);
        REQUIRE(tester.top() == 5);
        REQUIRE(tester.empty() == false);
        REQUIRE(tester.full() == false);
    }

    SECTION("Pushing 10 items") {
        for(int i = 0; i < 10; i++) {
            tester.push(i);
        }
        REQUIRE(tester.top() == 9);
        REQUIRE(tester.empty() == false);
        REQUIRE(tester.full() == true);
    }
}

TEST_CASE ("Popping elements") {
    Stack tester;

    tester.push(1);
    tester.push(2);
    tester.push(3);

    REQUIRE(tester.top() == 3);

    tester.pop();

    REQUIRE(tester.top() == 2);

    tester.pop();

    REQUIRE(tester.top() == 1);
}

TEST_CASE ("Print Stack from bottom to top") {
    Stack tester;

    tester.push(1);

    REQUIRE(tester.print() == "Stack: 1 ");
}