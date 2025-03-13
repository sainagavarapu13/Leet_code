int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    if(numOnes>=k) return k;
    else if((numOnes+numZeros)>=k) return numOnes;
    else{
        int d = k-numOnes-numZeros;
        int e = numOnes-d;
        return e;
    }
}