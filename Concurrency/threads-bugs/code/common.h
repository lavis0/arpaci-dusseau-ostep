#ifndef A72A29DD_D59A_40E8_8728_A9F229F0D55D
#define A72A29DD_D59A_40E8_8728_A9F229F0D55D
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


#endif /* A72A29DD_D59A_40E8_8728_A9F229F0D55D */
