#include <stdio.h>
#include "sha.h"

int main(int argc, char **argv) {
    puts("test.");

    SHA256Context ctx;
    int ret;
    char msg[] = "abc";
    uint8_t digest_buf[SHA256HashSize];
    
    ret = SHA256Reset(&ctx);
    printf("reset return: %d\n", ret);
    ret = SHA256Input(&ctx, msg, sizeof(msg)-1);
    printf("input return: %d\n", ret);
    ret = SHA256Result(&ctx, digest_buf);
    printf("result return: %d\n", ret);
    puts("result:");
    for (int i=0;i<SHA1HashSize;i++) {
        printf("%x", (digest_buf[i] >> 4) & 0xF);
    }
    puts("\n");

    return 0;
}