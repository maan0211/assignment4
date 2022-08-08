#include <stdio.h>

int main(){
char ch;
scanf("%c",&ch);
switch(ch){
    case 'a': printf("\n");
              break;
    case 'e': printf("vowel\n");
              break;
    case 'i': printf("vowel\n");
              break;
    case 'o': printf("vowel\n");
              break;
    case 'u': printf("vowel\n");
              break;
    case 'A': printf("vowel");
              break;
    case 'E': printf("vowel");
              break;
    case 'I': printf("vowel");
              break;
    case 'O': printf("vowel");
              break;
    case 'U': printf("vowel");
              break;
    default : printf("not vowel");
}
return 0;
}