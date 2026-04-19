// Last updated: 19/04/2026, 17:26:45
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4       
5        int n =nums.size();
6        vector<int>res(n);
7
8        for (int i=0;i <n;i++){
9            res[i]=nums[nums[i]];
10          
11           
12        }
13return res;
14
15
16
17    }
18};