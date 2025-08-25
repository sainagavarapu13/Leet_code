class Solution {
public:
    int days(int n,int m){
        int i;
        for(i=1;i<=12;i++){
            if(n==0) return 0;
            else if(n==1) return 31;
           else if(n==2){
            if(m%4==0&&m%100!=0) return 29;
            else if(m%4==0&&m%100==0&&m%400==0) return 29;
            else return 28;
           }
            else if(n==3) return 31;
            else if(n==4) return 30;
            else if(n==5) return 31;
            else if(n==6) return 30;
            else if(n==7) return 31;
            else if(n==8) return 31;
            else if(n==9) return 30;
            else if(n==10) return 31;
            else if(n==11) return 30;
            else return 31;
        }
        return 0;
    }
    int dayOfYear(string n) {
       int year=stoi(n);
       int month = (n[5]-'0')*10+(n[6]-'0');
        int day=(n[8]-'0')*10+(n[9]-'0');
        int i,sum=0;
        for(i=0;i<month;i++){
            sum+=days(i,year);
        }
       return sum+day;
    }
};