class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(),citations.rend());
        int a = *max_element(citations.begin(),citations.end());
        int b = 0,j=0;
        for(int i=a;i>=0;i--){
            while(j<citations.size() && citations[j]>=i){
                b++;
                j++;
            }
            if(b>=i) return i;
        }
        return 0;
    }
};