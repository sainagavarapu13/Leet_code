class Solution {
public:
vector<string>ans;
    string mapped(char ch){
        if(ch=='2') return "abc";
        if(ch=='3') return "def";
        if(ch=='4') return "ghi";
        if(ch=='5') return "jkl";
        if(ch=='6') return "mno";
        if(ch=='7') return "pqrs";
        if(ch=='8') return "tuv";
        else return "wxyz";
    }
    void fun(vector<string>&values,string temp,int idx){
        if(idx==values.size()&&temp.size()==values.size()){
            ans.push_back(temp);
            return;
        }
        for(int j=0;j<values[idx].size();j++){
             temp.push_back(values[idx][j]);
             fun(values,temp,idx+1);
             temp.pop_back();
            
        }
       
    }
    vector<string> letterCombinations(string a) {
     vector<string>values;
     ans.clear();
     for(int i=0;i<a.size();i++){
        values.push_back(mapped(a[i]));
     }
     string temp;
     fun(values,temp,0);
    return ans;
    }
};