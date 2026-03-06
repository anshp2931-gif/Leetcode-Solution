// Last updated: 06/03/2026, 16:00:12
/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
    let maxSpace = 0;
    for(let i = 0;i<sentences.length;i++){
        let spaceCount = 0;
        for(let j = 0 ; j<sentences[i].length;j++){
            if(sentences[i][j]===" "){
                spaceCount++;
            }
            else{
                continue;
            }
            if(maxSpace<spaceCount){
                maxSpace = spaceCount;
            }
            
        }
    }
    return 1+maxSpace;
};