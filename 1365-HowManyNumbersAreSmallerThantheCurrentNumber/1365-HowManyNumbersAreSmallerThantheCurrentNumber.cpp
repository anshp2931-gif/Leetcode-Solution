// Last updated: 20/04/2026, 15:46:17
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        
5        int n = nums.size();
6        vector<int>res(n,0);
7        for(int i=0;i<n;i++){
8            int count =0;
9            for(int j=0;j<n;j++){
10                if(i!=j && nums[j]<nums[i]){
11                    count++;
12                }
13            
14            }
15            res[i] =count ;
16        }
17        return res;
18
19
20
21
22                            
23    }
24};