class Solution {
public:
    vector<double> internalAngles(vector<int>& s) {
        double a = s[0] ,b = s[1], c=s[2];
        if( a+b<=c || a+c <= b || b+c <= a){
            return {};
        }
        double aa = acos((b*b + c*c - a*a )/(2*b*c))*(180.0/M_PI);
        double bb = acos((a*a + c*c - b*b )/(2*a*c))*(180.0/M_PI);
        double cc = acos((a*a + b*b - c*c )/(2*b*a))*(180.0/M_PI);
        vector<double>v={aa,bb,cc};
        sort( v.begin(),v.end());
        return v;
    }
};