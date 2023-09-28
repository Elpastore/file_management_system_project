#include "main.h"
/**
 * main -the entry point of the program
*/
int main(void)
{
    File file[100];
    int file_count = 0;
    int choice;

    printf("\nFile Management System\n");
    printf("1. Create a new file\n");
    printf("2. Read a file\n");
    printf("3. Update a file\n");
    printf("4. Delete a file\n");
    printf("5. List all files\n");
    printf("6. Exit\n");
    printf("Choose an option: ");
    scanf("%d", choice);
    do
    {
        switch (choice)
        {
        case 1:
             create_file(file, &file_count);
            break;
        case 2:
            Display_file_detail(file[0]);
        default:
            break;
        }
    } while (choice != 6);
    
    return (0);
}