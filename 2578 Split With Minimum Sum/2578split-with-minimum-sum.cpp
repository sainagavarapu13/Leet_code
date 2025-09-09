class Solution {
public:
    int splitNum(int n) {
        int i;
        vector<int>a;
        while(n){
            a.push_back(n%10);
            n=n/10;
        }
        int num1=0,num2=0;
        sort(a.begin(),a.end());
        for(i=0;i<a.size();i++){
            if(i%2==0){
                num1=num1*10+a[i];
            }
            else{
                num2=num2*10+a[i];
            }
        }
        return num1+num2;
    }
};