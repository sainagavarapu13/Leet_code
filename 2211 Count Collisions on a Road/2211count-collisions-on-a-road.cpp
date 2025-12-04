class Solution {
public:
    int countCollisions(string d) {
        int n = d.size(),co=0;
        int i=0,j=n-1;
        while(i<n && d[i]=='L') i++;
        while(j>=0 && d[j]=='R')j--;
        for(int k=i;k<=j;k++){
            if(d[k]=='L' || d[k]=='R') co++;
        }
        return co;
    }
};