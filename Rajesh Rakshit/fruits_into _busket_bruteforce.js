/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function(fruits) {
let max=0;

for(let i=0;i<fruits.length;i++){
    
let count =0;
let newArr=[];
newArr.push(fruits[i]);
count=count+1;

    for(let j=i+1;j<fruits.length;j++){

//if fruits[j] present in the newArr -> push inside newArr
if(newArr.includes(fruits[j])){
    newArr.push(fruits[j])
}

//if fruits[j] does not present  in the newArr -> first check the count if count != 2  
else{
    if(count!=2){
        newArr.push(fruits[j]);
        count=count+1;
    }
    else{
        break;
    }
}
}
if(max<newArr.length){
    max=newArr.length
}

}
return max
    
};
