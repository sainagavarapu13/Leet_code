class Solution {
public:
    int secondsBetweenTimes(string st, string en) {
        int h = (((en[0]-'0')*10+(en[1]-'0')) - ((st[0]-'0')*10+(st[1]-'0')) )*3600;
        int m = (((en[3]-'0')*10+(en[4]-'0')) - ((st[3]-'0')*10+(st[4]-'0')))*60;
        int s = (((en[6]-'0')*10+(en[7]-'0')) - ((st[6]-'0')*10+(st[7]-'0')));
        // cout<<h<<" "<<m<<" "<<s;
        int res = h+m+s;
        return res;
    }
};