#include <stdio.h>
#include "map.h"

int main() {
    hash_t *h = hash_new(15);
    hash_insert(h, "hello", "world");
    hash_insert(h, "a", "b");
    printf("hello => %s\n", hash_lookup(h, "hello"));
    return 0;
}
