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
        _set = vector<string>(capacity, "");
    }

    void insert(string s);

    int hash(string s) {
        return s.size() % capacity;
    }
};

void Set::insert(string s) {
    // Your code here :)

    if (size == capacity) return;
    int i = hash(s);

    while (_set[i] != "") {
        if (_set[i] == s)
            return;

        i++;
        i %= capacity;
    }

    _set[i] = s;
    size++;
}