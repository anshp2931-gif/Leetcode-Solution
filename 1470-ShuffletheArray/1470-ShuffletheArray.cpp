// Last updated: 19/04/2026, 22:45:48
1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4       
5       int length = nums.size();
6       vector <int> res (length,0);
7       for(int i=0;i<n;i++){
8        res[2*i]=nums[i];
9        res[2*i+1]=nums[n+i];
10       }
11       return res;
12
13
14    }
15};