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

TEST_CASE ("Pushing an element to the Stack")