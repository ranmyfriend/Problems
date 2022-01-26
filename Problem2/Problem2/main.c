//
//  main.c
//  Problem2
//
//  Created by BKS-GGS on 26/01/22.
//

#include <stdio.h>

/*
 Problem 2: Construct Half Pyramid
 Input: number of rows
 output:
            *
            **
            ***
            ****
            *****
 */

int main(int argc, const char * argv[]) {
    
    int n = 5;
    for (int i=0; i<n; i++) {
        for(int k=0; k<n; k++) {
            if(k<=i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
