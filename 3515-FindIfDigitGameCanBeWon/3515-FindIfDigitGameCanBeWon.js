// Last updated: 06/03/2026, 16:00:04
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canAliceWin = function(nums) {
    let sumSingle = 0;
    let sumDouble = 0;

    for(let i = 0 ; i<nums.length ; i++){
        if(nums[i]<=9){
            sumSingle+=nums[i];
        }
        else{
            sumDouble+=nums[i];
        }
    }
    return sumSingle!==sumDouble;
};