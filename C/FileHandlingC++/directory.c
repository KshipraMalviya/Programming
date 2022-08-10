/*
 * This program displays the names of all files in the current directory.
 */

#include <dirent.h>
#include <stdio.h>

int main(void)
{
    DIR *d;
    struct dirent *dir;
    d = opendir("C:\\Users\\DELL\\Desktop\\Programming\\C\\TXTfiles");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    

    return (0);
}