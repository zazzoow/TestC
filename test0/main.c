#include <stdio.h>
#include <stdlib.h>
#include "head.h"

void main() {

   int a[5] = {28,45,98,31,69};

   int *pointer = NULL;

   pointer = a;

   int b = 28;

   printf("je m'appelle hamza et j'ai %d\n", a[0]);

   major(pointer);

}
