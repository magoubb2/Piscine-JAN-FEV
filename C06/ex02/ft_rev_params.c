
#include <unistd.h>

// this function prints the command-line arguments in reverse orders excluding 
// the program itself.
// (i) is for iterating trought each command-line arguments.
//          -> In this case we want to start with   the   last    command-line
//             argument. So (i) is intialised to "argc - 1" because we want to
//             exclude the program itself.
// (j) is for iterating trougth character in each arguments.
//          -> (j) is given the value of '0' inside of  the first  while  loop
//             to initialise the counter for the current argument.
// The first while loop continue until (i) is no longer less  than  (argc)  so
// while (i) is less than (argc) we increment (i),
// The second loop write each character of the current  argument   until   the 
// NULL character is reach.
int main(int argc, char **argv)
{
    int i;
    int j;

    i = argc - 1;
    while (i >= 1)
    {
        j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i--;
    }
    return (0);
}