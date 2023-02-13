#include <stdio.h>
#include <conio.h>

int StrLenght(char str[]) {
    int lenght = 0;
    while (str[lenght] != '\0') {
        lenght++;
    }
    return lenght;
}

void Exchange(char str[], char symb) {
    str[0] = symb;
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    str[i-1] = symb;
    return;
}

void DeleteSpace(char str[]) {
    int lenght = StrLenght(str);
    while (str[0] == ' ') {
        for (int i = 0; i < lenght-1; i++) {
            str[i] = str[i + 1];
        }
    }
    while (str[lenght-1] == ' ') {
        str[lenght-1] = str[lenght];
        lenght--;
    }
}

int main()
{
    char firststr[100]{};
    char symbol;
    printf("Enter your text: ");
    gets_s(firststr);
    printf("Enter symbol for exchange: ");
    symbol = _getch();
    printf("%c\n", symbol);
    Exchange(firststr, symbol);
    printf("%s\n", firststr);
    ////////////////////////////////////////////////////////////////////////////
    char secondstr[100]{};
    printf("Enter your text: ");
    gets_s(secondstr);
    DeleteSpace(secondstr);
    printf("%s\n", secondstr);
    return 0;
}