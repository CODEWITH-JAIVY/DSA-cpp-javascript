function swap(arr, i, j) {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  
  function sort0s1s2s(arr) {
    let start = 0, end = arr.length - 1, temp = 0;
  
    while (temp <= end) {
      if (arr[temp] === 0) {
        swap(arr, start, temp);
        start++;
        temp++;
      } else if (arr[temp] === 1) {
        temp++;
      } else { // arr[temp] === 2
        swap(arr, temp, end);
        end--;
      }
    }
  
    console.log(arr);
  }
  
  let arr = [0, 0, 0, 2, 1, 0, 2, 1, 2, 2, 1, 0, 2, 1, 0];
  sort0s1s2s(arr);
  