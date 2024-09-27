class MyCalendarTwo {
public:
    vector<pair<int,int>> bookings;
    bool book(int start, int end) {
        vector<pair<int,int>> overlaps;
        bool found = false;
        for(auto& [x,y] : bookings){
            int mx = max(x, start);
            int mn = min(y, end);
            if(mx < mn){
                for(auto& [a,b] : overlaps){
                    if(max(a, mx) < min(b, mn)){
                        return false;
                    }
                }
                overlaps.push_back({mx,mn});
            }
        }
        bookings.push_back({start,end});
        return true;
    }
};
