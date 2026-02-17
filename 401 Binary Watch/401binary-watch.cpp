class Solution {
public:
    vector<string> readBinaryWatch(int t) {
        vector<string> v;
        if(t<=0 && t>=9) return v;
        for(int i=0;i<12;i++){
            for(int j = 0;j<60;j++){
                if((__builtin_popcount(i)+__builtin_popcount(j))==t){
                    string s ="";
                    s += to_string(i) + ":";
                    if(j<10){
                        s +="0"+to_string(j);
                    }
                    else{
                        s+=to_string(j);
                    }
                    v.push_back(s);
                }
            }
        }
        return v;
    }
};