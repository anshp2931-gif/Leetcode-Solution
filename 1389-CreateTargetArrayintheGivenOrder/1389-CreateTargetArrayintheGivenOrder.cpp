// Last updated: 20/04/2026, 16:48:10
1class Solution {
2public:
3    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
4      int n =nums.size();
5      vector<int>target(n);
6      int size=0;
7
8      for(int i=0;i<n;i++){
9        for(int j=size;j>index[i];j--){
10            target[j]=target[j-1];
11        }
12        target[index[i]]=nums[i];
13        size++;
14      }
15      return target;
16    }
17};