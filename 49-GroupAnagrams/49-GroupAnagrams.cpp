// Last updated: 06/04/2026, 12:07:31
1#include <vector>
2#include <string>
3#include <unordered_map>
4#include <algorithm>
5using namespace std;
6
7class Solution {
8public:
9    vector<vector<string>> groupAnagrams(vector<string>& strs) {
10        unordered_map<string, vector<string>> mp;
11
12        for (string s : strs) {
13            string temp = s;
14            sort(temp.begin(), temp.end());  
15            
16            mp[temp].push_back(s);  
17        }
18
19        vector<vector<string>> result;
20
21        for (auto it : mp) {
22            result.push_back(it.second);
23        }
24
25        return result;
26    }
27};