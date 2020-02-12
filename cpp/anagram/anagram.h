#ifndef _ANAGRAM_H_
#define _ANAGRAM_H_

#include <iostream>
#include <vector>
#include <boost\unordered_map.hpp>
#include <boost\algorithm\string.hpp>
using namespace std;

class anagram
{
	string _str;
	boost::unordered_map<char, int> _map;
public:
	anagram(string str);
	vector<string> matches(vector<string> strings);
};

#endif
