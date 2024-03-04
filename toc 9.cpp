#include <stdio.h>
#include <string.h>
int main () {
    char String [100];
    printf ("Enter a string: ");
    scanf ("%s", String);
    if (String [0] =='0'&&String [strlen (String)-1] =='1')
	{
        int i;
        for (i==0; i<strlen (String); i++) {
            if (String[i]<'0'||String[i]>'1')
			{
                printf ("Invalid! \n");
                return 0;
            }
        }
        printf ("Valid\n");
    } else {
        printf ("Invalid\n");
    }
    return 0;
}

