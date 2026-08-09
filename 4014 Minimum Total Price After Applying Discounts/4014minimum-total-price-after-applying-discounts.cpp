class Solution {
public:
    double minPrice(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end(),greater<>());
        sort(b.begin(),b.end(),greater<>());
        int i=0,j=0;
        vector<double>t ;
        for(auto& i:a) t.push_back(i);
        while(i<a.size()&&j<b.size()){
            double p = a[i];
            double d = b[j];
            t[i] = (p*(100-d)) / 100;
            i++;
            j++;
        }
        double sum =0;
       // double mod = 1e5;
        for(int i=0;i<t.size();i++){
            sum=(sum+t[i]);
        }
        
        return sum;
    }
};