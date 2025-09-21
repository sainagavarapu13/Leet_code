class Solution {
public:
    vector<int> missingRolls(vector<int>& a, int b, int n) {
        int total = a.size()+n;
        int sum = b*total;
        int s=0;
        for( int i : a){
            s+=i;
        }
        int ele = sum-s;
        vector<int>c(n);
        printf("%d %d",ele/n ,ele%n);
         if( ele/n <=0 || ele/n >6 ) return {};
            if( ele/n == 6 && ele%n >0) return {};
         int l = ele/n , y = ele%n ;
        for(int i=0;i<n;i++ ){
            c[i]=l;
        }
        for( int i=0;i<y;i++){
            c[i]++;
        }
        return c;
       
        
    }
};