class Solution {
public:
    bool lemonadeChange(vector<int>& a) {
        int i,five=0;
        int ten=0,tw=0;
        for(i=0;i<a.size();i++){
            if(a[i]==5) five++;
            if(a[i]==10) ten++;
            if(a[i]==20) tw++;
            if(a[i]!=5){
                if(i==a.size()-1){
                    cout<<five<<" "<<ten<<" "<<tw<<" ";
                }
                int rem=(a[i]-5);
                 if(i==a.size()-1){
                    cout<<rem;
                }
                 while(rem>=10&&ten>=(rem/10)){
                    int req=rem/10;
                    rem=rem-(10*req);
                    ten=ten-req;
                 }
                   while(rem>=5&&five>=(rem/5)){
                    int req=rem/5;
                    rem=rem-(5*req);
                    five=five-req;
                 }
                 if(rem!=0) return 0;
            }
           
        }
         return 1;
    }
};