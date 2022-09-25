#include <stdio.h>

int main()
{
    int columns,rows;      //defining variables for storing number of columns and rows
    int counter1,counter2,counter3;    //defining variables for counters for for loops
    int R,G,B;     //defining variables for storing R G B values of a pixel
    int mR,mG,mB;      //defining variables for storing modified R G B values of a pixel
    int m,p,padding;       //defing variables for storing data regarding padding values

    scanf("%d %d",&columns,&rows);     //getting number os columns and rows and assinging those to variables
    printf("%d %d\n",columns,rows);    //printing number of columns and rows

    m = (columns*3)%4;     //calculating the remainder

    if(m==0){          //defining a conditional for the number of padding values
        padding = 0;
    }else{
        padding = 4 - m;
    }

    for(counter1=1;counter1<=rows;counter1++){     //accessing rows
        for(counter2=1;counter2<=columns;counter2++){      //accessing columns
            scanf("%d %d %d",&R,&G,&B);        //getting the rgb values for a pixel
            mR=255-R;
            mG=255-G;
            mB=255-B;
            printf("%d %d %d\n",mR,mG,mB);         //printing modified rgb values
        }for(counter3=1;counter3<=padding;counter3++){        //loop regarding the padding values
            scanf("%d",&p);        //getting padding values
            printf("%d\n",p);        //printing padding values
        }

    }

    return 0;
}
