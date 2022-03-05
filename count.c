int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }

        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "adesh777777";
    int count = occurence(st, '7');
    printf("occurence=%d", count);
    return 0;
}