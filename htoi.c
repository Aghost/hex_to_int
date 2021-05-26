#include <stdio.h>
//#include <string.h>

int n_atoi(char c) {
	return (int)c;
}

int n_strlen(char *str) {
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}

	return i;
}

long int n_htoi(char *str, char *lut, int base){
	int factor = 1;
	int result = 0;
	for(int i = n_strlen(str); i > 0; --i) {
		result += factor * lut[str[i - 1]];
		factor *= base;
	}
	return result;
}

long int hex_to_int(char* hex) {
    char mapped [128] = { };
	mapped['1'] = 1;
	mapped['2'] = 2;
	mapped['3'] = 3;
	mapped['4'] = 4;
	mapped['5'] = 5;
	mapped['6'] = 6;
	mapped['7'] = 7;
	mapped['8'] = 8;
	mapped['9'] = 9;
	mapped['A'] = 10;
	mapped['a'] = 10;
	mapped['B'] = 11;
	mapped['b'] = 11;
	mapped['C'] = 12;
	mapped['c'] = 12;
	mapped['D'] = 13;
	mapped['d'] = 13;
	mapped['E'] = 14;
	mapped['e'] = 14;
	mapped['F'] = 15;
	mapped['f'] = 15;

    return n_htoi(hex, mapped, 16);
}

int main() {
	char hex1[] = "8b248FC";
	char hex2[] = "0000000";
	char hex3[] = "fffffff";

    printf("%d\n", hex_to_int(hex1));
    printf("%d\n", hex_to_int(hex2));
    printf("%d\n", hex_to_int(hex3));
}
