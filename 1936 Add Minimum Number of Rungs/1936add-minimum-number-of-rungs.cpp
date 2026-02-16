class Solution {
public:
    int addRungs(vector<int>& a, int k) {
        int sum=0;
        if(k<a[0])
        sum+= (a[0]-1)/k;
        for(int i=0;i<a.size()-1;i++){
            int dis = a[i+1]-a[i]-1;
            if(dis+1 > k){
                sum+=(dis/k);
            }
        }
        return sum;
    }
};