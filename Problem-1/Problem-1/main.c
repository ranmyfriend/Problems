//
//  main.c
//  Problem-1
//
//  Created by BKS-GGS on 24/01/22.
//

#include <stdio.h>

//Given a array find max in it

int main(int argc, const char * argv[]) {
    int arr[7] = {4,5,8,6,1,7,3};
    int max = 0;
    for(int i=0;i<7;i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    printf("max:%d",max);
    printf("\n");

    return 0;
}
