class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<double> v;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                double a = arr[i]/(arr[j]*1.0);
                v.push_back(a);
            }
        }
        sort(v.begin(),v.end());
        vector<int> res;
        double b = v[k-1];
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                double a = arr[i]/(arr[j]*1.0);
                if(a==b){
                    res.push_back(arr[i]);
                    res.push_back(arr[j]);
                    return res;
                }
            }
        }
        return res;
    }
};