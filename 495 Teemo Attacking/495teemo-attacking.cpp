class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        long long b = 0;
        for(int i=0;i<timeSeries.size()-1;i++){
            int a = timeSeries[i];
            if((a+duration)<timeSeries[i+1]){
                b = b+duration;
            }
            else{
                b+= timeSeries[i+1]-a;
            }
        }
        b+=duration;
        return b;
    }
};