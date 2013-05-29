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
    float f;
    printf("A float Consumes %zu bytes\n",sizeof(f));
    
    short s = 0;
    unsigned short us=0;
    printf("A short Consumes %zu bytes\n",sizeof(s));
    printf("A unsigned short Consumes %zu bytes\n",sizeof(us));
    do {
        if((--s)>0){
            printf("the min short is %d\n",++s);
            break;
        }
    } while (s<0);

    s--;
    us--;
    printf("the max short is %d\n",s);
    printf("the max unsigned short is %u\n",us);
    return 0;
}


