class Solution {
public:
    vector<int> resultArray(vector<int>& a) {
        vector<int>arr1;
        vector<int>arr2;
        for(int i=0;i<a.size();i++){
           if(i==0) arr1.push_back(a[i]);
           else if(i==1) arr2.push_back(a[i]);
           else{
                if(arr1.back()>arr2.back()){
                    arr1.push_back(a[i]);
                }
                else{
                    arr2.push_back(a[i]);
                }
           }
        }
        vector<int>ans;
        for(auto& i:arr1){
            ans.push_back(i);
        }
        for(auto& i:arr2){
            ans.push_back(i);
        }
        return ans;
    }
};