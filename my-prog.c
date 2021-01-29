#include<stdio.h>
#include<stdint.h>

int main(int argc, char** argv){
    if (argc != 1) {
    fprintf(stderr, "Argument Count Must Be 1! \n ");
    return 1;
    }
    fprintf(stdout, "Hello Coders! \n");
    return 0;
}