'''
Problem: Check if One String is a Permutation of Another
Difficulty: Easy

Problem Statement:
Given two strings, s1 and s2, write a function to determine if s1 is a permutation of s2.
A string is a permutation of another if it contains the same characters in the same quantities, but possibly in a different order.

Return true if s1 is a permutation of s2, otherwise return false.

Example:
Example 1:

plaintext
Copy code
Input: s1 = "abc", s2 = "bca"
Output: true
Explanation: "bca" is a permutation of "abc".
Example 2:

plaintext
Copy code
Input: s1 = "abc", s2 = "def"
Output: false
Explanation: "def" does not contain the same characters as "abc".

'''

#include <iostream>

using namespace std;

bool check_permutation(string &s1, string &s2){

    for(int i = 0; i < s1.size(); i++){
        for(int j = 0; j < s1.size()-i-1; j++){
            if(s1[j] > s1[j+1]){
                swap(s1[j], s1[j+1]);
            }
        }
    }

    for(int i = 0; i < s2.size(); i++){
        for(int j = 0; j < s2.size()-i-1; j++){
            if(s2[j] > s2[j+1]){
                swap(s2[j], s2[j+1]);
            }
        }
    }

    cout << s1 << " " << s2 << endl;
    cout << (s1 == s2) << endl;

    return (s1 == s2);
}

int main(){

    string s1 = "abc";
    string s2 = "bad";
    
    bool result = check_permutation(s1, s2);

    result == 0 ? cout << "false" << endl : cout << "true" << endl;

    return 0;
}