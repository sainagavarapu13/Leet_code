class Solution {
public:
    int compareVersion(string a, string b) {
       vector<int>x,y;
        bool f=1;
        int ind,i;
        for(  i=0;i<a.size();i++){
            if( f && a[i]!='.'){
                ind =i;
                f=0;
            }else if( !f && a[i]=='.'){
                    int ele =0;
                    while( ind <i){
                        ele = ele * 10 +(a[ind]-'0');
                        ind++;
                    }
                    f=1;
                    x.push_back(ele);
            }
            
        }
         int ele =0;
                    while( ind <a.size()){
                        ele = ele * 10 +(a[ind]-'0');
                        ind++;
                    }
                    x.push_back(ele);
                     f=1;
        for(  i=0;i<b.size();i++){
            if( f && b[i]!='.'){
                ind =i;
                f=0;
            }else if( !f && b[i]=='.'){
                f=1;
                    int ele =0;
                    while( ind <i){
                        ele = ele * 10 +(b[ind]-'0');
                        ind++;
                    }
                    y.push_back(ele);
            }
        }
        ele=0;
            while( ind <b.size()){
                        ele = ele * 10 +(b[ind]-'0');
                        ind++;
                    }
                    y.push_back(ele);
            
        
          int n = max(x.size(), y.size());
        for (int i = 0; i < n; i++) {
            int v1 = (i < x.size() ? x[i] : 0);
            int v2 = (i < y.size() ? y[i] : 0);
            if (v1 < v2) return -1;
            if (v1 > v2) return 1;
        }
        return 0;
    }
};