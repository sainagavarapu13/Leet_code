int rangeBitwiseAnd(int left, int right) {
    if(left==0||right==0) return 0;

   unsigned int i;
   while(left<right){
        right = (right-1)&right;
        
    }
    return right;
}