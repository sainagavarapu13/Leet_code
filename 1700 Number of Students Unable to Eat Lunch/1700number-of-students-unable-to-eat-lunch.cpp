class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int a=0,b=0,c=0,d=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==1){
                a++;
            }
            else{
                b++;
            }
            if(sandwiches[i]==1){
                c++;
            }
            else{
                d++;
            }
        }
        if(a==c && b==d){
            return 0;
        }
        else{
            int e = 0,f = sandwiches.size();
            for(int i=0;i<sandwiches.size();i++){
                auto it = find(students.begin(),students.end(),sandwiches[i]);
                if(it!=students.end()){
                    *it = -1;
                    e++;
                }
                else{
                    return f-e;
                }
            }
        }
        return 0;
    }
};