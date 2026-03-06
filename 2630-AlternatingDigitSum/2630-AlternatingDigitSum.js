// Last updated: 06/03/2026, 16:00:07
/**
 * @param {number} n
 * @return {number}
 */
var alternateDigitSum = function (n) {
    let res = [];
    let temp = n;

    while (temp > 0) {
        let digit = temp % 10;

        temp = Math.floor(temp / 10);


        res.push(digit);
      
    }

    let sum = 0;
    let count = 0;
    for (let i = res.length - 1; i >= 0; i--) {
        if (count % 2 === 0) {
            sum += res[i];
            count++
        }
        else {
            sum -= res[i]
            count++
        }
    }
    return sum;
}


