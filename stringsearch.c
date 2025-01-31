#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Search(char *text,char *pattern)
{
    int n = strlen(text);
    int m = strlen(pattern);
    int k,i;
    printf("\n%s",text);
    for(i=0; i<=n-m; i++)
    {
        int j=0;
        while(j <m && text[j+j]== pattern[j])
        {
            j++;
        }
        printf("\n");
        for(k=0;k<i;k++)
            printf(" ");
        printf("%s",pattern);

        if(j==m)
            return i;
    }
    return -1;
}

int main()
{
    char *text = (char*)malloc(100*sizeof(char));
    char *pattern = (char*)malloc(100*sizeof(char));

    printf("Enter the text : ");
    scanf("%[^\n]", text);

    char ch;
    scanf("%c", text);

    printf("Enter the pattern to be searched : ")
    scanf("%[^\n]",pattern);

    int result = Search(text,pattern);

    if(result == -1)
        printf("\nThe pattern [%s] is not found!",pattern);
    else
        printf("\nThe pattern [%s] is found at index %d",pattern,result);
    
    return 0;


}
