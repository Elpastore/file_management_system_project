#ifndef _main_h
#define _main_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct files
{
    char *name; // name of the file (without path)
    char content[500];
    int size;
    time_t date;    
} File;

void create_file(File file[], int *file_count);
void Display_file_detail(File file);
#endif