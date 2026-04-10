// Last updated: 10/04/2026, 15:58:46
1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    string reverseWords(string s) {
7        vector<string> words;
8        string word = "";
9        
10        for (int i = 0; i < s.size(); i++) {
11            if (s[i] != ' ') {
12                word += s[i];
13            } 
14            else {
15              
16              
17                if (word != "") {
18                    words.push_back(word);
19                    word = "";
20                }
21            }
22        }
23        
24        if (word != "") {
25            words.push_back(word);
26        }
27        
28        reverse(words.begin(), words.end());
29        
30        string result = "";
31
32
33
34        for (int i = 0; i < words.size(); i++) {
35            result += words[i];
36            if (i != words.size() - 1) result += " ";
37        }
38
39
40
41
42        
43        return result;
44    }
45};