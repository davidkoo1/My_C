#include <stdio.h>
//вместо этого ❤, должно стоять сердечко и тогда всё будет :] 
int main() {
int i,j;
for(i=1;i<=6;i++)
{
    for(j=1;j<=5;j++)
   {
   if(i==1){
        if(j%2==0)
        {
            printf("  ❤ ");
        }
        else{
            printf(" ");
        }
        }
        if(i==2)
        {
            if(j%2==1)
        {
            printf(" ❤ ");
        }
        else{
            printf(" ");
        }
        }
        if(i==4)
        {
            if(j%2==0)
        {
            printf("  ❤ ");
        }
        else{
            printf(" ");
        }
        }
        if(i==6)
        {
            if(j==3)
            printf("    ❤");
            else
            printf(" ");
        }
        
        
    }
    printf("\n");
}

    return 0;

}








