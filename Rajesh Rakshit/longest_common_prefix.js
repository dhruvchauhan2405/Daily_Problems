/**
 * @param {string[]} strs
 * @return {string}
 */

function check(a,  b) {
  if (a.length> b.length) {
    return a.substr(0,b.length) === b;
  }
  else {
    return b.substr(0,a.length) === a;
  }
}


var longestCommonPrefix = function(strs) {
    
let prefix=strs[0]


for(let i=1;i<strs.length;i++){

while(!check(prefix,strs[i]))
    
{   
    prefix=prefix.substring(0,prefix.length-1)}
  
}       
    
    return prefix.length===0? "" :prefix ;
};
