class RecentCounter {
public:
    queue<int> track3k;
    RecentCounter() {}
    
    int ping(int t) {
        while(!track3k.empty() && track3k.front() < t-3000) track3k.pop();
        track3k.push(t);
        return track3k.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */