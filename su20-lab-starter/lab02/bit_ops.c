#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns
    // 0 or 1)

    x = x << (31 - n);
    x = x >> 31;

    return x;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    // YOUR CODE HERE

    unsigned tmp = get_bit(*x, n);
    tmp = tmp << n;
    *x = *x ^ tmp;
    v = v << n;
    *x = *x | v;

}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    // YOUR CODE HERE

    unsigned tmp = get_bit(*x, n);
    tmp = ~tmp;
    tmp = get_bit(tmp, 0);
    set_bit(x, n, tmp);

}

