#ifndef _ETL_H_
#define _ETL_H_

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class etl
{
public:
	static map<char, int> transform(map<int, vector<char>>);
};

#endif