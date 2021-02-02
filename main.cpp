#include "reduce.h"




int main(int argc, char const *argv[])
{
	if(argc ==1 )
	{
		std::cout << "specify N parameter for reducing" << std::endl;
		return 1;
	}
	
	int N = std::atoi(argv[1]);
	if(N<3)
	{
		std::cout << "wrong N parameter for reducing" << std::endl;
		return 1;
	}
	std::cout << "N = "<<N << std::endl;

	pairList lst{
		{1, 10},
		{2, 11},
		{3, 11},
		{4, 11},
		{5, 11},
		{6, 10},
		{7, 11},
		{8, 11},
		{9, 11},
		{10, 11},
		{11, 10}};

	std::cout << "sequence before reducing" << std::endl;
	for (auto &&i : lst)
	{
		std::cout << i << " ";
	}
	std::cout <<'\n';

	reduceSequence(lst, N);

	std::cout << "sequence after reducing" << std::endl;
	for (auto &&i : lst)
	{
		std::cout << i << " ";
	}
	std::cout <<'\n';
	return 0;
}

