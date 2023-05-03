#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache:public Cache{
    public:
        int capacity;
        map<int, int> cache;
        vector<pair<int, int>> history;
        LRUCache(int c){
            capacity = c;
        }
        int get(int key){
            map<int, int>::iterator i = cache.find(key);
            if( i == cache.end() )
                return -1;
            for(vector<pair<int, int>>::iterator j = history.begin(); j - history.begin() < capacity; j++)
                if( j->first == key )
                    return j->second;
            return -1;
        }
        void set(int key, int value){
            map<int, int>::iterator i = cache.find(key);
            pair<int, int> temp;
            temp.first = key;
            temp.second = value;
            if( i == cache.end() ){
                cache[key] = value;
                history.insert(history.begin(), temp);
            } else{
                for(vector<pair<int, int>>::iterator i = history.begin(); i != history.end(); i++)
                    if( i->first == key ){
                        history.erase(i);
                        break;
                    }
                history.insert(history.begin(), temp);
            }
        }
};
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
