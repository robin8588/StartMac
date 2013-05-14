//
//  main.c
//  StartMac
//
//  Created by Wang Leo on 13-5-9.
//  Copyright (c) 2013年 Wang Leo. All rights reserved.
//

#include <stdio.h>

float remainingAngel(float angleA,float angleB)
{
    return 180.0-angleA-angleB;
}


int main(int argc, const char * argv[])
{
    float angleA=30.0;
    float angleB=60.0;
    float angleC=remainingAngel(angleA, angleB);
    printf("The third angle is %.2f\n",angleC);
    return 0;
}


