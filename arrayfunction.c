#include <stdio.h>

int main(){
    int data[10], i, temp, flag, min, max;
    printf("Enter valid data: ");
    for(i=0; i<10; i++){
        scanf("%d", &data[i]);
    }

 min = max = data[0]; 
    for (i = 1; i < 10; i++) {
        if (data[i] < min) {
            min = data[i]; 
        }
        if (data[i] > max) {
            max = data[i]; 
        }
    }




    printf("Enter the element you want to search: ");
    scanf("%d", &temp);
    
    for(i=0; i<10; i++){
        if(temp == data[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("The location of %d is %d\n", temp, i+1);
    }
    else printf("Element not found");

     printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}