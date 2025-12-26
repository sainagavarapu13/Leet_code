class Solution {
public:
    int bestClosingTime(string a) {
        int y=0,n=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='Y') y++;
        }
        int Y=y;
        int sum=0,m=INT_MAX;
        for(int i=0;i<=a.size();i++){
                sum=n+y;
              m=min(m,sum);
              if(i!=a.size()&&a[i]=='N') n++;
              if(i!=a.size()&&a[i]=='Y') y--;
        }
        y=Y,n=0;
        cout<<m;
        for(int i=0;i<a.size();i++){
            if(n+y==m) return i;
            if(a[i]=='Y') y--;
            if(a[i]=='N') n++;
        }
      return a.size();

    }
};