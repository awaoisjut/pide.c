#include <unistd.h>
#include <stdio.h>
int main()
{
printf("parent procss id = %d\nchild process id = %d\n", getppid(),getpid());
return 0;
}
