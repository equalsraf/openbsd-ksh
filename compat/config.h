#ifndef COMPAT_CONFIG_H
#define COMPAT_CONFIG_H

#include <string.h>
#include <stdlib.h>
#include <time.h>

#define srand_deterministic(SEED) srand(SEED)
#define sys_signame sys_siglist

#endif
