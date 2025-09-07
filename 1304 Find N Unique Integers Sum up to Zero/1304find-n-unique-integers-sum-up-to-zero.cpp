class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>a;
        int cnt=0;
        if( n%2==1){ a.push_back(0);
            cnt++;
        }
        int i=1;
        while( cnt < n){
            a.push_back(i);
             a.push_back(-i);
             i++;
             cnt+=2;
        }
        return a;
    }
};