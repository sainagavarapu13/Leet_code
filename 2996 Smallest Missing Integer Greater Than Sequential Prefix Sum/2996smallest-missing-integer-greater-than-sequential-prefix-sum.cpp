class Solution {
public:
    int missingInteger(vector<int>& a) {
        int i,key,sum=a[0];
        for(i=1;i<a.size();i++){
            if(a[i]!=a[i-1]+1){
                break;
            }
            else{
                sum+=a[i];
            }
        }
        key=sum;
        for(i=0;i<a.size();i++){
            while(find(a.begin(),a.end(),key)!=a.end()){
                key++;
            }
        }
        return key;
    }
};