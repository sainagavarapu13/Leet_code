class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int c = 1;
        
        for(int i= a.size()-1;i>=0;i--){
            int k = a[i]+c;
            a[i] = k%10;
            c = k/10;
            if(c==0) break;
        }
        reverse(a.begin(),a.end());
        if(c){
            a.push_back(1);
        }
        reverse(a.begin(),a.end());
        return a;
    }
};