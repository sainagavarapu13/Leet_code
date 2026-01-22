class Solution {
public:
    int minPartitions(string n) {
        int a = 0;
        for(int i=0;i<n.length();i++){
            int b = n[i]-'0';
            if(b>a){
                a = b;
            }
        }
        return a;
    }
};