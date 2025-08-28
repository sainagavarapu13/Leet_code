class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& a) {
        vector<int>ans,b;
         
        int i,j,k=0,p;
   for(p=0;p<a.size();p++){
             j=k;
            i=0;
            int I=i;
            int J=j;
            while(i<a.size()&&j<a.size()){
                if(i!=j) ans.push_back(a[i][j]);
              b.push_back(a[j][i]);
                i++;
                j++;
        }
        int m=0;
        sort(ans.begin(),ans.end());
        sort(b.begin(),b.end(),greater<>());
        i=0;
        j=k;
       int  l=0;
      while(i<a.size()&&j<a.size()){
           if(i!=j) a[i][j]=ans[m++];
          a[j][i]=b[l++];
            i++;
            j++;
        }
        ans.clear();
        b.clear();
         k++;
    }
       
        return a;
    }
};