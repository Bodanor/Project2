//
//  main.c
//  lfsr
//
//  Created by Christos Papadopoulos on 21/03/2021.
//

#include <stdio.h>

#include "lfsr/lfsr.h"

int main(int argc, const char * argv[]) {
    
    LFSR *lfsr = initialisation("01101000010", 8);
    
    for (int i = 0; i < 10; i++)
    {
        int r = generation(lfsr, 5);
        printf("%s %d\n", string(lfsr), r);
        
    }
    
}
