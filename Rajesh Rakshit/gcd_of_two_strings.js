var gcdOfStrings = function(str1, str2) {
    
 if(str1+str2===str2+str1){
        let n=str1.length
   let t=str2.length
   let k =gcd(n,t)
return str1.substring(0,k)
 }
 else{
     return ""
 }

};

function gcd(a, b) {
  	while(a != b){
      	if(a > b) {
          	a -= b;
      	}
      	else {
          	b -= a;
      	}
  	}
  	return a;
}
