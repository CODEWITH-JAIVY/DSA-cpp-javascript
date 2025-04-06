function PartitonFun(arr, start, end) {
    let pivot = arr[end];
    let i = start - 1;

    for (let j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            [arr[i], arr[j]] = [arr[j], arr[i]];
        }
    }
    [arr[i + 1], arr[end]] = [arr[end], arr[i + 1]];
    return i + 1;
}

function sort(arr, start, end) {
    if (start < end) {
        let partition = PartitonFun(arr, start, end);
        sort(arr, start, partition - 1);
        sort(arr, partition + 1, end);
    }
}

function Reduction(arr, size) {
    sort(arr, 0, size - 1);

    let  cont =0 

    let i = 0;

    while (i < size) {
        let currentSize = size - i;
        cont++ ;

        let minVal = arr[i];
        while (i < size && arr[i] === minVal) {
            i++;
        }
    }

    return cont
    ;
}

let arr = [5, 1, 1, 1, 2, 3, 5];
let result = Reduction(arr, arr.length);
console.log(result); // Output: [7, 3, 2, 1]
