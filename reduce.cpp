#include "reduce.h"

void reduceSequence(pairList &lst, int N)
{

	int lastValue = lst.front().second;
	int currentN = 1;
	for (auto it = std::next(lst.begin(),1); it != lst.end();)
	{
		if (it->second == lastValue)
		{
			++currentN;
			if (currentN % N != 0 &&
				std::next(it, 1) != lst.end() &&
				std::next(it, 1)->second == lastValue)
				it = lst.erase(it);
			else
				++it;
			
		}
		else
		{
			lastValue = it->second;
			currentN = 1;
			++it;
		}
	}
}

std::ostream &operator<<(std::ostream &out, const intPair &p)
{
	std::cout << "(" << p.first << ", " << p.second << ")";
	return out;
}