/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {

    let arr=s.split(' ')
    let n
    for(let i=0;i<arr.length;i++){
        if(arr[arr.length-1-i]!=''){
    n=arr[arr.length-1-i].length
    break;
        }
    }
    //     return s.split(' ').reduce((acc,curr)=>{
    // curr.length>acc?acc=curr.length:acc=acc
    // return acc
    //     },0)
    return n
    
    };