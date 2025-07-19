int findLucky(int* arr, int n) {
    int freq[501] = {0},max=0;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        if(arr[i]>max) max = arr[i];
    }
    for(int i=max;i>0;i--){
        if(freq[i]==i) return i;
    }
    return -1;
}