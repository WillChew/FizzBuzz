//
//  main.c
//  FizzBuzz
//
//  Created by Will Chew on 2018-04-30.
//  Copyright © 2018 Will Chew. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // for loop: initialize integer, set condition for integer, increment
    // if the remainder of i when divided by 3 is equal to 0, print "Fizz"
    
    for (int i = 1; i<=100; i++) {
        if (i % 3 == 0){
            printf("Fizz");
        }
        // if the remainder of i when divided by 5 is equal to 0, print "buzz"
        if (i % 5 == 0)
            printf("Buzz");
        
        // if the remainder of i when divided by 3 is NOT 0 AND the remainder of i when divided by 5 is NOT equal to 0, then print the number (i)
        if ((i % 3 != 0) && (i % 5 != 0))
            printf("%d", i);
            printf("\n");
        
    }
    return 0;
}

