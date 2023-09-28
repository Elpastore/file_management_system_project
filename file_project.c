#include "main.h"
/**
 * create_file - function that create and add content into file
*/
void create_file(File file[], int *file_count)
{
    File new_file;
    printf("Enter the  name of the file: ");
    scanf("%s", &new_file.name);
    printf("Enter the content of the file: ");
    scanf(" %[^\n]", &new_file.content);
    file->size = strlen(new_file.content);
    file->date = time(NULL);
    file[*file_count] = new_file;
    (*file_count)++;
    
}
/**
 * Display_file_detail - function that display the file details
 * @file: structure that contain the file details
*/
void Display_file_detail(File file)
{
    printf("the file name is: %s\n", file.name);
    printf("the contain of the file is %s\n", file.content);
    printf("the size of the file is: %d\n", file.size);
     printf("Date Created: %s", ctime(&file.date));
}