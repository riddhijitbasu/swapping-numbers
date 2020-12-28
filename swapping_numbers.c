#include<stdio.h>  
 int main()    
{    
int a=69, b=96;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=165 (69+96)    
b=a-b;//b=69 (165-96)    
a=a-b;//a=96 (165-69)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
