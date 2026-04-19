// Last updated: 19/04/2026, 22:18:27
1class Solution {
2public:
3    vector<double> convertTemperature(double celsius) {
4        
5      double kel = celsius +273.15;
6      double fah = celsius *1.8+32;
7
8      return {kel, fah};
9     
10        
11    }
12};