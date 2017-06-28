### NAME:
randcall

### SYNOPSIS:
```C
#include <unistd.h>
```
unsigned long int sycall(384, unsigned long int begin, unsigned long int end);

### DESCRIPTION:
The randcall syscall outputs pseudo-random integers in the interval [begin, end]

### ERRORS:
0 - the min value is greater than the end value, the begin value is less than zero or the end value is greater than 1000000
