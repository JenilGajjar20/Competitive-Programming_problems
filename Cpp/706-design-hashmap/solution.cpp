//The logic behind this solution is maintaing two arrays- 
//1. to store values, 2. to store if the value was put into the hash table
// We increase size of both the arrays if key during put() exceeds current size, with new size being 2*key.

class MyHashMap {
public:
    int size=0;
    vector<int> mp;
    vector<bool> vis;

    //Constructor to initialize the array size to 100 by default
    MyHashMap() {
        size=100;
        mp.resize(size);vis.resize(size);
    }
    
    void put(int key, int value) {
        //If key exceeds current size we double the array size
        if(key>=size) {size=key*2;mp.resize(size);vis.resize(size);}
        //Put the 'value' in index 'key' of array mp and make the 'key' index visited in array vis
        mp[key]=value;vis[key]=true;
    }
    
    int get(int key) {
        //Check for conditions of key not present
        if(key>=size) return -1;
        else if(vis[key]==false) return -1;
        //return the value at index 'key'
        return mp[key];
    }
    
    void remove(int key) {
        //remove key by making it non-visited
        if(key<size) vis[key]=false;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */