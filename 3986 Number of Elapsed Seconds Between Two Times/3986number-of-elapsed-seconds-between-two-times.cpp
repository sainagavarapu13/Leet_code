class Solution {
public:
    int secondsBetweenTimes(string a, string b) {
        int ahr = ((a[0]-'0')*10+(a[1]-'0'))*3600;
        int bhr = ((b[0]-'0')*10+(b[1]-'0'))*3600;
        int amin = ((a[3]-'0')*10+(a[4]-'0'))*60;
        int bmin = ((b[3]-'0')*10+(b[4]-'0'))*60;
        int asec = (a[6]-'0')*10+(a[7]-'0');
        int bsec = (b[6]-'0')*10+(b[7]-'0');
        return abs((ahr+amin+asec)-(bhr+bmin+bsec));
    }
};