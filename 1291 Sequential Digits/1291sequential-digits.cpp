class Solution {
public:

    vector<int> sequentialDigits(int low, int high) {
     vector<int>ans;
     for( int i=1;i<=9;i++){
        int num=0;
        for( int j =i;j<=9;j++){
            num= num*10+j;
            if( low<=num && high>=num)
            {
                    ans.push_back(num);
            }
            if( num >high) break;
        }
     }
     sort(ans.begin(), ans.end());
        return ans;

    }
};