class Solution {
public:
    int firstUniqueEven(vector<int>& a) {
        map<int,int>m;
        for(auto& i:a) m[i]++;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==0&&m[a[i]]==1) return a[i];
        }
        return -1;
    }
};