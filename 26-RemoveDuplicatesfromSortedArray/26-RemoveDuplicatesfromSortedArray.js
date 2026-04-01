// Last updated: 01/04/2026, 23:34:33
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var removeDuplicates = function(nums) {
6   if(nums.length===0)
7   return 0;
8   let i=0;
9   let j=0;
10   let len= nums.length;
11   while(j<len){
12    if(nums[j]!==nums[i]){
13        i++;
14        nums[i]=nums[j];
15    }
16    j++;
17   }
18   return i+1;
19};