class MyCalendarThree {
public:
    map<int, int>map;
    int maxim=0;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        int count=0;
        map[start]++;
        map[end]--;
        for(auto i = map.begin();i!=map.end();i++){
            count+=i->second;
            maxim=max(maxim, count);
        }
        return maxim;
    }
};
/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */