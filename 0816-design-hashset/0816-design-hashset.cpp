class MyHashSet {
public:
    vector<int>hash;
    MyHashSet() {
        hash.resize(1000001, 0);
    }
    
    void add(int key) {
        hash[key]++;
    }
    
    void remove(int key) {
        hash[key]=0;
    }
    
    bool contains(int key) {
        if(hash[key]>0) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */