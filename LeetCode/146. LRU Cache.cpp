class LRUCache {
public:
    LRUCache(int _capacity) {
        capacity = _capacity;
    }
    
    int get(int key) {
        auto it = mp.find(key);
        if (it == mp.end()) return -1;
        move(it);
        return it->second.first;
    }
    
    void put(int key, int value) {
        auto it = mp.find(key);
        if (it != mp.end())
        {
            move(it);
        }
        else if (mp.size() == capacity)
        {
            mp.erase(li.back());
            li.pop_back();
            li.push_front(key);
        }
        else
        {
            li.push_front(key);
        }
        mp[key] = make_pair(value, li.begin());
    }
    
    void move(unordered_map<int, pair<int, list<int>::iterator> >::iterator it)
    {
        int key = it->first;
        li.erase(it->second.second);
        li.push_front(key);
        it->second.second = li.begin();
    }
    
    list<int> li;
    unordered_map<int, pair<int, list<int>::iterator> >mp;
    
    int capacity;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
