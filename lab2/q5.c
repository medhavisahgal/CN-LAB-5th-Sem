#include <stdio.h>

void printBytes(unsigned int num)
{
    unsigned char *bytePtr = (unsigned char *)&num;
    for (unsigned int i = 0; i < sizeof(num); i++)
    {
        printf("Byte %d: 0x%02x\n", i, bytePtr[i]);
    }
}
unsigned int convertEndianness(unsigned int num)
{
    unsigned int byte0, byte1, byte2, byte3;
    byte0 = (num & 0x000000FF) << 24;
    byte1 = (num & 0x0000FF00) << 8;
    byte2 = (num & 0x00FF0000) >> 8;
    byte3 = (num & 0xFF000000) >> 24;
    return (byte0 | byte1 | byte2 | byte3);
}
int main()
{
    unsigned int num = 1;
    unsigned char *bytePtr = (unsigned char *)&num;

    if (bytePtr[0] == 1)
    {
        printf("The machine is Little Endian.\n");
    }
    else
    {
        printf("The machine is Big Endian.\n");
    }
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Content of each byte location:\n");
    printBytes(num);
    unsigned int convertedNum = convertEndianness(num);
    printf("Converted Endianness (Little to Big or Big to Little):\n");
    printBytes(convertedNum);
    return 0;
}
