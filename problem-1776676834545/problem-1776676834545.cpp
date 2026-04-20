// Last updated: 20/04/2026, 14:50:34
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int product =1;
5        int sum =0;
6
7        while(n>0){
8            int digit = n%10;
9            product = product *digit;
10            sum =sum+digit;
11            n=n/10;
12        }
13        return product - sum;
14    }
15};