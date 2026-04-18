// Last updated: 18/04/2026, 22:32:56
1class Solution {
2public:
3    int countDigits(int num) {
4        
5        int original =num;
6        int count=0;
7        while(num>0){
8            int digit = num %10;
9            if(original % digit ==0){
10                count++;
11            }
12            num =num /10;
13        }
14
15return count;
16
17        
18    }
19};