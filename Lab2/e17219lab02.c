#include <stdio.h>


int main()
{
    int Matrix[6][6] = {
        {0,1,1,-1,-1,5},
        {-1,0,1,-1,1,5},
        {-1,-1,0,1,1,5},
        {1,1,-1,0,-1,5},
        {1,-1,-1,1,0,5},
        {5,5,5,5,5,5}
    };

    char X,Y;
    int A,B;
    scanf("%c %c",&X,&Y);

    if(X== 'S'){
        A = 0;
    }else if(X== 'R'){
        A = 1;
    }else if(X== 'C'){
        A = 2;
    }else if(X== 'P'){
        A = 3;
    }else if(X== 'L'){
        A = 4;
    }else if(X != 'S'||'R'||'C'||'P'||'L'){
        A = 5;
    }

    if(Y== 'S'){
        B = 0;
    }else if(Y== 'R'){
        B = 1;
    }else if(Y== 'C'){
        B = 2;
    }else if(Y== 'P'){
        B = 3;
    }else if(Y== 'L'){
        B = 4;
    }else if(Y != 'S'||'R'||'C'||'P'||'L'){
        B = 5;
    }

    if(Matrix[A][B] == 0){
        printf("Tie\n");
    }else if(Matrix[A][B] == 1){
        printf("Player 1 wins\n");
    }else if(Matrix[A][B] == -1){
        printf("Player 2 wins\n");
    }else if(Matrix[A][B] == 5){
        printf("Wrong input\n");
    }

    return 0;
}
