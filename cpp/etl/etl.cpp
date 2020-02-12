#include "etl.h"

using namespace std;

map<char, int> etl::transform(map<int, vector<char>> m)
{
	map<char, int> ret;
	for (auto const &mit : m)
	{
		int value = mit.first;
		vector<char> v(mit.second);
		for (auto const &vit : v)
		{
			char tmp = ::tolower(vit);
			ret[tmp] = value;
		}
	}
	return ret;
}