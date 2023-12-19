
#include <unistd.h>

// This function prints each command-line arguments excluding the programm
// itself. 
// (i) is for iterating trougth each command-line arguments.
//          -> so (i) is given the value of '1' because we want to exclude 
//             the programm itself.
// (j) is for iterating trougth character in each arguments.
//          -> (j) is given the value of '0' inside of the first while loop
//             to initialise the counter for the current argument.
// The first while loop continue until (i) is no longer more than or  equal
// to (1) so while (i) is more than (1) we decrement (i).
// The second loop write each character of the current argument  until  the 
// NULL character is reach.
int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return (0);
}