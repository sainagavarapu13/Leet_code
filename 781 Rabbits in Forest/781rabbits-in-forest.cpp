class Solution {
public:
    int numRabbits(vector<int>& a) {
        map<int , int>s;
        for( int i :a){
            s[i]++;
        }
        int sum=0;
        for( auto& [x,y]:s){
            if( x==0){
                sum+=y;
            }else{
               int k = x+1;
               int l = (y+k-1)/k;
               sum+=k*l;
            }
        }
        return sum;
        
    }
};