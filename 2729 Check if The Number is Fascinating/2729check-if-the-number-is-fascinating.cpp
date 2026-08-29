class Solution {
public:
    bool isFascinating(int n) {
        set<int>s;
        int t = 2*n;
        int th = 3*n;
        while(n){
            if(s.count(n%10)) return 0;
            s.insert(n%10);
            n/=10;
        }
          while(t){
            if(s.count(t%10)) return 0;
            s.insert(t%10);
            t/=10;
        }
          while(th){
            if(s.count(th%10)) return 0;
            s.insert(th%10);
            th/=10;
        }
        if(s.count(0)) return 0;
        return 1;
    }
};