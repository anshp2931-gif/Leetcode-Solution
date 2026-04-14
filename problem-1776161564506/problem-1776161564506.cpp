// Last updated: 14/04/2026, 15:42:44
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if (strs.empty()) return "";
5
6        string prefix = strs[0]; 
7
8        for (int i = 1; i < strs.size(); i++) {
9            while (strs[i].find(prefix) != 0) {
10                prefix.pop_back(); 
11                if (prefix.empty()) return "";
12            }
13        }
14
15        return prefix;
16    }
17};