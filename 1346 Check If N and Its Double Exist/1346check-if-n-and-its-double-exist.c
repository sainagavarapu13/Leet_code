bool checkIfExist(int* arr, int arrSize) {
    for(int i=0;i<arrSize;i++){
        int c = 2*arr[i];
        for(int j=0;j<arrSize;j++){
            if(c==arr[j] && i!=j) return true;
        }
    }
    return false;
}