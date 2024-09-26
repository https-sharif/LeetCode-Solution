class MyCalendar {
public:
    set<pair<int,int>> bookings;
    bool book(int start, int end) {
        
        for(auto& [x,y] : bookings){
            if(!(end <= x || start >= y)){
                return false;
            }
        }

        bookings.insert({start,end});
        return true;
    }
};
