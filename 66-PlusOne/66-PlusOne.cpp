// Last updated: 09/04/2026, 23:29:12
1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4          
5          int n=digits.size();
6          for(int i=n-1;i>=0;i--){
7            if(digits[i]<9){
8                digits[i]++;
9                return digits;
10            }
11            digits[i]=0;
12          }
13    
14
15       digits.insert(digits.begin(),1);
16       return digits;
17          
18
19
20
21    }
22};