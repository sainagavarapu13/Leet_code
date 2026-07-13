class Solution {
public:
    int hIndex(vector<int>& citations) {
        int a = *max_element(citations.begin(),citations.end());
        int b = 0,j=citations.size()-1;
        for(int i=a;i>=0;i--){
            while(j>=0 && citations[j]>=i){
                b++;
                j--;
            }
            if(b>=i) return i;
        }
        return 0;
    }
};