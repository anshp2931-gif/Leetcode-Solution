// Last updated: 07/04/2026, 10:07:43
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        map<int, int> freq;
5
6        for (int num : nums) {
7            freq[num]++;
8        }
9
10        int n = nums.size();
11        for (auto it : freq) {
12            if (it.second > n / 2) {
13                return it.first;
14            }
15        }
16
17        return -1; 
18    }
19};