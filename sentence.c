#include<stdio.h>
void main()
{
    char ch;
    char word[30];
    char sentence[100];
 printf("Character : ");
    scanf("%c",&ch);
     printf("\"Enter a word : ");
     scanf("%s",word);

     printf("Enter a Sentence : ");
	fgets(sentence, sizeof(sentence), stdin); 

    scanf ("%[^\n]", sentence);

     printf("Character is: %c\n",ch);
      printf("word is : %s\n",word);
    printf("you entered: %s",sentence);


}
