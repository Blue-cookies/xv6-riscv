#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    int nproc_val = getNPROC();
    printf("The current value of NPROC = %d\n" ,nproc_val);
    exit(0);    
}