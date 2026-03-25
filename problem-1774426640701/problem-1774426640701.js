// Last updated: 25/03/2026, 13:47:20
1/**
2 * @param {number} x
3 * @return {boolean}
4 */
5var isPalindrome = function(x) {
6    // Negative numbers are not palindrome
7    if (x < 0) return false;
8
9    let original = x;
10    let reversed = 0;
11
12    while (x > 0) {
13        let digit = x % 10;
14        reversed = reversed * 10 + digit;
15        x = Math.floor(x / 10);
16    }
17
18    return original === reversed;
19};
20