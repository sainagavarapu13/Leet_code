class Solution {
public:
    vector<int> rotateElements(vector<int>& a, int k) {
        vector<int>b;
          int n = a.size();
    
    for(int i=0;i<a.size();i++){
        if(a[i]>=0){
            b.push_back(a[i]);
        }
    }
         if (b.empty()) return a;
        k %= (int)b.size();
    reverse(b.begin(), b.begin() + k);
    reverse(b.begin() + k, b.end());
    reverse(b.begin(), b.end());
        vector<int>temp;
        // for(int i=0;i<a.size();i++){
        //     if(a[i]>0){
        //         temp.push_back(a[i]);
        //     }
        //     cout<<a[i]<<" ";
        // }
        int idx=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>=0){
                a[i]=b[idx++];
            }
        }
        return a;
    }
};