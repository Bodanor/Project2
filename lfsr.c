//
//  lfsr.c
//  lfsr
//
//  Created by Christos Papadopoulos on 21/03/2021.
//

#include "lfsr.h"


struct LSFSR_t {
    char *seed;
    int tap;
   
};


LFSR *initialisation(char *seed, int tap)
{
    LFSR *lfsr = malloc(sizeof(lfsr));
    lfsr->tap = tap;
    lfsr->seed = malloc(sizeof(char)*strlen(seed));
    lfsr->seed = seed;
    
    
    return lfsr;
}


char *string(LFSR* lfsr)
{
    return lfsr->seed;
    
}

int operation(LFSR *lfsr)
{
    char a = lfsr->seed[0];
    char b = lfsr->seed[strlen(lfsr->seed)-1 - lfsr->tap];
    int bit = a^b;
    char bite = bit + '0';
    char *new_seed = calloc(strlen(lfsr->seed), sizeof(char));
    
    for (int i = 0; i < strlen(lfsr->seed); i++)
    {

        strncat(new_seed, &lfsr->seed[i+1], 1);
        
    }
    strncat(new_seed, &bite, 1);
    
    lfsr->seed = new_seed;
    
    return bit;
}


int generation(LFSR *lfsr, int k)
{
    int r = 0;
    int bit = 0;
    
    for (int i = 0; i < 5; i++)
    {
        for (int x = 0; x < k; x++)
        {
            bit = operation(lfsr);
            
        }
        r*=2;
        r+=bit;
        
    }
    printf("%d\n", r);
    return r;
}


