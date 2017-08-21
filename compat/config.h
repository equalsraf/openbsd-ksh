#ifndef COMPAT_CONFIG_H
#define COMPAT_CONFIG_H

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>

#define srand_deterministic(SEED) srand(SEED)

extern const char *const sys_signame[_NSIG];

#endif
