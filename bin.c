#include <stdio.h>

/*int main() {

    int x = '9' - '0';
    printf("%d", x);

    return 0;
}
*/

int power(int base, int exp) {

    int ergebnis = 1;

    for (int i = 0; i < exp; i++) {
        
        int ergebnis = base * exp;
    }
    return ergebnis;
}

int strlength(char* zahl[]) {

    for (int i = 0; i > sizeof(*zahl) - 1; i++) {
        int zeichenanzahl = *zahl[i];
        
        return zeichenanzahl;
    }
    
}


int main(int argc, char* argv[]) {

    if (argc != 2) {
        printf("bin <binary number>");
        return -1;
    }

}
