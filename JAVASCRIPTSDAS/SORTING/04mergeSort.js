function merge(arr, start, mid, end) {
    let Result = [];
    let i = start, j = mid + 1;
  
    while (i <= mid && j <= end) {
      if (arr[i] <= arr[j]) {
        Result.push(arr[i++]);
      } else {
        Result.push(arr[j++]);
      }
    }
  
    while (i <= mid) {
      Result.push(arr[i++]);
    }
  
    while (j <= end) {
      Result.push(arr[j++]);
    }
  
    for (let k = 0; k < Result.length; k++) {
      arr[start + k] = Result[k];
    }
  }
  
  function mergeAlgo(arr, start, end) {
    if (start < end) {
      let mid = Math.floor((start + end) / 2);
      mergeAlgo(arr, start, mid);
      mergeAlgo(arr, mid + 1, end);
      merge(arr, start, mid, end);
    }
  }
  
  function mergeSort(arr) {
    mergeAlgo(arr, 0, arr.length - 1);
    console.log(arr);
  }
  
  let arr = [9, 6, 3, 3, 2, 78, 5, 5, 2];
  mergeSort(arr);
  