class Solution {
public:
    int splitNum(int num) {
        string a = to_string(num);
        sort(a.begin(),a.end());
        string b,c;
        for(int i=0;i<a.length();i++){
            if(i%2==0) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        int d = stoi(b);
        int e = stoi(c);
        return d+e;
    }
};