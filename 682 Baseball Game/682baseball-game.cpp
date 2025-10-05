class Solution {
public:
    int calPoints(vector<string>& o) {
        vector<int> v;
        for(string& t : o){
            if(t=="+"){
                int a = v.size();
                int b = v[a-1] + v[a-2];
                v.push_back(b);
            }
            else if(t=="D"){
                int a = v.size();
                int  b = 2 * v[a-1];
                v.push_back(b);
            }
            else if(t=="C"){
                v.pop_back();
            }
            else{
                v.push_back(stoi(t));
            }
        }
        int c = accumulate(v.begin(),v.end(),0);
        return c;
    }
};
