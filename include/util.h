#ifndef HAVE_UTIL_H
#define HAVE_UTIL_H

#include "common.h"

/* Function */

int 
    util_get_base_of_integer_literal(
        char const *    literal
    );

size_t 
    util_human_readable_to_size(
        char const *    literal
    );

unsigned long 
    util_nearest_upper_bound_ulong(
        unsigned long   value,
        unsigned long   bound,
        unsigned long   multiply
    );

long 
    util_nearest_upper_bound_long(
        long    value, 
        long    bound, 
        long    multiply
    );

double 
    util_size_to_human_readable(
        uint64_t    size, 
        char *      suffix
    );

#endif