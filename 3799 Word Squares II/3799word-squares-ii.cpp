class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& a) {
        vector<vector<string>>ans;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                if(i==j) continue;
                for(int k = 0 ;k<a.size();k++){
                    if(i==k||j==k) continue;
                    for(int l=0;l<a.size();l++){
                        if(i==l||j==l||k==l) continue;
                        string top = a[i];
                        string left = a[j];
                        string right = a[k];
                        string bottom = a[l];
                        if(top[0]==left[0]){
                            if(top[3]==right[0]){
                                if(left[3]==bottom[0]&&right[3]==bottom[3]){
                                    ans.push_back({top,left,right,bottom});
                                }
                            }
                        }
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};