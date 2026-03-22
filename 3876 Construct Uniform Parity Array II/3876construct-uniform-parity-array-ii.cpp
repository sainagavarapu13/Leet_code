class Solution {
public:
    bool uniformArray(vector<int>& a) {
        sort(a.begin(), a.end());

        bool ok_odd = true;
        bool ok_even = true;

        bool seen_odd = false;

        for(int x : a){
            if(x % 2 == 0 && !seen_odd) ok_odd = false;
            if(x % 2 == 1 && !seen_odd) ok_even = false;
            if(x % 2 == 1) seen_odd = true;
        }

        return ok_odd || ok_even;
    }
};