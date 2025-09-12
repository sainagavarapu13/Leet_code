class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> v;
        int c = INT_MAX;
        for(int i=0;i<list2.size();i++){
            string a = list2[i];
            for(int j=0;j<list1.size();j++){
                if(list1[j]==list2[i]){
                    int b = i+j;
                    if(b<c){
                        v.clear();
                        v.push_back(a);
                        c = b;
                    }
                    else if(b==c){
                        v.push_back(a);
                    }
                    break;
                }
            }
        }
        return v;
    }
};