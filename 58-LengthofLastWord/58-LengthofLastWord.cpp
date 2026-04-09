// Last updated: 09/04/2026, 22:35:18
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4
5     int i=s.length()-1;
6     while(i>=0 && s[i]==' '){
7        i--;
8     }
9     int length =0;
10     while(i>=0 && s[i]!=' '){
11        length++;
12        i--;
13     }
14     return length;
15        
16    }
17};