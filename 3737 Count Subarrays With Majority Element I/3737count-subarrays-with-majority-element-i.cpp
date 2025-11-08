class Solution {
public:
    int countMajoritySubarrays(vector<int>& a, int key) {
        int cnt=0,jk=0;
        for(int i=0;i<a.size();i++){
           
            cnt=0;
            for(int j=i;j<a.size();j++){
             
               if(a[j]==key) cnt++;
               if(cnt>(j-i+1)/2) jk++;
            }
        }
        return jk;
    }
};