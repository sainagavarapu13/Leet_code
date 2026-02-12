class Solution {
public:
    vector<int>visit;
    
    bool fun( int s , vector<int>& arr){
        if( s<0 || s>=arr.size()) return 0;
        if( visit[s]==1) return 0;
        if( arr[s]==0) return 1;
        visit[s]=1;
       
        if(fun( arr[s]+s , arr)) return true;
        if(fun ( s-arr[s],arr)) return true;
        return false;
    }
    bool canReach(vector<int>& arr, int start) {
        visit.assign(arr.size(),0);
        return fun(start, arr);
    }
};