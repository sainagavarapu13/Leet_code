class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        vector<int>b;
        int i=0;
        while(b.size()!=a.size()){
            b.push_back(a[i]);
           
            if(a[i]==0&&b.size()!=a.size()){
                b.push_back(a[i]);
            }
             i++;
        }
        for(int i= 0;i<a.size();i++){
            a[i]=b[i];
        }
    }
};