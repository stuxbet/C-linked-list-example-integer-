#include "Functions.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> ballz = { 1,9,9,8,10,3,4,4 };
    shellSort(ballz);
    for (auto ball : ballz) { cout << ball<< " "; }

    return 0;
}
