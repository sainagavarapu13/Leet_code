class Solution {
public:
vector<string>ans;
// bool valid(string a){
//     for(int i=1;i<a.size();i++){
//         if(a[i]=='0'&&a[i-1]=='0') return false;
//     }
//     return true;
// }
    void check(string temp,int len){
        if(temp.size()==len){
                ans.push_back(temp);
            return;
        }
        if(temp!=""){
            if(temp.back()=='1'){
                check(temp+'1',len);
                check(temp+'0',len);
            }
            else{
                check(temp+'1',len);
            }
        }
        else{
            check(temp+'1',len);
            check(temp+'0',len);
        }
        
    }
    vector<string> validStrings(int n){
        ans.clear();
        check("",n);
        return ans;
    }
};