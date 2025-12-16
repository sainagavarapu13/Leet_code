class Solution {
public:
    vector<string> findWords(vector<string>& a) {
        set<char>s2 ={'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
        set<char>s1 ={'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
        set<char>s3 ={'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};
        vector<string> ans;
        vector<int >m((int)a.size(), -1);
        for( int i=0;i<a.size();i++){
            bool f=1;
            for( auto& j : a[i]){
                if( s1.count(j)){
                    if( m[i]==-1) m[i]=1;
                    else if( m[i]==1) continue;
                    else{ 
                        f=0;
                        break;}
                }else if( s2.count(j)){
                     if( m[i]==-1) m[i]=2;
                     else if( m[i]==2) continue;
                    else{ 
                        f=0;
                        break;}
                    
                } else if( s3.count(j)){
                     if( m[i]==-1) m[i]=3;
                     else if( m[i]==3) continue;
                    else{ 
                        f=0;
                        break;}
                }
            }
            if( f) ans.push_back( a[i]);
        }
        return ans;
    }
};