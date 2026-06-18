class Solution {
public:
    int evalRPN(vector<string>& a) {
        stack<int>st;
        set<string>set;
        set.insert("+");
        set.insert("-");
        set.insert("*");
        set.insert("/");
        for(int i=0;i<a.size();i++){
            if(!set.count(a[i])){
                int k = stoi(a[i]);
                st.push(k);
            }
            else{
                int num2=st.top();
                st.pop();
                int num1=st.top();
                st.pop();
                if(a[i]=="+"){
                    st.push(num1+num2);
                }
                if(a[i]=="-"){
                    st.push(num1-num2);
                }
                if(a[i]=="*"){
                    st.push(num1*num2);
                }
                if(a[i]=="/"){
                    st.push(num1/num2);
                }
            }
        }
        return st.top();
    }
};