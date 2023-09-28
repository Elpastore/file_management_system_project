#ifndef _main_h
#define _main_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct files
{
    char name[50]; // name of the file (without path)
    char content[500];
    int size;
    time_t date;    
} File;

void create_file(File file[], int *file_count);
void Display_file_detail(File *file);
void print_list(File file[], int file_count);
#endif