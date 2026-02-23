class Solution {
public:
    int fun(char i){
        if(i=='c') return 0;
        else if(i=='r') return 1;
        else if(i=='o') return 2;
        else if(i=='a') return 3;
        else return 4;
    }

    int minNumberOfFrogs(string s) {
        if(s.size() < 5) return -1;

        int ac = 0;
        int ma = 0;
        vector<int> a(5,0);

        for(char i : s){
            int v = fun(i);
            a[v]++;

            if(v != 0 && a[v-1] < a[v]) 
                return -1;

            if(i == 'c'){
                ac++;
                ma = max(ma , ac);
            }
            else if(i == 'k'){
                ac--;
            }
        }

        if(ac != 0) return -1;

        return ma;
    }
};