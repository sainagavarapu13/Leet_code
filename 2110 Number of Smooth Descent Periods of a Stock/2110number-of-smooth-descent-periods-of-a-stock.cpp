class Solution {
public:
    long long getDescentPeriods(vector<int>& pri) {
        long long n = pri.size(),b=0,c=1,a=0;
        for(int i=1;i<n;i++){
            if((pri[i-1]-pri[i])==1){
                c++;
                if(i==n-1){
                    a +=c;
                b += ((c*(c+1))/2);
                }
                // cout<<"-"<<a<<" "<<c<<" "<<b<<endl;
            }
            else{
                a +=c;
                b += ((c*(c+1))/2);
                c = 1;
                // cout<<"--"<<a<<" "<<c<<" "<<b<<endl;
            }
        }
        b += (n-a);
        return b;
    }
};