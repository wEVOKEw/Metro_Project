#ifndef DEF_CROWD_H
#define DEF_CROWD_H

#include "information_way.h"
#include "information_station.h"
#include "which_route_e.h"
#include "which_route.h"

extern void which_route_e(int s_num, int *num);
extern int which_route(int num);

void def_crowd(int (*cl)[8]);

#endif