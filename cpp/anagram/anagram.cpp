#include "anagram.h"

anagram::anagram(string str)
{
	_str = str;
	string tmp = boost::algorithm::to_lower_copy(str);
	for (char& c : tmp)
	{
		_map[c]++;
	}
}


vector<string> anagram::matches(vector<string> strings)
{
	vector<string> ret;

	for (string& s : strings)
	{
		string tmpString = boost::algorithm::to_lower_copy(s);
		if (tmpString.compare(_str) == 0)
			break;
		boost::unordered_map<char, int> tmp;
		for (char& c : tmpString)
		{
			tmp[c]++;
		}
		if (tmp == _map)
			ret.push_back(s);
	}

	return ret;

}