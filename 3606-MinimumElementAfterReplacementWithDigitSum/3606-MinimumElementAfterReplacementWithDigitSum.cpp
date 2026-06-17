// Last updated: 17/06/2026, 11:59:03
class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;

        for (int num : nums) {
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num = num / 10;
            }

            ans = min(ans, sum);
        }

        return ans;
    }
};