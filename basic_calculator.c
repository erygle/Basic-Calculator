#include<stdio.h>

#define SUM for(i=0 ; i<size ; i++)\
                 result += arr[i]
#define SUB for(i=1 ; i<size ; i++)\
                 result -= arr[i]
#define MUL for(i=1 ; i<size ; i++)\
                 result *= arr[i]

int sum(int arr[],int size){
    int result=0;
    int i;
    SUM;
    return result;
}
int sub(int arr[],int size){
    int result=arr[0];
    int i;          
    SUB;
    return result;
}
int mul(int arr[],int size){
    int result=arr[0];
    int i;          
    MUL;
    return result;
}
float div(float num1,float num2){
    float result = num1 / num2;
    return result;
}
int pfind(int base,int power){
    int result = 1,i;
    for (i = 0; i < power; i++){
        result = result*base;
    }return result;
}

int main(void){
    int i,size,process,arr[20];
    printf("---------------SELECT YOUR PROCESS---------------\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Divide\n5-Find Power\nYour choice : ");
    scanf("%d",&process);
    switch (process)
    {
        case 1:
            printf("How many numbers do you want to summon : ");
            scanf("%d",&size);
            for (i = 0; i < size; i++){
                printf("Enter your %d number : ",i+1);
                scanf("%d",&arr[i]);
            }printf("Your result is %d.\n",sum(arr,size)); 
            break;
        case 2:
            printf("How many numbers do you want to substract : ");
            scanf("%d",&size);
            for (i = 0; i < size; i++){
                printf("Enter your %d number : ",i+1);
                scanf("%d",&arr[i]);
            }printf("Your result is %d.\n",sub(arr,size));
            break;
        case 3:
            printf("How many numbers do you want to multiplicate : ");
            scanf("%d",&size);
            for (i = 0; i < size; i++){
                printf("Enter your %d number : ",i+1);
                scanf("%d",&arr[i]);
            }printf("Your result is %d.\n",mul(arr,size));
            break;
        case 4:
            float num1,num2;
            printf("Enter your first number : ");
            scanf("%f",&num1);
            printf("Enter your second number : ");
            scanf("%f",&num2);
                if (num2 == 0){
                    printf("Invalid value.");
                    break;
                }
            printf("Your result is %.3ff.\n",div(num1,num2));
            break;
        case 5:
            int result,i,base,power;
            printf("Enter your base : ");
            scanf("%d",&base);
            printf("Enter your power : ");
            scanf("%d",&power);
            if(power > 0){
                printf("Your result is %d.\n",pfind(base,power));
            }else if(power == 0){
                printf("Your result is 1.\n");
            }else {
                printf("Your result is 1/%d.\n",pfind(base,-power));
            }
            break;
        default:
        printf("Invalid Value.\nThe Program Closing...\n");
            break;
    }
return 0;
}
