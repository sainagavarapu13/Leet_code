class Solution {
public:
    int fun(long long n){
        while(n >= 10) n /= 10;
        return n;
    }

    int countValidSubarrays(vector<int>& a, int x) {
        int cnt = 0;

        for(int i = 0; i < a.size(); i++) {
            long long sum = 0;

            for(int j = i; j < a.size(); j++) {
                sum += a[j];

                int last = sum % 10;
                int first = fun(sum);

                if(last == x && first == x)
                    cnt++;
            }
        }

        return cnt;
    }
};