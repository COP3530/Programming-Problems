#include <string>
#include <vector>

using namespace std;

class Set {
   public:
    vector<string> _set;
    int capacity, size;

    Set(int capacity) {
        this->size = 0;
        this->capacity = capacity;
        _set = vector<string>(capacity, "empty");
    }

    void insert(string s);

    int hash(string s) {
        return s.size() % capacity;
    }
};

void Set::insert(string s) {
    // Your code here :)
}