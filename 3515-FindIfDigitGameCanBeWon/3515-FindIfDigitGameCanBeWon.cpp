// Last updated: 17/06/2026, 11:59:05
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumSingle = 0;
        int sumDouble = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 9) {
                sumSingle += nums[i];
            } else {
                sumDouble += nums[i];
            }
        }

        return sumSingle != sumDouble;
    }
};