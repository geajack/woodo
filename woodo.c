#include <stdio.h>
#include <unistd.h>

void main()
{
    unsigned int user_id = geteuid();
    if (user_id > 0)
    {
        printf("%s\n", "A strange tree is blocking the road.");
    }
    else
    {
        printf("%s\n", "The weird tree doesn't like the SQUIRTBOTTLE!");
        printf("%s\n", "The weird tree attacked!");
        printf("%s\n", "Wild SUDOWOODO appeared!");
    }
}