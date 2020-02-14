/*
Given two equal-size strings s and t. In one step you can choose any character of t and replace it with another character.

Return the minimum number of steps to make t an anagram of s.

An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.



Example 1:

Input: s = "bab", t = "aba"
Output: 1
Explanation: Replace the first 'a' in t with b, t = "bba" which is anagram of s.
Example 2:

Input: s = "leetcode", t = "practice"
Output: 5
Explanation: Replace 'p', 'r', 'a', 'i' and 'c' from t with proper characters to make t anagram of s.
*/

class Solution {
public:
    int minSteps(string s, string t) {
       unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for(int i=0;i<s.length();i++){
            m1[s[i]]+=1;
        }
        for(int i=0;i<t.length();i++){
            m2[t[i]]+=1;
        }
        int res=0;

        for(auto x: m1){

            if(m2[x.first]<x.second){
                res += abs(m2[x.first]-x.second);
            }
        }
        return res;
    }
};