class Solution {
public:
    double angleClock(int h, int m) {
        double miin = m*6;
        double hr = (h%12)*30+m*0.5;
        double k=min(abs(hr-miin),360-abs(hr-miin));
        return (double)k;

    }
};