//
//  main.c
//  StartMac
//
//  Created by Wang Leo on 13-5-9.
//  Copyright (c) 2013年 Wang Leo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    unsigned long l=0;
    for (int i=0; i<64; i++) {
        l=(l<<1)+1;
    }
    printf("l is %lu\n",l);
    return 0;
}


