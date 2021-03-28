// https://www.interviewcake.com/question/cpp/permutation-palindrome?course=fc1&section=hashing-and-hash-tables

// Write an efficient function that checks whether any 
// permutation of an input string is a palindrome. 

#include <iostream>
#include <bits/stdc++.h>
#include <string>

// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

bool hasPalindromePermutation(const string& str)
{
    // check if any permutation of the input is a palindrome
    unordered_map<char,int> mp;
    int count=0;
    if(str.empty())return true;
    if(str.size()<2) return true;
    
    for(int i=0;i<str.size();i++){
        if(mp.find(str[i])==mp.end()) mp[str[i]]=1;
        else mp[str[i]]++;
    }
    for(auto it= mp.begin();it!=mp.end();it++){
        if((it->second)%2!=0){
            count++;
        }
        if(count>=2) return false;
    }
    return true;
}


















// tests

const lest::test tests[] = {
    {CASE("permutation with odd number of chars") {
        const auto result = hasPalindromePermutation("aabcbcd");
        EXPECT(result == true);
    }},
    {CASE("permutation with even number of chars") {
        const auto result = hasPalindromePermutation("aabccbdd");
        EXPECT(result == true);
    }},
    {CASE("no permutation with odd number of chars") {
        const auto result = hasPalindromePermutation("aabcd");
        EXPECT(result == false);
    }},
    {CASE("no permutation with even number of chars") {
        const auto result = hasPalindromePermutation("aabbcd");
        EXPECT(result == false);
    }},
    {CASE("empty string") {
        const auto result = hasPalindromePermutation("");
        EXPECT(result == true);
    }},
    {CASE("one character string") {
        const auto result = hasPalindromePermutation("a");
        EXPECT(result == true);
    }}
};

int main(int argc, char** argv)
{
    return lest::run(tests, argc, argv);
}

//Solution: We can simply check that each character appears an 
// even number of times (unless there is a middle character, 
// which can appear once or some other odd number of times). 
// This ensures that the characters can be ordered so that each 
// char on the left side of the string has a matching char on the
//  right side of the string.
