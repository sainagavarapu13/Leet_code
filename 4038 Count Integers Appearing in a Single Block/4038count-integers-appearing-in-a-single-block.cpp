class Solution {
public:
    int countSpecialIntegers(vector<int>& a) {
        int ans=0;
        unordered_set<int>s;
        for( int i =0;i<a.size();i++){
            if(s.count(a[i])) continue;
            s.insert(a[i]);
            int j =i;
            while( j<a.size() && a[i]==a[j]) j++;
            int sp= 1;
            for( int k =j;k<a.size();k++){
                if( a[k]==a[i]){
                    sp=0;
                    break;
                }
            }
            if( sp) ans++;
        }
        return ans;
    }
};