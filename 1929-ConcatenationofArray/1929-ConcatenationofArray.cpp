// Last updated: 19/04/2026, 16:28:20
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4       
5    int length =nums.size();
6    vector<int>res(length*2,0);
7    for (int i=0;i<length;i++){
8        res[i]=nums[i];
9        res[i+length]=nums[i];
10    }
11    return res;
12    }
13};