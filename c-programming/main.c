//
//  main.c
//  c-programming
//
//  Created by fzoozai on 28/10/2016.
//  Copyright © 2016 fzoozai. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
// create a constant (static object)
#define FISH "nemo"
#include "TopSec.h"

// 29/10/2016 (Tutorial 8)

int main() {
    
    printf("Hello World, my name is %s and I am %d years old\n", MYNAME, AGE);
    
    
    printf("My name is %s\n", FISH);
    
    printf("%s is the best person ever\n", "Flash");
    printf("I eat %.3f eggs\n", 17.2212121);
    return 0;
}
