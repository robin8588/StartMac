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
    printf(" 3*3+5*2=%d\n",3*3+5*2);
    printf("11/3=%d remainder of %d \n",11/3,11%3);
    printf("11/3.0=%f\n",11/(float)3);
    printf("The absolute value of -5 is %d\n",abs(-5));
    
    double y= 123.456;
    printf("y is %.2f\n",y);
    printf("y is %.2e\n",y);
    
    float i=1;
    float f=sinf(i);
    printf("the sine of 1 radian is %.3f\n",f);
    return 0;
}


