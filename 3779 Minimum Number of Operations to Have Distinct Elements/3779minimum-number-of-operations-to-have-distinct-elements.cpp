class Solution {
public:
    int minOperations(vector<int>& a) {
        if(a.size()==0||a.size()==1) return 0;
        if(a.size()==2){
            if(a[0]==a[1]) return 1;
            return 0;
        }
        map<int,int>m;
       vector<int>vec;
       for(int i=a.size()-1;i>=0;i--){
        m[a[i]]++;
        if(m[a[i]]==2){
            vec.push_back(i);
        }
       }
       sort(vec.begin(),vec.end(),greater<>());
       if(vec.size()==0) return 0;
       int idx=vec[0]+1;
       if(idx%3==0) return idx/3;
        while(idx%3!=0){
            idx++;
        }
        return idx/3;
    }
};