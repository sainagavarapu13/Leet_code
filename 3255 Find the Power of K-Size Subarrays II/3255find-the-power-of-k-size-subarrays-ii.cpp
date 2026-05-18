class Solution {
public:
    vector<int> resultsArray(vector<int>& a, int k) {
        if( k==1) return a;
        int bad=0;
        int j=0,i=0;
        vector<int>v;
        while( j<a.size()){
           if( j>0 && a[j]-a[j-1]!=1){
            bad++;
           }
           if( j-i+1 <k) j++;
           else{
            if(bad>0) v.push_back(-1);
            else v.push_back(a[j]);
            if(i+1<a.size() && a[i+1]-a[i]!=1) bad--;
            i++;
            j++;

           }
        }
        return v;
    }
};