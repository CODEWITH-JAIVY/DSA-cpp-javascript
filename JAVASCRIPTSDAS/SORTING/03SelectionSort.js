const SelectionSort  = (arr)=>{
 
    for ( let i  =0 ; i <arr.length -1  ; i++ ) {
        let max = i  ;
        for ( let j  =i+1  ;  j<arr.length ; j++ ) {
            if( arr[j] <  arr[max]) {
                max  =  j  
            }
        }
        if ( max != i ) {
            let tem  = arr[max] 
            arr[max] = arr[i] 
            arr[i] = tem 
        }
    }
   
};

let arr= [3,2,1,6,5,4,0,8,7] 
SelectionSort(arr) 
console.log(arr);
