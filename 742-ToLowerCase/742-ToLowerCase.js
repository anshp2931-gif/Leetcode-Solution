// Last updated: 06/03/2026, 21:43:03
/**
 * @param {string} s
 * @return {string}
 */
var toLowerCase = function(s) {
    let res = ""
    for(let i=0; i<s.length ; i++){
        let char = s.charCodeAt(i);
        if(char>=65 && char<=90){
            char = char +32;
        }
        res += String.fromCharCode(char);
    }
    return res
};