class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int one=0;
       int cnt =1;
        vector<pair<char, int>>a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') one++;
            if(i==0) continue;
            if( s[i]==s[i-1]) cnt++;
            else{
                a.push_back({s[i-1],cnt});
                cnt=1;
            }
        }
         a.push_back({s.back(),cnt});
        //  if(s.size()==1 && s[0]=='1') return 1;
        //  else return 0;
        //  if( s.size()==2){
        //     if(a.size()==2) return 1;
        //     else return 2;
        //  }
         int ma =INT_MIN;
         for( int i=1;i<a.size()-1;i++){
            if(a[i].first =='1'){
                ma = max( ma, a[i-1].second+a[i+1].second);
            }
         }
        if(ma ==INT_MIN) return one;
        else return ma+one;
    }
};