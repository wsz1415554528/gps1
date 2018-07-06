//
//  main.c
//  gps
//
//  Created by s20161104602 on 2018/7/6.
//  Copyright © 2018年 s20161104602. All rights reserved.
//


#include <stdio.h>
int main()
{
    FILE *fp=fopen("//Users/s20161104602//Desktop//gps", "r");
    FILE *fp1=fopen("//Users//s20161104602//Desktop//gps", "r+");
    int i;
    char g1[63];
    char g2[70];
    char lat[9];               //纬度
    char lng[10];              //经度
    char height[5];            //海拔
    char day[3],month[3],year[3];
    char s[3],m[3],h[3];
    
    
    
    
    
    
    
    
    if(fp==NULL)
    {
        printf("文件读取错误，请检查文件GPS170510.log是否存在!");
    }
    else
    {
        while(fscanf(fp,"%s%s",g1,g2)!=EOF)
        {
            printf("%s\n%s\n",g1,g2);
            for(i=0;i<8;i++)
                lat[i]=g1[i+16];
            lat[8]='\0';
            printf("纬度：%s\n",lat);
            fprintf(fp1,"纬度：%s,",lat);
            
            
            for(i=0;i<9;i++)
                lng[i]=g1[i+27];
            lng[9]='\0';
            printf("经度：%s\n",lng);
            fprintf(fp1,"经度：%s,",lng);
            
            
            
            
            
            
            
            
            for(i=0;i<2;i++)
                day[i]=g1[i+51];
            day[2]='\0';
            
            for(i=0;i<2;i++)
                month[i]=g1[i+53];
            month[2]='\0';
            
            
            for(i=0;i<2;i++)
                year[i]=g1[i+55];
            year[2]='\0';
            
            printf("日期：%s年%s月%s日\n",year,month,day);
            fprintf(fp1,"日期：%s年%s月%s日,",year,month,day);
            
            
            
            
            
     
