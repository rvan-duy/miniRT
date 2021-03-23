#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void    mrt_bmp_open()
{
    int file = open("pic.txt", O_RDWR | O_CREAT, 0666);
    if (file)
        printf("yes\n");
    else
        printf("no\n");
    write(file, "Hi\n", 3);
    close(file);
}

int main()
{
    mrt_bmp_open();
    return 0;
}