class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        map<int,int>p;
        for(auto& i:arr1){
            p[i]++;
        }
       // vector<pair<int,int>>p(m.begin(),m.end());
    //      sort(p.begin(),p.end(),[](auto& x,auto& y){
    //          return x.first<y.first;
    //  });
       vector<int>res;
       int k=0;
       for(auto& i:arr2){
        while(p[i]--){
           res.push_back(i);
        }
       }
      for(auto& [nums , cou] :p){
        while(cou>0){
          res.push_back(nums);
          cou--;
        }
      }
      return res;
    }
};