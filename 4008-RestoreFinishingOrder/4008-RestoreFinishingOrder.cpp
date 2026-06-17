// Last updated: 17/06/2026, 11:58:55
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> answer;

        for (int person : order) {
            for (int frnd : friends) {
                if (person == frnd) {
                    answer.push_back(person);
                    break;
                }
            }
        }

        return answer;
    }
};