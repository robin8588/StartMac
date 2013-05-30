//
//  main.c
//  StartMac
//
//  Created by Wang Leo on 13-5-9.
//  Copyright (c) 2013年 Wang Leo. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[])
{
    long secondsSince1970=time(NULL);
    long after4millionseconds =4000000+secondsSince1970;
    struct tm whatDate;
    localtime_r(&after4millionseconds, &whatDate);
    printf("The date in 4 million seconds will be %d - %d -%d  %d : %d : %d",whatDate.tm_year+1900,whatDate.tm_mon+1,whatDate.tm_mday,whatDate.tm_hour,whatDate.tm_min,whatDate.tm_sec);
    return 0;
}


