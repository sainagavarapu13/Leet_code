class Solution {
public:
    double check(double a){
        if(a<-1) a= -1;
        else if(a>1) a = 1;
        else return a;
        return a;
    }
    vector<double> internalAngles(vector<int>& sides) {
        vector<double> v;
        int a = sides[0];
        int b = sides[1];
        int c = sides[2];
        if(a+b<=c || b+c<=a || a+c<=b){
            return v;
        }
        double d1 = check((b*b+c*c-a*a)/(2.0*b*c));
        double e1 = check((c*c+a*a-b*b)/(2.0*a*c));
        double f1 = check((a*a+b*b-c*c)/(2.0*a*b));
        double d = acos(d1);
        double e = acos(e1);
        double f = acos(f1);
        v.push_back(d*180.0/M_PI);
        v.push_back(e*180.0/M_PI);
        v.push_back(f*180.0/M_PI);
        sort(v.begin(),v.end());
        return v;
    }
};