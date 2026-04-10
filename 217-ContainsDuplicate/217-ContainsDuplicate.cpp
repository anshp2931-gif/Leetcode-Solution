// Last updated: 10/04/2026, 23:32:42
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4
5      unordered_set<int>a;
6      for(int num : nums){
7        if(a.count(num)){
8            return true;
9        }
10        a.insert(num);
11      }
12      return false;
13        
14        
15    }
16};