class Solution {
public:
    bool canTransform(vector<int>& sc, vector<int>& ta) {
        long long a = 0,b = 0,n = sc.size();
        for(int i=0;i<n;i++){
            if(sc[i]!=ta[i]){
                a += sc[i];
                b += ta[i];
            }
        }
        return a==b;
    }
};