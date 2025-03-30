#include <stdio.h>

struct world {
    int data;
    char alphabet;
};

int main() {
    struct world s2;
    s2.data = 34;
    s2.alphabet = 'd'; 

    struct world s1;
    s1.data = 22;
    s1.alphabet = 's';  

    struct world *mylist = &s1;  

    printf("%d\n", mylist->data); 

    return 0;
}
