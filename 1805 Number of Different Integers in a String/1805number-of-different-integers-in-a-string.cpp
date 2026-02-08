class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string>s;
        for(int i=0;i<word.size();i++){
            if(word[i]>='0' && word[i]<='9'){
                int j=i,b = 0;
                while(j<word.size()){
                    if(word[j]=='0'){
                        j++;
                    }
                    else if(word[j]>='1' && word[j]<='9'){
                        i=j;
                        break;
                    }
                    else{
                        b = 1;
                        s.insert("0");
                        break;
                    }
                }
                if(b==1){
                    i = j;
                    continue;
                }
                while(j<word.size()){
                    if(word[j]>='0' && word[j]<='9'){
                        j++;
                    }
                    else{
                        break;
                    }
                }
                cout<<i<<" "<<j<<endl;
                string t =  word.substr(i,j-i);
                cout<<t<<endl;
                i = j-1;
                s.insert(t);
            }
        }
        for(auto n:s){
            cout<<n<<endl;
        }
        return s.size();
    }
};