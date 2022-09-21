#include "../includes/push_swap.h"

int check_input(char c){
    if(!(c >= 48 && c <= 57)){
        return (0);
    }
    return(1);
}

int main(int argc, char **argv){
    int i;
    int j;

    i = 1;
    j = 0;
    while (argc >= 2){
        if(argv[i][j]){
        check_input(argv[i][j]);
        printf(" argv [%d][%d]", i, j);
        }
    }
    return(0);
}