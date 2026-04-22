// Last updated: 22/04/2026, 20:15:54
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxSpace = 0;
5
6        for (int i = 0; i < sentences.size(); i++) {
7            int spaceCount = 0;
8
9            for (int j = 0; j < sentences[i].length(); j++) {
10                if (sentences[i][j] == ' ') {
11                    spaceCount++;
12                }
13
14                if (maxSpace < spaceCount) {
15                    maxSpace = spaceCount;
16                }
17            }
18        }
19
20        return 1 + maxSpace;
21    }
22};