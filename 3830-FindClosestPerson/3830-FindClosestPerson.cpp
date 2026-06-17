// Last updated: 17/06/2026, 11:59:01
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int person1 = abs(x - z);
        int person2 = abs(y - z);

        if (person1 < person2) {
            return 1;
        }
        else if (person2 < person1) {
            return 2;
        }
        else {
            return 0;
        }
    }
};