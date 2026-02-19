class Solution {
public:
    int num(vector<int>&a){
        int ans=0;
        for(int i=0;i<a.size();i++){
            ans=ans*10+a[i];
        }
        return ans;
    }
    int maximumSwap(int a) {
        vector<int>t1,t2;
        int n=a;
        while(n){
            t1.push_back(n%10);
            t2.push_back(n%10);
            n/=10;
        }
        sort(t2.begin(),t2.end(),greater<>());
        reverse(t1.begin(),t1.end());
        int insert =-1,from=-1;
        for(int i=0;i<t1.size();i++){
            if(t1[i]!=t2[i]){
                insert = t1[i];
                from = t2[i];
                t1[i]=t2[i];
                break;
            }
        }
        if(from==-1) return a;
        int cnt=0;
        cout<<insert<<" "<<from;
        for(int i=t1.size()-1;i>=0;i--){
            if(t1[i]==from){
              
            t1[i]=insert;
            break;
            }
        }
        return num(t1);
    }
};