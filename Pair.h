#pragma once
#include <iostream>

struct Pair {
	uint y,x;
	Pair(uint y, uint x): x(x), y(y) {}
};

inline std::ostream& operator<< (std::ostream& out, const Pair& c) {
	return (out << c.x << "," << c.y);
}
