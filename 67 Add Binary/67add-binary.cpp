class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
            if(a.size()>b.size()){
                while(a.size()!=b.size()){
                    b.push_back('0');
                }
            }
            else {
                while(a.size()!=b.size()){
                    a.push_back('0');
                }
            }
        
        int carry=0,i=0;
        while(i<a.size()&&i<b.size()){
            int k=(a[i]-'0')+(b[i]-'0')+carry;
            cout<<k<<" ";
            ans.push_back((k%2)+'0');
            carry=(k/2);
            i++;
        }
         if (carry) {
            ans.push_back('1');
        }

       
        reverse(ans.begin(), ans.end());
        return ans;
    }
};