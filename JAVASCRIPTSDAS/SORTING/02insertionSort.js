
function InsertionSort(arr) {
    for( let i  =1 ; i < arr.length ; i++ ) {
      let tem  = arr[i] 
      let j = i -1  

      while (j >= 0  && arr[j] > tem) {
        arr[j+1] = arr[j] 
        j-- 
      }
      arr[j+1] = tem  ;
    }
    return arr  ; 
}

let arr=[9,6,3.3,8,5,2,2] 
 let result = InsertionSort(arr) 
 console.log(result);
 console.log(typeof(result));
 
 
