class MyCalendar {
public:
    vector<pair<int,int>>p;
    MyCalendar() {
        
    }
    
    bool book(int a, int b) {
        sort(p.begin(),p.end());
        if(p.empty()){
            p.push_back({a,b});
            return true;
        }
        else{
            for(int i=0;i<p.size();i++){
                 int end = p[i].second;
                 int start = p[i].first;
                //  if(start<=a&&b<end){
                //     return false;
                //  }
                if(a < end && b > start) {
                    return false;
                }
            }
            p.push_back({a,b});
            return true;
           
          
        }
       // return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */