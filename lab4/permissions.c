#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
    struct stat st;
    mode_t mode;
    const char *path = "/home/andy/CLionProjects/sysoft/lab4/somefile";

    stat(path, &st);

    mode = st.st_mode & 0777;

    mode &= ~(S_IRUSR);
    mode |= S_IXUSR;




    return(0);
}