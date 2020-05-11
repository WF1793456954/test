#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    char sz_filename[] = "README1.md";
    int fd = -1;
    fd = open(sz_filename,O_WRONLY);
    if (fd<0)
    {
        perror("open failed");
        return -1;
    }
    printf("open success\n");
    return 0;
}