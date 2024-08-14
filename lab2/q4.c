#include <stdio.h>
#include <string.h>

struct pkt
{
    char ch1;
    char ch2[2];
    char ch3;
};
int main()
{
    int num;
    struct pkt p;
    printf("Enter a number (0-99999): ");
    scanf("%d", &num);
    p.ch1 = (num / 10000) % 10 + '0';
    p.ch2[0] = (num / 1000) % 10 + '0';
    p.ch2[1] = (num / 100) % 10 + '0';
    p.ch3 = (num / 10) % 10 + '0';
    int lastDigit = num % 10;
    printf("Content of structure members:\n");
    printf("ch1: %c\n", p.ch1);
    printf("ch2[0]: %c\n", p.ch2[0]);
    printf("ch2[1]: %c\n", p.ch2[1]);
    printf("ch3: %c\n", p.ch3);
    printf("Last digit (outside structure): %d\n", lastDigit);
    int aggregatedNumber = (p.ch1 - '0') * 10000 + (p.ch2[0] - '0') * 1000 +
                           (p.ch2[1] - '0') * 100 + (p.ch3 - '0') * 10 + lastDigit;
    printf("Aggregated number: %d\n", aggregatedNumber);
    return 0;
}
