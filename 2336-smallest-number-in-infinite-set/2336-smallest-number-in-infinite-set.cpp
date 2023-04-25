class SmallestInfiniteSet {
public:
    set<int> shubham;
     SmallestInfiniteSet() {
        shubham.clear();
        for(int i=1;i<1024;i++) shubham.insert(i);
    }
    
    int popSmallest() {
        int temp = *shubham.begin();
        shubham.erase(shubham.begin());
        return temp;
    }
    
    void addBack(int num) {
        shubham.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */