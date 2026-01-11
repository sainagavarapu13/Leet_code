class Solution {
public:
    int centeredSubarrays(vector<int>& a) {
        int sum = 0;
        int n = a.size();
       for (int i = 0; i < n; i++) {
               set<int>temp;
           int cnt=0;
    for (int j = i; j < n; j++) {
        temp.insert(a[j]);
        cnt+=a[j];
        if(temp.count(cnt) ){
            sum++;
        }
       
    }
} 
        return sum;
    }
};