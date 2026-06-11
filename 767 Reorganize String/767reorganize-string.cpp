class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int>m;
        for( char i : s){
           m[i]++;
        }
        priority_queue<pair<int , char>> pq;
     for( auto [ ch,c ] : m){
        pq.push({c,ch});
     }
      string res = "";
      while(! pq.empty()){
        auto [ c1 , ch1] = pq.top();
        pq.pop();
        if(res.size() >=1 && res.back() == ch1){
            if( pq.empty()) return "";
            auto [ c2,ch2]= pq.top();
            pq.pop();
            res+=ch2;
            c2--;
            if(c2>0) pq.push({c2,ch2});
            pq.push({c1,ch1});
        }else{
            res+=ch1;
            c1--;
            if(c1>0) pq.push({c1,ch1});

        }
      }
      return  res;
        
    }
};