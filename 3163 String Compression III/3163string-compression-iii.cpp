class Solution {
public:
    string compressedString(string a) {
        int i,j;
        string ans;
        int cnt=1;
        for(i=1;i<a.size();i++){
            if(a[i]==a[i-1]){
                cnt++;
            }
            else{
            
                cout<<cnt<<" ";
                if(cnt>9){
                    while(cnt>9){
                    ans.push_back('9');
                ans.push_back(a[i-1]);
                cnt=cnt-9;}
                }
                if(cnt>0){
                     ans.push_back(cnt+'0');
                ans.push_back(a[i-1]);
                }
                
                cnt=1;
                }
                 
            }
           
       if (cnt > 9) {
            while (cnt > 9) {
                ans.push_back('9');
                ans.push_back(a[i - 1]);
                cnt -= 9;
            }
       }
        if (cnt > 0) {
            ans.push_back(cnt + '0');
            ans.push_back(a[i - 1]);
        }
        return ans;
    }
};