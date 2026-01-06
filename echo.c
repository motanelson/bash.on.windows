//gcc -o echo echo.c
#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[]){
    int n=0;
    if (argc>1){
        for (n=1;n<argc;n++)printf("%s ",argv[n]);
    }
    printf("\n");
    return 0;
}
