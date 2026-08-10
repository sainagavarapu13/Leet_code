class Solution {
public:
    vector<string> fullJustify(vector<string>& w,int mw) {
        vector<pair<int,int>> p;
        int cnt=0,tot=0,sp=0;
        for(int i=0;i<w.size();i++){
            if(tot+cnt+w[i].size()<=mw){
               // if(tot!=0) sp++;
                tot+=w[i].size();
                cnt++;
            }
            else{
                p.push_back({cnt,mw-tot});
                tot=w[i].size();
                //sp=0;
                cnt=1;
            }
        }
        p.push_back({cnt,mw-tot});
        int k=0;
        vector<string> a;
        for(int i=0;i<p.size();i++){
            int e=p[i].first,s=p[i].second;
            string line="";

            if(i==p.size()-1){
                for(int j=0;j<e;j++){
                    line+=w[k+j];
                    if(j!=e-1) line+=' ';
                }
                while(line.size()<mw) line+=' ';
            }
            else if(e==1){
                line+=w[k];
                while(line.size()<mw) line+=' ';
            }
            else{
                int par=s/(e-1),m=s%(e-1);

                for(int j=0;j<e;j++){
                    line+=w[k+j];

                    if(j!=e-1){
                        int tem=par;
                        while(tem--) line+=' ';
                        if(m>0){
                            line+=' ';
                            m--;
                        }
                    }
                }
            }
            k+=e;
            a.push_back(line);
        }

        return a;
    }
};