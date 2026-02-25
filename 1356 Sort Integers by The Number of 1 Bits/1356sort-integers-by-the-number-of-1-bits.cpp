class Solution {
public:

    int set(int n){
        int cnt=0;
        while(n){
            int k=n%2;
            if(k==1) cnt++;
            n=n/2;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
       vector<pair<int,int>>a;
        for(int i=0;i<arr.size();i++){
           int cnt=set(arr[i]);
           a.push_back({arr[i],cnt});
        }
        sort(a.begin(),a.end(),[](auto& x , auto& y){
            if( x.second==y.second){
                return x.first<y.first;
            }
            else{
               return x.second<y.second;
            }
        });
        vector<int> sorted;
        for(auto& k:a){
            sorted.push_back(k.first);
        }
        return sorted;
    }
};