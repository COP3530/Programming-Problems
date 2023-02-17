#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;

    Student(int id, string name) : id(id), name(name) {}

    bool operator==(const Student& rhs) const {
        return id == rhs.id && name == rhs.name;
    }

    bool operator<(const Student& rhs) const {
        // Your code here :)
    }
};

vector<int> sortFirstHalf(vector<int> nums) {
    // Your code here :)
}

vector<int> sortSecondHalf(vector<int> nums) {
    // Your code here :)
}

vector<int> sortReverse(vector<int> nums) {
    // Your code here :)
}

vector<Student> sortStructs(vector<Student> students) {
    // Your code here :)
}