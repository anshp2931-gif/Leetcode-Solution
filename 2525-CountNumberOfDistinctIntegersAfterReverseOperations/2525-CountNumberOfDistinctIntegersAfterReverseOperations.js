// Last updated: 06/03/2026, 16:00:08
/**
 * @param {number[]} nums
 * @return {number}
 */
var countDistinctIntegers = function(nums) {
    let set = new Set();

    for (let num of nums) {
        set.add(num);

        let temp = num;
        let rev = 0;

        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp = Math.floor(temp / 10);
        }

        set.add(rev);
    }

    return set.size;
};