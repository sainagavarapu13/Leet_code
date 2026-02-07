class Solution {
public:
    string intToRoman(int a) {
       vector<string>one = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
       vector<string>tens = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
       vector<string>hrd = { "","C", "CC","CCC", "CD","D","DC","DCC","DCCC","CM"};
       vector<string>tho = {"","M","MM","MMM"};
        string res = tho[a/1000]+hrd[(a%1000)/100]+tens[((a%1000)%100)/10]+one[(((a%1000)%100)%10)];
        return res;
           }
};