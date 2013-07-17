//
//  main.c
//  StartMac
//
//  Created by Wang Leo on 13-5-9.
//  Copyright (c) 2013年 Wang Leo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int spanceCount(const char *s){
    int x=0;
    for (int i=0; i<strlen(s); i++) {
        if(s[i]==' '){
            x++;
        }
    }
    return x;
}

int main(int argc, const char * argv[])
{
    const char *sentance="ckdja dkaldk diahv dkwoeru dhvia nckd idoeonckhgutoa kaopeirzn ";
    printf("\"%s\" has %d spaces \n",sentance,spanceCount(sentance));
    return 0;
}


