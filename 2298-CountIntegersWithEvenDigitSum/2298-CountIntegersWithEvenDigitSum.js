// Last updated: 06/03/2026, 16:00:10
/**
 * @param {number} num
 * @return {number}
 */
var countEven = function (num) {
    let count = 0;
    for (let i = 2; i <= num; i++) {
        if (i <= 9) {
            if (i % 2 === 0) {
                count++
            }
        }
        else {
            let temp = i;
            let sum = 0;
            while (temp > 0) {
                let digit = temp % 10;
                sum = sum + digit;
                temp = Math.floor(temp / 10);
            }
            if (sum % 2 === 0) {
                count++
            }
        }
    }
    return count;
};