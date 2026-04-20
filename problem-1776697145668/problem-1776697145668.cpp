// Last updated: 20/04/2026, 20:29:05
1class Solution {
2public:
3    int sumOfMultiples(int n) {
4      
5        int sum =0;
6        for (int i=0;i<=n;i++){
7            if(i%3==0||i%5==0||i%7==0){
8                sum +=i;
9            }
10        }
11return sum;
12
13    }
14};