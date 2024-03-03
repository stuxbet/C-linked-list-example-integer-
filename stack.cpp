#include "stack.h"
#include <iostream>
using namespace std;


void stacky::push(int num) {
	mainvec.push_back(num);
}
bool stacky::empty() {
	if (mainvec.size() == 0) { return false; }
	return true;
}

void stacky::pop() {
	if (!empty()) {
		mainvec.pop_back();
	}
}

int stacky::top() {
	return mainvec[mainvec.size() -1];
}

float stacky::average() {
	int total = 0;
	for (auto i : mainvec) { total += i; }
	float average = total / mainvec.size();
	return average;
}