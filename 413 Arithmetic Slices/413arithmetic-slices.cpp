class Solution {
public:
    bool isarth(vector<int>&a,int s,int e){
        int k=a[s]-a[s+1];
        for(int i=s;i<e;i++){
            if(a[i]-a[i+1]!=k) return false;
        }
        return true;
    }
    int numberOfArithmeticSlices(vector<int>& a) {
        if(a.size()<3) return 0;
        int start,cnt=0,i,j=2;
        for(i=0;i<a.size()-2;i++){
            j=2;
            while(i+j<a.size()){
                if(i+j<a.size()&&isarth(a,i,i+j)){
                    cout<<i<<" "<<i+j<<"\n";
                cnt++;
                j++;
            }
            else break;
            }
            
        }
        return cnt;
    }
};