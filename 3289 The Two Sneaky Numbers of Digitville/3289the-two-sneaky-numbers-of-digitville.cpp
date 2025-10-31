class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& a) {
        map<int,int>m;
        for(auto& i:a){
            m[i]++;
        }
        a.clear();
        for(auto& i:m){
            if(i.second==2){
                a.push_back(i.first);
            }
        }
        return a;
    }

};