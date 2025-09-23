class Solution {
public:
    int compareVersion(string v1, string v2) {
        vector<int>a,b;
        stringstream s(v1),c(v2);
        string token;
        while(getline(s,token,'.')) a.push_back(stoi(token));
        while(getline(c,token,'.')) b.push_back(stoi(token));
        int n = max(a.size(),b.size());
        for(int i=0;i<n;i++){
            int r1 = i < a.size() ? a[i] : 0;
            int r2 = i < b.size() ? b[i] : 0;
            if(r1<r2) return -1;
            if(r1>r2) return 1;
        }
        return 0;
    }
};