#include <stdio.h>
// write a program to find the sum of digits of a number

int main(){
    int x  = 12345;
    int l1 , result = 0 , z;
    while (1)
    {
        if (x < 10)
        {
            result = result + x;
            break;
        }
        l1 = x % 10;
        result += l1;
        z = x / 10;
        x = z;
        
    }
    printf("%d sum is : %d" , x , result);
    
    
    
return 0;
}