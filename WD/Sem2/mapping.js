let array = [1,2,3,4,5];
let sqarray = array.map((num)=>num*num);
console.log(sqarray);
 
let sum=[1,2,3,4,5];
let total =
sum.reduce((acc,currval)=>acc+currval,0);
console.log(total);