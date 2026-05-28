class Solution {
public:
    class TriesNode{
    public:
        unordered_map<string, TriesNode*> t;
        bool end = false;
    };

    void insert(TriesNode* node , string s){
        TriesNode* root = node;
        string temp = "";
        for(char j : s){
            temp += j;
            if(root->t[temp] == NULL){
                root->t[temp] = new TriesNode();
            }
            root = root->t[temp];
        }
   root->end = true;
    }
    bool checkPrefix(TriesNode* node , string s){
        TriesNode* root = node;
        string temp = "";
        for(char i : s){
            temp += i;
            if(root->t[temp] == NULL)
                return 0;
            root = root->t[temp];
        }
        return 1;
    }
    bool checkSuffix(TriesNode* node , string s){
        reverse(s.begin(), s.end());
        TriesNode* root = node;
        string temp = "";
        for(char i : s){
            temp += i;
            if(root->t[temp] == NULL)
                return 0;
            root = root->t[temp];
        }
       return 1;
    }
    int countPrefixSuffixPairs(vector<string>& a) {
        int cnt = 0;
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                TriesNode* pre = new TriesNode();
                TriesNode* suf = new TriesNode();
                insert(pre , a[j]);
                string rev = a[j];
                reverse(rev.begin(), rev.end());
                insert(suf , rev);
                if(checkPrefix(pre , a[i]) &&
                   checkSuffix(suf , a[i])){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};