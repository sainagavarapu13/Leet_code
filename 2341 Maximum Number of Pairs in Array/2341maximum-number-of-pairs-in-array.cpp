class Solution {
public:
    vector<int> numberOfPairs(vector<int>& a) {
        map< int , int  > b;
        for( int i: a) b[i]++;
        int p=0,l=0;
        for( auto& i : b){
            p+= (i.second)/2;
            l+=(i.second)%2;

        }
        vector<int>res;
        res.push_back(p);
        res.push_back(l);
        return res;
    }
};