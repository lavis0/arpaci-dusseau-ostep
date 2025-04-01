#ifndef A961ABAF_1E7D_4C34_9C83_E3650271ED9D
#define A961ABAF_1E7D_4C34_9C83_E3650271ED9D
#ifndef __common_h__
#define __common_h__

#include <sys/time.h>
#include <sys/stat.h>
#include <assert.h>

double GetTime() {
    struct timeval t;
    int rc = gettimeofday(&t, NULL);
    assert(rc == 0);
    return (double) t.tv_sec + (double) t.tv_usec/1e6;
}

void Spin(int howlong) {
    double t = GetTime();
    while ((GetTime() - t) < (double) howlong)
	; // do nothing in loop
}

#endif // __common_h__


#endif /* A961ABAF_1E7D_4C34_9C83_E3650271ED9D */
