var totalFruit = function(fruits) {

if(fruits.length===1 || fruits.length===2  ){
    return fruits.length;
}

let freqArr=[]
let count=0;
let x=fruits[0]

for(let i=0;i<fruits.length;i++){
    if(fruits[i]===x){
        count=count+1;
    }
    else{

        freqArr.push([x,count])
        x=fruits[i];
        count=1;
    }

}

freqArr.push([x,count])
console.log(freqArr)

let firstKey=freqArr[0][0]
let firstValue=freqArr[0][1]
if(freqArr.length==1){
    return firstValue;
}
let secondKey=freqArr[1][0]

let secondValue=freqArr[1][1]
let sum=freqArr[0][1]+freqArr[1][1]
let max=sum;

if(freqArr.length==2){
    return firstValue+secondValue;
}

for(let i=2;i<freqArr.length;i++){
let x=freqArr[i][0]
let freq=freqArr[i][1]
if(x ===firstKey || x===secondKey  ){
sum = sum+freq;
sum>max?max=sum:max=max;
}
else{
console.log('freq',x,freq,sum,max)
firstKey=freqArr[i-1][0]
secondKey=x

    sum=freq+freqArr[i-1][1];
    sum>max?max=sum:max=max;
}

}

return max;
}
