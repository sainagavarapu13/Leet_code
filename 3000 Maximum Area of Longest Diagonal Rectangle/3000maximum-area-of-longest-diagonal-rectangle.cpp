class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& a) {
        int i;
        if (a.empty()) {
            return 0;
        }
        int num1=0,num2=0, max_a=0;
        float m=0;
        for(i=0;i<a.size();i++){
            float ans=((a[i][0]*a[i][0])+(a[i][1]*a[i][1]));
          
            if(ans>m){
                m=ans;
               
            num1=a[i][0];
            num2=a[i][1];
            max_a=num1*num2;
           
            }
            else if(ans==m&&max_a<a[i][0]*a[i][1]){
                max_a=max(num1*num2,a[i][0]*a[i][1]);
            }
        }
    return  max_a;
    }
};