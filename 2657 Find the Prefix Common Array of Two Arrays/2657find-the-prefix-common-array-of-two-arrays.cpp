class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> v;
        map<int,int> a;
        map<int,int> b;
        int d = 0;
        for(int i=0;i<A.size();i++){
            a[A[i]]++;
            b[B[i]]++;
            if(a[B[i]]>=1) d++;
            if(b[A[i]]>=1 && (A[i]!=B[i])) d++;
            v.push_back(d);
        }
        return v;
    }
};