class Solution {
public:
    vector<string> findWords(vector<string>& a) {
        int i;
        set<char> first  = {'q','w','e','r','t','y','u','i','o','p',
                            'Q','W','E','R','T','Y','U','I','O','P'};
        set<char> second = {'a','s','d','f','g','h','j','k','l',
                            'A','S','D','F','G','H','J','K','L'};
        set<char> third  = {'z','x','c','v','b','n','m',
                            'Z','X','C','V','B','N','M'};
         vector<string>ans;
        for(i=0;i<a.size();i++){
            int f=0;
            if(first.count(a[i][0])){
                for(int j=1;j<a[i].size();j++){
                    if(!first.count(a[i][j])){
                          f=1;
                        continue;
                      
                    }
                }
               if(f==0) ans.push_back(a[i]);
            }
            else if(second.count(a[i][0])){
                for(int j=1;j<a[i].size();j++){
                    if(!second.count(a[i][j])){
                        f=1;
                        continue;
                        
                    }
                }
                if(f==0) ans.push_back(a[i]);
            }
            else if(third.count(a[i][0])){
                for(int j=1;j<a[i].size();j++){
                    if(!third.count(a[i][j])){
                          f=1;
                        continue;
                      
                    }
                }
               if(f==0) ans.push_back(a[i]);
            }
        }
        return ans;
    }
};