#include <iostream>
#include <bits/stdc++.h>
#include <vector>

// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

unsigned int findRepeat(const vector<unsigned int>& numbers)
{
    // find a number that appears more than once
    if(numbers.size()<=1){
        throw invalid_argument("jkl");
    }
    std::map<int , int> check;
    for(int i=0;i<numbers.size();i++){
        if(check.find(numbers[i])==check.end()) check[numbers[i]]=1;
        else check[numbers[i]]++;
    }
    for(auto it=check.begin();it!=check.end();it++){
        if(it->second>1) return it->first;
    }
    return 0;
}


















// tests

const lest::test tests[] = {
    {CASE("just the repeated number") {
        const vector<unsigned int> numbers {1, 1};
        const unsigned int expected = 1;
        const unsigned int actual = findRepeat(numbers);
        EXPECT(actual == expected);
    }},
    {CASE("short vector") {
        const vector<unsigned int> numbers {1, 2, 3, 2};
        const unsigned int expected = 2;
        const unsigned int actual = findRepeat(numbers);
        EXPECT(actual == expected);
    }},
    {CASE("medium vector") {
        const vector<unsigned int> numbers {1, 2, 5, 5, 5, 5};
        const unsigned int expected = 5;
        const unsigned int actual = findRepeat(numbers);
        EXPECT(actual == expected);
    }},
    {CASE("long vector") {
        const vector<unsigned int> numbers {4, 1, 4, 8, 3, 2, 7, 6, 5};
        const unsigned int expected = 4;
        const unsigned int actual = findRepeat(numbers);
        EXPECT(actual == expected);
    }}
};

int main(int argc, char** argv)
{
    return lest::run(tests, argc, argv);
}