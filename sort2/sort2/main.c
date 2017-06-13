//
//  main.c
//  sort2
//
//  Created by 20161104570 on 17/6/13.
//  Copyright © 2017年 20161104570. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n[10],i,j,a;
    FILE *fr;
    FILE *fw;
    fr = fopen("//Users//a20161104570//Desktop//sort2//read.txt","r+");
    fw = fopen("//Users//a20161104570//Desktop//sort2//storag.txt","w");
    if (fr == NULL)
    {
        printf("File open error !\n");
        return -1;
    }
    else
    {
        for(i=0;i<10;i++)
            fscanf(fr,"%d",&n[i]);
        for(i=0;i<10;i++)
        {
            for(j=0;j<9-i;j++)
            {
                if(n[j]>n[j+1])
                {
                    a=n[j];
                    n[j]=n[j+1];
                    n[j+1]=a;
                }
            }
        }
        
    }
    for(i=0;i<10;i++)
        printf("%d\t",n[i]);
    for(i=0;i<10;i++)
        fprintf(fw,"%d\t",n[i]);
    return 0;
}
