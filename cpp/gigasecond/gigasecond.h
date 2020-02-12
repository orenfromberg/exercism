#ifndef _GIGASECOND_H_
#define _GIGASECOND_H_

#include <boost/date_time/gregorian/greg_date.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <math.h>

using namespace boost::gregorian;

class gigasecond
{
public:
	static const date advance(date d);
};

#endif // !_GIGASECOND_H_