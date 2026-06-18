class Solution {
public:
    double angleClock(int h, int m) {
        h%=12;
        double mini = m*6.0;
        double ho = h*30.0 +m*0.5;
        double diff = abs( ho- mini);
        return min ( diff, 360-diff);
    }
};