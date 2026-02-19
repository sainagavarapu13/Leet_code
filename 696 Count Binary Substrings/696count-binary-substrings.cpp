class Solution {
public:
    int countBinarySubstrings(string a) {
        int i;
        vector<int>count;
        count.push_back(1);
        for(i=1;i<a.size();i++){
            if(a[i-1]==a[i]){
                count.back()++;
            }
            else count.push_back(1);
        }
       
        int m,sum=0;
        for(i=0;i<count.size()-1;i++){
            m=min(count[i],count[i+1]);
            sum+=m;
           
        }
        return sum;
    }
};