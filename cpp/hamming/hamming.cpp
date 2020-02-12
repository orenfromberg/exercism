#include "hamming.h"

int hamming::compute(string x, string y)
{
	int xLength = x.length();
	int yLength = y.length();

	if (xLength != yLength)
		throw domain_error("strings are not the same length");

	int distance = 0;
	for (int i = 0; i < xLength; i++)
	{
		if (x[i] != y[i])
			distance++;
	}
	return distance;
}