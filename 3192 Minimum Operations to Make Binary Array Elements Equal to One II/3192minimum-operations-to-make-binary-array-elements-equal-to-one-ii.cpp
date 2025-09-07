class Solution {
public:
    int minOperations(vector<int>& a) {
        int i,flip=0;
        for(i=0;i<a.size();i++){
            
            if(flip%2!=0){
                a[i]=1-a[i];
            }
            if(a[i]==0){
                flip++;
            }
        }
        return  flip;
    }
};