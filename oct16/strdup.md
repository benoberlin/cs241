# strdup()

```c
#include <string.h>
char * strdup(const char *str);
```
- returns a copy of str
- returns null on error
- needs to be manually cleaned

# malloc()
```c
#include <stdlib.h>
void *malloc(size_t size);
```

- Returns an arbitary block of memory or `NULL` on error
- You must tell it how much space is needed
	- Size changes based on architecutre
	- Don't forget extra byte for null on strings

## Examples
```c
int *int_array = malloc(10 * sizeof(int));

char *c_array = malloc(20 * sizeof(char));

// number multiplied by sizeof(type)
```

- Need to `free(c_array)` or `free(int_array)` when done
- Don't call free multiple times (!)
- Need to set values after allocating it
- Not freeing memory is memory leak
