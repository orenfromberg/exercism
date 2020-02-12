#include "gigasecond.h"

using namespace boost::posix_time;

const date gigasecond::advance(date d)
{
	time_duration duration(seconds((long)powl(10l, 9l)));
	ptime time = ptime(d, duration);
	return time.date();
}
