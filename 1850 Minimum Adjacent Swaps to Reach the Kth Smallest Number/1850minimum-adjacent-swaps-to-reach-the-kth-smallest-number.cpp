class Solution {
public:
    int getMinSwaps(string num, int k) {
        vector<int> v;
        int a=0;
        for(int i=0;i<num.size();i++){
            v.push_back(num[i]-'0');
        }
        vector<int> t(v.begin(),v.end());
        for(int i=0;i<k;i++){
            next_permutation(v.begin(),v.end());
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        int i=0,j=0;
        while(i<v.size()){
            j = i;
            while(t[j]!=v[i] && j<v.size()) j++;
            while(i<j){
                swap(t[j],t[j-1]);
                j--;
                a++;
            }
            i++;
        }
        //cout<<endl;
        return a;
    }
};