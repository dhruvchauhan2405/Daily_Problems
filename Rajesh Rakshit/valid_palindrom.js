var isPalindrome = function(s) {

    if(s==='')
    return true;

    
    let str=s.replace(/[^0-9a-zA-Z]/g, '').toLowerCase()
    console.log(str,reverseStr(str))
    if(reverseStr(str)===str)
    return true
    else
    return false
    
};


function reverseStr(str){
    if(str==='')
    return "";

    return reverseStr(str.substr(1)) + str.charAt(0);
}
