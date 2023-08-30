int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    unsigned char str1;
    unsigned char str2;
    while(s1[i] || s2[i])
    {
        str1 = s1[i];
        str2 = s2[i];
        
        if(str1 != str2)
            return(str1-str2);
        i++;
    }
    return(0);
}