#include "main.h"
/**
 * main -the entry point of the program
*/
int main(void)
{
    File file[MAX_FILES]; /*Array of structure*/
    int file_count = 0;
    int choice;
    char file_name[] = "Data_info.txt";

    
    do
    {
        menu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
             create_file(file, &file_count);
            break;
        case 2:
            print_list(file, file_count);
            break;
        case 3:
            update_file(file, &file_count);
            break;
        case 4:
            save_file(file, file_count, file_name);
            break;
        case 5:
            list_all_files(file, file_count);
        case 6:
            load_file(file, &file_count, file_name);
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 7);
    
    return (0);
}