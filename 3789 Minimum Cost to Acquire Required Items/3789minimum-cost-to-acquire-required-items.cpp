class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
       long long a= costBoth*(max((long long)need1,(long long)need2));
        long long b =(long long) ((long long)cost1*(long long)need1)+(long long)((long long)cost2*(long long)need2);
            long long c =costBoth*(min((long long)need1,(long long)need2));
        int c1;
        if(need1>need2) {
            need1-=need2;
            c+=(long long)need1*cost1;
        }
        else if(need1<need2) {need2-=need1;
                             c+=(long long)need2*cost2;}
        
        return min(a,min(b,c));
    }
}; 