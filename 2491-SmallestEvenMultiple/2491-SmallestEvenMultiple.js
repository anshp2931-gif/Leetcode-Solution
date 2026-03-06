// Last updated: 06/03/2026, 16:00:09
/**
 * @param {number} n
 * @return {number}
 */
var smallestEvenMultiple = function(n) {
    if(n%2===0){
        return n;
    }
    else{
        return n*2;
    }
};