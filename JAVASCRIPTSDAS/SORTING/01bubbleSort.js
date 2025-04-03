function BubbleSort ( arr ) {
    for ( let i =0  ; i < arr.length -1  ; i++ ) {
        for( let j =0  ; j < arr.length-i-1 ; j++ ) {
            if( arr[j]  > arr[j+1]) {
                let temp = arr[j] ;
                arr[j]  = arr[j+1] ;
                arr[j+1] = temp  ; 
            }
        }
    }
    return arr  ;  
}
function buubleSortUsingpredefineFuntion(arr) {
    arr.sort((a , b ) => a -b ) 
    console.log("sort arr using predefine funtion ");
    
    console.log(arr);
    
}

let arr = [3,2,1,6,5,4,10] 
BubbleSort(arr) 
// buubleSortUsingpredefineFuntion (arr) 
// console.log(arr);

console.log(" Using tradition for loop ");
for (let index = 0; index < arr.length; index++) {
    console.log(arr[index]);
}
console.log("Using for of loop ");

for (const num   of  arr  ) {
    console.log(num);
}
console.log("using for each loop ");

arr.forEach(num => {
    console.log(num);
    
});
console.log("Uinsg for in loop is not recommended for array "); 


