// Last updated: 06/03/2026, 21:42:33
1/**
2 * @param {string} s
3 * @return {string}
4 */
5var toLowerCase = function(s) {
6    let res = ""
7    for(let i=0; i<s.length ; i++){
8        let char = s.charCodeAt(i);
9        if(char>=65 && char<=90){
10            char = char +32;
11        }
12        res += String.fromCharCode(char);
13    }
14    return res
15};