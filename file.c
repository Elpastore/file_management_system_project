#include "main.h"
#include <time.h>
/**
 * save_file - function that save info
 * @file: array of structure
 * @file_count: number of file
 * @file_name: the name of file
*/
void save_file(File file[], int file_count, const char *filename)
{
    FILE *fd = fopen(filename, "w");
    int i;
    if (fd == NULL || fd < 0)
    {
        printf("Operation failed\n");
        return;
    }

    for (i = 0; i < file_count; i++)
    {
        fprintf(fd, "%s\n%s\n%d\n%s", file[i].name, file[i].content, file[i].size,ctime(&file[i].date));
    }
    fclose(fd);
    printf("Data saved to file successfully.\n");
}
/**
 * load_file - function that load info of file
 * @file: array of structure
 * @file_count: number of file
 * @file_name: the name of file
*/
void load_file(File file[], int *file_count, const char *filename)
{
    FILE *fp = fopen(filename, "r");
    int i;

    while (fscanf(fp, "%49s %[^\n], %d %s", file[*file_count].name, file[*file_count].content, &file[*file_count].size, file[*file_count].date_str) == 4)
    {
        /* Convert date string to time_t */
        struct tm tm;
        strptime(file[*file_count].date_str, "%a %b %d %H:%M:%S %Y", &tm);
        file[*file_count].date = mktime(&tm);

        (*file_count)++;
    }
    fclose(fp);
    printf("Data loaded from file successfully.\n");
}
