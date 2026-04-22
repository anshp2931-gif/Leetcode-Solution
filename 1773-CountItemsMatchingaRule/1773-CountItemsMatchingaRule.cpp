// Last updated: 22/04/2026, 21:18:51
1class Solution {
2public:
3    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
4       
5            string s1="" , s2="";
6
7            for(string &w : word1){
8                s1 =s1+w;
9            }
10            for(string &w: word2){
11                s2 =s2+w;
12            }
13            return s1==s2;
14
15    }
16};