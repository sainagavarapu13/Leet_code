class Solution {
public:
    int compareVersion(string a, string a1) {
       int sum=0;
       int b=0;
       int b1=0;
       int i=0,j=0;
       while(i<a.size()||j<a1.size()){
        b=0;
        b1=0;
        while(i<a.size()&&a[i]!='.'){
            b=b*10+(a[i]-'0');
            i++;
        }
         while(j<a1.size()&&a1[j]!='.'){
            b1=b1*10+(a1[j]-'0');
            j++;
        }
        i++;
        j++;
        cout<<b<<" "<<b1<<"\n";
        if(b>b1) return 1;
        else if(b<b1) return -1;
       }
       if(b>b1) return 1;
        else if(b1<b1) return -1;
        else return 0;
    }
};