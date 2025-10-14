class Solution {
public:
    int isinc(vector<int>&a){
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>=a[i+1]) return 0;
        }
        return 1;
    }
    bool hasIncreasingSubarrays(vector<int>& a, int k) {
        int i,j,l,o;
        vector<int>temp1,temp2;
        int n=a.size();
        for(i=0;i<=n-2*k;i++){
            o=i;
            for(j=o;j<o+k;j++){
                temp1.push_back(a[j]);
            
            }
            o=j;
            for(l=o;l<o+k;l++){
                temp2.push_back(a[l]);
              
            }
           if(isinc(temp1)&&isinc(temp2)) return 1;
           temp1.clear();
           temp2.clear();
        }
       
        return 0;

    }
};