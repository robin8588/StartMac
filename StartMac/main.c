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
    float *startOfBuffer;
    
    startOfBuffer =malloc(1000*sizeof(float));
    free(startOfBuffer);
    startOfBuffer=NULL;
    return 0;
}


