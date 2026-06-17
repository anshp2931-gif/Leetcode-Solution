// Last updated: 17/06/2026, 11:59:04
class Solution {
public:
    bool doesAliceWin(string s) {
        for(char ch:s){
            if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                return true;
            }
        }
        return false;
    }
};