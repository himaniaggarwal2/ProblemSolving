//https://www.interviewcake.com/question/cpp/highest-product-of-3?course=fc1&section=greedy

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

int highestProductOf3(const vector<int>& vec)
{
    // calculate the highest product of three numbers
    vector<int>vectorOfInts=vec;
    if(vectorOfInts.size()<3){
        throw invalid_argument("Not sufficient values provided");
    }
    int n=vectorOfInts.size();
    std::sort(vectorOfInts.begin(),vectorOfInts.end());
    int value1_max=vectorOfInts[n-1]*vectorOfInts[n-2]*vectorOfInts[n-3];
    int value2_max=0;
    if(vectorOfInts[0]<0 and vectorOfInts[1]<0){
        value2_max=vectorOfInts[0]*vectorOfInts[1]*vectorOfInts[n-1];
    }

    return std::max(value1_max,value2_max);
}


















// tests

const lest::test tests[] = {
    {CASE("short vector") {
        const int actual = highestProductOf3({1, 2, 3, 4});
        const int expected = 24;
        EXPECT(actual == expected);
    }},

    {CASE("longer vector") {
        const int actual = highestProductOf3({6, 1, 3, 5, 7, 8, 2});
        const int expected = 336;
        EXPECT(actual == expected);
    }},

    {CASE("vector has one negative") {
        const int actual = highestProductOf3({-5, 4, 8, 2, 3});
        const int expected = 96;
        EXPECT(actual == expected);
    }},

    {CASE("vector has two negatives") {
        const int actual = highestProductOf3({-10, 1, 3, 2, -10});
        const int expected = 300;
        EXPECT(actual == expected);
    }},

    {CASE("vector is all negatives") {
        const int actual = highestProductOf3({-5, -1, -3, -2});
        const int expected = -6;
        EXPECT(actual == expected);
    }},

    {CASE("exception with empty vector") {
        EXPECT_THROWS(highestProductOf3({}));
    }},

    {CASE("exception with one number") {
        EXPECT_THROWS(highestProductOf3({1}));
    }},

    {CASE("exception with two numbers") {
        EXPECT_THROWS(highestProductOf3({1, 1}));
    }},
};

int main(int argc, char** argv)
{
    return lest::run(tests, argc, argv);
}