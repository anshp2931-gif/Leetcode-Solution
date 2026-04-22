// Last updated: 22/04/2026, 20:59:41
1class Solution {
2public:
3    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
4        
5        int index;
6        if(ruleKey=="type")
7        index=0;
8        else if (ruleKey=="color")
9        index=1;
10        else index=2;
11
12        int count =0;
13
14        for(int i=0 ; i<items.size();i++){
15            if(items[i][index]==ruleValue){
16                count++;
17            }
18        }
19      return count; 
20    }
21};