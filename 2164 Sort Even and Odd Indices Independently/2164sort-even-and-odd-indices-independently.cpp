class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& a) {
        vector<int> eve,odd,res;
        int i;
        for(i=0;i<a.size();i++){
            if(i%2==0) eve.push_back(a[i]);
            else odd.push_back(a[i]);
        }
        sort(eve.begin(),eve.end());
        sort(odd.begin(),odd.end(),greater<int>());
        int k=0,l=0;
        for(i=0;i<a.size();i++){
            if(i%2==0) {
                res.push_back(eve[k++]);
            }
            else{
                res.push_back(odd[l++]);
            }
        }
        return res;
    }
};