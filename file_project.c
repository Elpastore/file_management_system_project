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
    new_file.size = strlen(new_file.content);
    new_file.date = time(NULL);
    file[*file_count] = new_file;
    (*file_count)++;
    printf("File created successfully!\n");
    
}
/**
 * Display_file_detail - function that display the file details
 * @file: structure that contain the file details
*/
void Display_file_detail(File *file)
{
    printf("the file name is: %s\n", file->name);
    printf("the contain of the file is %s\n", file->content);
    printf("the size of the file is: %d\n", file->size);
    printf("Date Created: %s", ctime(&file->date));
}
/**
 * print_list - function that print the list of the file
 * @file: the structure where name's file are stored
 * @file_count: the number of file
*/
void print_list(File file[], int file_count)
{
    int i, choice;
    if (file_count == 0)
    {
        printf("\tThere isn't any files in your system.\n");
        return;
    }
    for (i = 0; i < file_count; i++)
    {
        printf("%d. %s\n", i + 1, file[i].name);
    }
    printf("Enter the file number to view the details\n");
    scanf("%d", &choice);
    if (choice > 0 && choice <= file_count)
        Display_file_detail(&file[choice - 1]);
}