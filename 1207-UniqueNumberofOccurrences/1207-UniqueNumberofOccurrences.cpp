// Last updated: 11/04/2026, 15:40:30
1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4       unordered_map<int,int> freq;
5
6       for(int num: arr){
7        freq[num]++;
8       }
9
10       unordered_set<int>a;
11       for(auto it: freq){
12        if(a.count(it.second)){
13            return false;
14        }
15        a.insert(it.second);
16       }
17       return true;
18
19
20    }
21};