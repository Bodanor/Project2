//
//  lfsr.h
//  lfsr
//
//  Created by Christos Papadopoulos on 21/03/2021.
//

#ifndef lfsr_h
#define lfsr_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct LSFSR_t LFSR;


LFSR *initialisation(char *seed, int tap);

char *string(LFSR* lfsr);
int operation(LFSR *lfsr);
int generation(LFSR *lfsr, int k);
#endif /* lfsr_h */
