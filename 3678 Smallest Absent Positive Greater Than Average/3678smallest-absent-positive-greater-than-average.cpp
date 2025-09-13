class Solution {
public:
    int smallestAbsent(vector<int>& a) {
        int sum=0;
        int len=a.size();
        for(int i=0;i<a.size();i++){
            sum+=a[i];
        }
        float avg=(sum/len);
        int k=avg+1;
        if(k<=0)k=1;
        while(1){
            if(count(a.begin(),a.end(),k)==0){
                return k;
            }
            k++;
        }
        return 1;
    }
};