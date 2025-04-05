/* Given an array containing 0s and 1s , Write an algoritham to sort the array so that  0s come 1st followed by 1  */ 

function sort0s1s(arr) {
    let start = 0, end = arr.length - 1;
  
    while (start < end) {
      if (arr[start] === 0) {
        start++;
      } else {
        // Swap arr[start] and arr[end]
        let temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
      }
    }
  
    console.log(arr);
  }
  
  let arr = [0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0];
  sort0s1s(arr);
  
  

