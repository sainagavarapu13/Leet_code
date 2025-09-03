class Solution {
public:
    int numOfUnplacedFruits(vector<int>& a, vector<int>& b) {
        int i,j;
        int cnt=0;
        for(i=0;i<a.size();i++){
            for(j=0;j<b.size();j++){
                if(a[i]!=0&&a[i]<=b[j]){
                    cnt++;
                    b[j]=0;
                    a[i]=0;
                    break;
                }
            }
        }
        
       
        return a.size()-cnt;;
    }
};