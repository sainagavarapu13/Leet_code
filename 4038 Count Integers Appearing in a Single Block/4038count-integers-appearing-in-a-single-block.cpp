class Solution {
public:
    int countSpecialIntegers(vector<int>& a) {
        int i=0;
        stack<int>st;
        while(i<a.size()){
            if(st.empty()){
                st.push(a[i]);
            }
            else if(st.top()!=a[i]){
                st.push(a[i]);
            }
            i++;
        }
        map<int,int>m;
        while(!st.empty()){
            m[st.top()]++;
            st.pop();
        }
        int ans=0;
        for(auto& [n,c]:m){
            if(c==1) ans++;
        }
        return ans;
    }
};