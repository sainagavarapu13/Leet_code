class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,vector<int>> m;
        int n =s.length();
        for(int i=0;i<n;i++){
            m[s[i]].push_back(i);
        }
        set<string> a;
        int  res = 0;
        for(auto x:m){
            if(x.second.size()>=2){
                int b = x.second[0],c = x.second[x.second.size()-1];
                for(auto t:m){
                    int  i =0,j=t.second.size();
                    while(i<j){
                        int mid = (i+j)/2;
                        if(t.second[mid]> b && t.second[mid]<c){
                            cout<<t.first<<" "<<mid<<endl;
                            res++;
                            break;
                        }
                        if(t.second[mid]<b){
                            i = mid+1;
                        }
                        else{
                            j = mid;
                        }
                    }
                }
            }
        }
        return res;
    }
};