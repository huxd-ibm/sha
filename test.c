#include <stdio.h>
#include "sha.h"

int main(int argc, char **argv) {
    puts("test.");

    SHA256Context ctx;
    int ret;
    ret = SHA256Reset(&ctx);
    printf("%d", ret);

    return 0;
}