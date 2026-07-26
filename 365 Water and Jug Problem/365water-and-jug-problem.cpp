class Solution {
public:
set<pair<int,int>>set;
    bool check(int x,int y,int a, int b,int k){
       
        if(a+b==k) return true;
        bool ans=false;
        if(set.count({a,b})) return false;
        set.insert({a,b});
        ans=ans||check(x,y,0,b,k);
        ans=ans||check(x,y,a,0,k);
        ans=ans||check(x,y,x,b,k);
        ans=ans||check(x,y,a,y,k);
        if(y!=b){
            int rem=y-b;
           ans=ans|| check(x,y,a-min(rem,a),b+min(rem,a),k);
        }
        if(x!=a){
            int rem = x-a;
           ans=ans|| check(x,y,a+min(rem,b),b-min(rem,b),k);
        }
        return ans;

    }
    bool canMeasureWater(int x, int y, int k) {
        set.clear();
        if(x+y<k) return false;
        return check(x,y,0,0,k);
    }
};