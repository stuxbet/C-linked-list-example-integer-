#pragma once
#include <vector>
using namespace std;

class stacky {
private:
    vector<int> mainvec;
public:
    void push(int num);
    void pop();
    int top();
    bool empty();
    float average();
};
