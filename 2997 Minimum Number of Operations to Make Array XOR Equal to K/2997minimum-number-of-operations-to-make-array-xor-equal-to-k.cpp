class Solution {
public:
    string change(int n){
         if (n == 0) return "0";
        string ans="";
        while(n){
            ans.push_back('0'+n%2);
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int com(string a, string b) {
    int n = max(a.size(), b.size());

    
    while (a.size() < n) a = '0' + a;
    while (b.size() < n) b = '0' + b;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) cnt++;
    }
    return cnt;
}

    int minOperations(vector<int>& a, int k) {
        int x = 0;
        for(int i=0;i<a.size();i++){
            x=x^a[i];
        }
        int cnt = 0;
        
        while (k || x) {
           
            if ((k % 2) != (x % 2)) {
                cnt++;
            }
            
           
            k /= 2;
            x /= 2;
        }
        
        return cnt;
    }
};