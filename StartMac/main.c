//
//  main.c
//  StartMac
//
//  Created by Wang Leo on 13-5-9.
//  Copyright (c) 2013年 Wang Leo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    for (int i=99; i>=0; i-=3) {
        printf("%d\n",i);
        if(i%5==0)
        {
            printf("Found one!\n");
        }
    }
    
    return 0;
}


