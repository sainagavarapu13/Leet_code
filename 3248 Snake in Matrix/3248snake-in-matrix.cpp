class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>> v(n,vector<int> (n,0));
        long long a=0;
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                v[i][j] = a;
                a++;
            }
        }
        int j = 0,k=0;
        for(int i=0;i<commands.size();i++){
            string s = commands[i];
            if(s=="RIGHT"){
                j++;
            }
            else if(s=="LEFT"){
                j--;
            }
            else if(s=="DOWN"){
                k++;
            }
            else{
                k--;
            }
        }
        return v[k][j];
    }
};