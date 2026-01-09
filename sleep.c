//gcc -o sleep sleep.c -lm
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<math.h>

int main(int argc , char *argv[]){
    int n=1;
    FILE *f1;
    char *a;
    char c[4096]="";
    char b[4096]="";
    if(argc<2)return 0;
    n=atoi(argv[1]);

    
    time_t now1 =time(0);
    time_t now2 =time(0);
    double seconds =0.000;
    while(1){
        now1 =time(0);
        seconds = difftime(now1, now2);
        if(abs(seconds)>n)break;
    }
    return 0;
}
