#include <cs50.h> 
#include <stdio.h> 
#include <ctype.h> 
#include <string.h> 

int main(int argc, string argv[]) 
{ 
if (argc != 2) 
{ 
printf("Try again."); 
return 1; 
} 
//зчитування рядка тексту
string key = argv[1]; 
unsigned long keyCount = strlen(key); 
for(int line_item = 0; line_item < keyCount; line_item++)
{ 
//перевірка чи символ є буквою
if (!isalpha(key[line_item]))
{ 
printf("Try again."); 
return 1; 
} 
} 

string text = GetString(); 
if(text == NULL) 
{ 
printf("Try again."); 
return 1; 
} 
//шифрування
for (int i = 0, n = 0; i < strlen(text); i++) 
{ 
if (isalpha(text[i])) 
{ 
//для великих літер
if (isupper(text[i])) 
char high_letter = ((((text[i] - 'A') + ((toupper(key[n++%keyCount])) - 'A') % 26) % 26) + 'A');
printf("%c", high_letter);
//для малих літер
if (islower(text[i]))
char small_letter = ((((text[i] - 'a') + ((tolower(key[n++%keyCount])) - 'a') % 26) % 26) + 'a');
printf("%c", small_letter);
} else 
//для знаків
printf("%c", text[i]); 
} 
printf("\n"); 
return 0; 
}