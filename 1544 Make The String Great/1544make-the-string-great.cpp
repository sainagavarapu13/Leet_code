class Solution {
public:
    string makeGood(string s) {
        stack<char>stack;
        for(int i=0;i<s.size();i++){
            if(stack.empty()){
                stack.push(s[i]);
            }
            else{
                if(s[i]==stack.top()){
                    stack.push(s[i]);
                }
                else if((tolower(s[i]))!=(tolower(stack.top()))){
                    stack.push(s[i]);
                }
                else{
                    stack.pop();
                }
            }
        }
        string ans;
        while(!stack.empty()){
            ans.push_back(stack.top());
            stack.pop();

        }
        reverse(ans.begin(),ans.end());
    return ans;
    }
};