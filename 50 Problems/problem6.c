#include <stdio.h>
// write a program to find maximum of three numbers.

int main(){
    int a , b , c;
    printf("Enter a : ");
    scanf("%d" , &a);
    printf("Enter b : ");
    scanf("%d" , &b);
    printf("Enter c : ");
    scanf("%d" , &c);

    if (a > b)
    {//a boro
        if (a > c)
        {
            printf("Maximum Number is %d \n" , a);
        }
        else{
            printf("Maximum Number is %d \n" , c);
        }
        
    }
    else{//b boro
        if (b > c)
        {
            printf("Maximum Number is %d \n" , b);
        }
        else{
            printf("Maximum Number is %d \n" , c);
        }
        
    }
    

return 0;
}