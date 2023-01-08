#include <stdio.h>
#include <string.h>
#include <stdint.h>


#define SIZE 10

void print_byte( uint8_t byte )
{
	static const char *nibble_lookup[16] = { [0x0] = "0000", [0x1] = "0001", [0x2] = "0010", [0x3] = "0011", [0x4] = "0100", [0x5] = "0101", [0x6] = "0110", [0x7] = "0111",
	                                         [0x8] = "1000", [0x9] = "1001", [0xA] = "1010", [0xB] = "1011", [0xC] = "1100", [0xD] = "1101", [0xE] = "1110", [0xF] = "1111" };
	printf( "%s %s", nibble_lookup[byte >> 4], nibble_lookup[byte & 0x0F] );
}


int main(){

    uint8_t a = 0;
    uint8_t b = 0;
    char str[SIZE];

    printf("\tGeef een geheel getal in\n");
    scanf("%hhu", &a);
    printf("\tGeef een geheel getal in\n");
    scanf("%hhu", &b);
    printf("\tWelke operatie wil je uitvoeren? (NOT, AND, OR OF XOR)\n");
    scanf(" %s", str);

    switch(str[0]){
        //NOT function 
        case 'n':
        case 'N':
        print_byte(a); 
        printf("\tis decimaal %hhu\n", a);
        print_byte(b); 
        printf("\tis decimaal %hhu\n", b);
        printf("---------\n");
        print_byte(~a); 
        printf("\tis decimaal %hhu\n", ~a);
        print_byte(~b);
        printf("\tis decimaal %hhu\n", ~b);


        break;

        // AND function 
        case 'a':
        case 'A':
        print_byte(a);
        printf("\tis decimaal %hhu\n", a);
        print_byte(b);
        printf("\tis decimaal %hhu\n", b);
        printf("---------\n");
        print_byte(a&b);
        printf("\tis decimaal %d\n", (a&b));
        break;

        // OR function 
        case 'o':
        case 'O':
        print_byte(a);
        printf("\tis decimaal %hhu\n", a);
        print_byte(b);
        printf("\tis decimaal %hhu\n", b);
        printf("---------\n");
        print_byte(a | b);
        printf("\tis decimaal %d\n", (a|b));
        break;


        // XOR function
        case 'x':
        case 'X':
         print_byte(a);
        printf("\tis decimaal %hhu\n", a);
        print_byte(b);
        printf("\tis decimaal %hhu\n", b);
        printf("---------\n");
        print_byte(a^b);
        printf("\tis decimaal %d\n", (a^b));
        break;
        

        default:
        printf("Er is iets misgegaan, try again!\n");
        break;
    }


return 0;
}
