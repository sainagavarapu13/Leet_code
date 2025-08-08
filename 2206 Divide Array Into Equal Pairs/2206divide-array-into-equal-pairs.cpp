class Solution {
public:
    bool divideArray(vector<int>& b) {
        map<int,int>a;
        for( int i:b) a[i]++;
        bool l = true;
        for(auto& i:a){
            if( i.second%2==1){
                l=false;
                break;
            }
        }
        return l;
    }
};