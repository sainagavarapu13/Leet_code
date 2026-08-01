class Solution {
public:
    bool fun(int i,int m,vector<int>& a, int k,vector<int>&temp){
        if(i==a.size()){
            return true;
        }
        for(int worker = 0; worker < k; worker++){
            if(temp[worker]+a[i]<=m){
            temp[worker]+=a[i];
           if(fun(i+1,m,a,k,temp)) return true;
           temp[worker]-=a[i];
        }
        if(temp[worker]==0)
        break;
        while(worker+1<temp.size()&&temp[worker]==temp[worker+1]) worker++;
        }
        return false;
    }
    int minimumTimeRequired(vector<int>& a, int k) {
        int start=INT_MIN,end=0;
         sort(a.rbegin(),a.rend());
        for(int i=0;i<a.size();i++){
            start=max(start,a[i]);
            end+=a[i];
        }
       
        while(start<end){
            int m = (start+end)/2;
             vector<int>temp(k,0);
            if(fun(0,m,a,k,temp)){
                end=m;
            }
            else start=m+1;
        }
        return start;
    }
};