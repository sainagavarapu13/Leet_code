class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int d=0;
        for(int i =0;i< seats.size();i++){
            d  = d + abs(seats[i]-students[i]);
        }
        return d;
    }
};