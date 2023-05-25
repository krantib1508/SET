// Flawfinder
#include <stdio.h>
#include <string.h>
  

int main()
{
    char temp[100];
    char str[] = "hello";
   // strcpy(temp, str);

snprintf(temp, sizeof(temp), "%s", str); // Used --> snprintf (buffer,
//buffer_size, format, source)

    printf("%s", temp);
    return 0;
}