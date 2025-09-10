class Solution {
public:
    string bin(int n){
        string a;
        while(n){
            a += to_string(n%2);
            n/=2;
        }
        reverse(a.begin(),a.end());
        return a;
    }
    string convertDateToBinary(string d) {
        string r;
        r += bin(stoi(d.substr(0,4)));
        r += '-';
        r += bin(stoi(d.substr(5,7)));
        r += '-';
        r += bin(stoi(d.substr(8,10)));
        return r;
    }
};