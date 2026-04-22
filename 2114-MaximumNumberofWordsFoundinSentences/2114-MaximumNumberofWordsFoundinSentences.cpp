// Last updated: 22/04/2026, 20:42:09
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4       
5        int maxSpace =0;
6        for(int i=0; i<sentences.size();i++){
7            int spaceCount =0;
8            for(int j=0;j<sentences[i].length();j++){
9                if(sentences[i][j]==' '){
10                    spaceCount++;
11                }
12                if(maxSpace<spaceCount){
13                    maxSpace =spaceCount;
14                }
15            }
16        }
17return 1+ maxSpace;
18    }
19};