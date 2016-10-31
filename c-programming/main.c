//
//  main.c
//  c-programming
//
//  Created by fzoozai on 28/10/2016.
//  Copyright © 2016 fzoozai. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char firstName [20];
    char crush [20];
    unsigned int numbers;
    
    printf("What is your name? \n");
    
    scanf("%s", firstName);
    
    printf("Who are you going to marry? \n");
    
    scanf("%s", crush);
    
    printf("How old are you? \n");
    
    scanf("%d", &numbers);
    
    printf("%s and %s are in love and the Flash is %d years old", firstName, crush, numbers);
    
    return 0;
}

