// Last updated: 22/04/2026, 21:47:05
1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4        
5        int spaceCount = 0;
6        for (int i = 0; i < s.length(); i++) {
7            if (s[i] == ' ') {
8                spaceCount++;
9            }
10            if (spaceCount == k) {
11                return s.substr(0, i);
12            }
13        }
14        return s; 
15    }
16};