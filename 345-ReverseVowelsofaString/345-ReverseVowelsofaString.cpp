// Last updated: 09/04/2026, 10:39:24
1class Solution {
2public:
3    string reverseVowels(string s) {
4        int left = 0;
5        int right = s.size() - 1;
6
7        while (left < right) {
8            if (!(s[left] == 'a' || s[left] == 'A' ||
9                  s[left] == 'e' || s[left] == 'E' ||
10                  s[left] == 'i' || s[left] == 'I' ||
11                  s[left] == 'o' || s[left] == 'O' ||
12                  s[left] == 'u' || s[left] == 'U')) {
13                ++left;
14            }
15            else if (!(s[right] == 'a' || s[right] == 'A' ||
16                       s[right] == 'e' || s[right] == 'E' ||
17                       s[right] == 'i' || s[right] == 'I' ||
18                       s[right] == 'o' || s[right] == 'O' ||
19                       s[right] == 'u' || s[right] == 'U')) {
20                --right;
21            }
22            else {
23                swap(s[left], s[right]);
24                ++left;
25                --right;
26            }
27        }
28
29        return s;
30    }
31};