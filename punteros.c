#include <stdio.h>

int main() {    
    int num = 15, a;
    int x;       
    x = &num;       
    a = *x;        
    printf("%p %d",x, a);
    char *ptr = 'a', c;
    char *ptr;
    ptr = &letra;
    c=*ptr;
    printf("%p %c",ptr, c);
    float decimal= 3.14, dec;
    float *ptrF;
    ptrF = &decimal;
    dec = *ptrF;
    printf("%p %2.f, ptrF, dec);
    return 0;
}
