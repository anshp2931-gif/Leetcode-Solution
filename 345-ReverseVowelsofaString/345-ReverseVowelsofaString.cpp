// Last updated: 09/04/2026, 10:26:11
1class Solution {
2public:
3    string reverseVowels(string s) {
4        int left = 0;
5        int right = s.size() - 1;
6
7        while (left < right) {
8            while (left < right && 
9                  !(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u'||
10                    s[left]=='A'||s[left]=='E'||s[left]=='I'||s[left]=='O'||s[left]=='U')) {
11                left++;
12            }
13
14            while (left < right && 
15                  !(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u'||
16                    s[right]=='A'||s[right]=='E'||s[right]=='I'||s[right]=='O'||s[right]=='U')) {
17                right--;
18            }
19
20            swap(s[left], s[right]);
21            left++;
22            right--;
23        }
24
25        return s;
26    }
27};