/* printf("Hello,World!");

error:
||=== Build file: "no target" in "no project" (compiler: unknown) ===|
C:\Users\Nikhil\OneDrive\Documents\C prog\Dennis M Ritchie Book\exp_01.c|1|error: expected declaration specifiers or '...' before string constant|
||=== Build failed: 1 error(s), 0 warning(s) (0 minute(s), 0 second(s)) ===|

*/

/*
void main()
{
    printf("Hello,World!");
}
output will produce with warning

but,
warning:
||=== Build file: "no target" in "no project" (compiler: unknown) ===|
C:\Users\Nikhil\OneDrive\Documents\C prog\Dennis M Ritchie Book\exp_01.c||In function 'main':|
C:\Users\Nikhil\OneDrive\Documents\C prog\Dennis M Ritchie Book\exp_01.c|12|warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]|
C:\Users\Nikhil\OneDrive\Documents\C prog\Dennis M Ritchie Book\exp_01.c|12|warning: incompatible implicit declaration of built-in function 'printf'|
C:\Users\Nikhil\OneDrive\Documents\C prog\Dennis M Ritchie Book\exp_01.c|12|note: include '<stdio.h>' or provide a declaration of 'printf'|
||=== Build finished: 0 error(s), 2 warning(s) (0 minute(s), 0 second(s)) ===|

*/

#include<stdio.h>
void main()
{
    printf("Hello,World!");
}

// output will produce
