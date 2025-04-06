 function swap( arr , start , end  ) { 
    let temp  = arr[start] 
    arr[start] = arr[end] 
    arr[end] = temp 

 }
function SeperateEvenOdd( arr , size ) {
    let  start  = 0  , end  = size-1 ;
    while ( start < end  ) {
      if (  arr[start] % 2 == 0 ) {
          start++ ;
      }
      else if  ( arr[end] % 2 !=  0 ) {
          end --  ; 
      }
      else {
          swap(   arr ,  start , end ) ;
          start ++ ;
          end-- ;
  
      }
    }
    
}

let arr= [9,6,6,3,3,5,8,5,4,65,10]  
SeperateEvenOdd(arr , arr.length) 
console.log(arr);
