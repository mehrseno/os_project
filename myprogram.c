#include "types.h"
#include "stat.h"
#include "user.h"


int main(void) {
    // int parent = getpid();
    int child1 = fork();
    int child2 = fork(); 

    printf(1, "Children of prossece %d is %d\n", getpid(), getChildren());

    if(child1 > 0){
        wait();
    }
    if(child2 > 0){
        wait();
    }
    return 1;
}