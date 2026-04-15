// Last updated: 15/04/2026, 11:49:40
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char, char> mp1, mp2;
5
6        for(int i = 0; i < s.size(); i++) {
7            if(mp1.count(s[i]) && mp1[s[i]] != t[i]) return false;
8            if(mp2.count(t[i]) && mp2[t[i]] != s[i]) return false;
9
10            mp1[s[i]] = t[i];
11            mp2[t[i]] = s[i];
12        }
13
14        return true;
15    }
16};