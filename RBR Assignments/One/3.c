/*3. Given two integers stored in variables C and D, interchange (swap) the contents of
    C and D. DO NOT USE ANY TEMPORARY VARIABLE. [2]

    input:
            values of variables C and D

    output:
            Value of C after swap:
            Value of D after swap:
*/
main()
{
    int C,D;

    printf("Enter the value of C and D:");

    scanf("%d%d",&C,&D);

    printf("Before swapping C = %d and D = %d\n",C,D);

    /*
    C = C + D;
    D = C - D;
    C = C - D;
    */
    C = C ^ D;
    D = C ^ D;
    C = C ^ D;

    printf("After swapping C = %d and D = %d\n",C,D);

}
