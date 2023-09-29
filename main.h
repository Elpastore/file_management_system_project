#ifndef _main_h
#define _main_h

#define MAX_FILES 100

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct files
{
    char name[50]; // name of the file (without path)
    char content[500];
    int size;
    char date_str[30]; // Assuming a reasonable size for the date string
    time_t date;    
} File;

void create_file(File file[], int *file_count);
void Display_file_detail(File *file);
void print_list(File file[], int file_count);
void update_file(File file[], int *file_count);
void menu(void);
void save_file(File file[], int file_count, const char *filename);
void load_file(File file[], int *file_count, const char *filename);
void list_all_files(File file[], int file_count);

#endif