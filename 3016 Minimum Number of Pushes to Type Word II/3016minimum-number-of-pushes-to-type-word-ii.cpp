
class Solution {
public:
    int minimumPushes(string s) {
        map<char, int> m;

       
        for (char i : s) {
            m[i]++;
        }
        vector<int> a;
        for (auto& i : m) {
            a.push_back(i.second);
        }
        sort(a.begin(), a.end(), greater<int>());
      
        int sum = 0;
        int k = 1; 
        int cnt = 0;  

        for (int i : a) {
           
            sum += k * i;

            cnt++;

           
            if (cnt % 8 == 0) {
                k++;
            }
        }

        return sum;
    }
};


