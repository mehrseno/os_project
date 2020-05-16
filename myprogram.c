
#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char **argv) {
    int p ;
    p = fork();
    printf(1 , "\nMAIN Process1 : %d\n" , getpid());

    p = fork();
    p = fork();
    if(p <0 ){
        printf(1 , "FAILED");
        return 1;
    }
    if(p > 0 )//parent
    {
        printf(1 , "khode parent2 : %d\n" , getpid());
//        printf(1 , "\nc: %d  ,p: %d\n" , getpid() , getppid());
        getChildren(getpid());
        exit();

    } else if(p == 0)//child
    {
        printf(1 , "child parent : %d\n" , getppid());
//        printf(1 , "\nc: %d ,p: %d\n" , getpid() , getppid());
        getChildren(getpid());
        exit();
    }
}
