// Last updated: 21/04/2026, 21:00:20
1class Solution {
2public:
3    string triangleType(vector<int>& nums) {
4        
5         int a = nums[0];
6         int b = nums[1];
7         int c = nums[2];
8         if(a+b<=c || a+c <=b || b+c<=a){
9            return "none";
10         }
11         if(a==b && b==c){
12            return "equilateral";
13         }
14else if(a==b || b==c || a==c){
15    return "isosceles";
16}
17else{
18    return "scalene";
19}
20
21    }
22};