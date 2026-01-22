class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        for(int i=0;i<bank.size();i++){
            int a = 0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1') a++;
            }
            v.push_back(a);
        }
        int b = 0,c = 0,res =0;
        for(int i=0;i<v.size();i++){
            if(v[i]>0){
                b = v[i];
                int j = i+1;
                for(j;j<v.size();j++){
                    if(v[j]>0){
                        c = v[j];
                        res += b*c;
                        break;
                    }
                }
                i = j-1;
            }
        }
        return res;
    }
};