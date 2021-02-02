#pragma once

#include <list>
#include <iostream>

using intPair = std::pair<int, int>;
using pairList = std::list<intPair>;

void reduceSequence(pairList &lst, int N);
std::ostream &operator<<(std::ostream &out, const intPair &p);