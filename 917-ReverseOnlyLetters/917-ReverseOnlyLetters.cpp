// Last updated: 09/04/2026, 10:44:09
1class Solution {
2public:
3    string reverseOnlyLetters(string s) {
4        int left = 0;
5        int right = s.size() - 1;
6
7        while (left < right) {
8            if (!((s[left] >= 'a' && s[left] <= 'z') || 
9                  (s[left] >= 'A' && s[left] <= 'Z'))) {
10                ++left;
11            }
12            else if (!((s[right] >= 'a' && s[right] <= 'z') || 
13                       (s[right] >= 'A' && s[right] <= 'Z'))) {
14                --right;
15            }
16            else {
17                swap(s[left], s[right]);
18                ++left;
19                --right;
20            }
21        }
22
23        return s;
24    }
25};