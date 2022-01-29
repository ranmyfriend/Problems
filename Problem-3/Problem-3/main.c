//
//  main.c
//  Problem-3
//
//  Created by BKS-GGS on 29/01/22.
//

#include <stdio.h>

/*
 Program to print array elements using recursion and loop
 */

//Recursion

void printNumber(int arr[], int start, int end);

#define ARRAY_SIZE 5
int main(int argc, const char * argv[]) {
    
    printf("enter list of 5 numbers:\n");
    int array[ARRAY_SIZE];
    for(int i=0;i<ARRAY_SIZE;i++) {
        scanf("%d\n",&array[i]);
    }
    
    printf("\nElements are printed by Loop:\n");
    for (int j=0; j<ARRAY_SIZE; j++) {
        printf("%d\n",array[j]);
    }
    
    printf("\nElements are printed by Recursion:\n");
    printNumber(array, 0, ARRAY_SIZE);
    
    return 0;
}

void printNumber(int arr[], int start, int end) {
   if (start >= end) {
       return;
   }
   
   printf("%d\n",arr[start]);
   printNumber(arr, start+1, end);
}
