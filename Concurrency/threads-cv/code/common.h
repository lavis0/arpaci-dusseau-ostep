#ifndef AF5EC9D4_FEA7_48DA_8FDF_82A45AAD23AA
#define AF5EC9D4_FEA7_48DA_8FDF_82A45AAD23AA
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


#endif /* AF5EC9D4_FEA7_48DA_8FDF_82A45AAD23AA */
