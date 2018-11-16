#include<assert.h>

int add(int a, int b){
    return a + b;
}

int main(void){
    assert(add(78, 15) == 93);
    /* bad assertion */
    assert(add(78, 15) == 92);

    return 0;
}
