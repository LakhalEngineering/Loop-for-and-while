#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>


int main(){

    int counter = 0;

    while(true){
        printf("num : %d\n",counter++);
        sleep(1);
    }
    /*
    for(;;)
    {
        printf("num : %d\n",counter++);
        sleep(1);
    }
    */
}