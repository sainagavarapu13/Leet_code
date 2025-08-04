class Solution {
public:
    vector<string> findRestaurant(vector<string>& a, vector<string>& b) {
        int i,j,min=INT_MAX;
        vector<string>res;
        for(i=0;i<a.size();i++){
            for(j=0;j<b.size();j++){
                if(a[i]==b[j]){
                    if(i+j<min){
                        res.clear();
                        min=i+j;
                       res.push_back(a[i]);
                    }
                    else if(i+j==min){
                       res.push_back(a[i]);
                    }
                }
            }
        }
        return res;
    }
};