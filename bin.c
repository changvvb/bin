#include <stdio.h>

void printBin(void *, size_t );

int main() {

    float f = 1.25f;
    printBin(&f,sizeof(f));

    double d = -1.25;
    printBin(&d,sizeof(d));
    
    int i = 8;
    printBin(&i,sizeof(i));

    char c = '4';
    printBin(&c,sizeof(c));

    return 0;
}

//Convert something to binary, float,double to IEEE754
void printBin(void *pnum, size_t size) {
    unsigned long value = 1ul << (size * 8 - 1);
    for(int i = 0; i < (int)size * 8; i++) {
        printf("%d", (value & *(unsigned long*)pnum) ? 1 : 0);
        value >>= 1;
    }
    printf("\n");
}


