class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        sort( words.begin(),words.end());
        int cnt=-1,ans=0;
        string str = words[0].substr(0,k);
        cout << str << endl;
        for( auto i : words){
            if( i.size() < k) continue;
            string temp = i.substr(0,k);
            if( temp == str){
               cnt++;
            }else{
                if( cnt >=1){
                    ans++;
                }
                cnt =0;
                str = temp;
            }
        }
        if( cnt >=1){
                    ans++;
                }
        return ans;
    }
};