class ExamTracker {
public:
    vector<pair<int,long long>>a;
    ExamTracker() {}
    void record(int time, int score) {
        if(a.empty()) a.push_back({time,score});
        else a.push_back({time,score+a.back().second});
    }
    long long totalScore(int startTime, int endTime) {
        long long sum=0;
        long long to_sub=0,to_add=0;
       for(int i=0;i<a.size();i++){
           if(a[i].first>=startTime){
               if(i>0)
               to_sub=a[i-1].second;
               break;
           }
           if(i==a.size()-1){
               to_sub=a[i].second;
           }
       }
        for(int i=a.size()-1;i>=0;i--){
            if(a[i].first<=endTime){
                to_add=a[i].second;
                break;
            }
        }
        return to_add-to_sub;
    }
};

/**
 * Your ExamTracker object will be instantiated and called as such:
 * ExamTracker* obj = new ExamTracker();
 * obj->record(time,score);
 * long long param_2 = obj->totalScore(startTime,endTime);
 */