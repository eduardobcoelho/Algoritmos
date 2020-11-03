#include <stdio.h>
#include <string.h>

int main (int argc, char **argv) {
	char palavra[30], palavraCopia[30], intermediador[2];
	scanf("%[^\n]", palavra);
	int tamanhoPalavra = strlen(palavra), check;
	for (int i = 0; i < tamanhoPalavra; i++) {
		palavraCopia[i] = palavra[i];
	}
	if (tamanhoPalavra % 2 == 0) {
		for (int i = 0; i < tamanhoPalavra / 2; i++) {
			intermediador[0] = palavra[(tamanhoPalavra - 1) - i];
			palavra[(tamanhoPalavra - 1) - i] = palavra[i];
			palavra[i] = intermediador[0];
		}
	} else {
		for (int i = 0; i < (tamanhoPalavra / 2) + 1; i++) {
			if (i != (tamanhoPalavra / 2 + 1)) {
				intermediador[0] = palavra[(tamanhoPalavra - 1) - i];
				palavra[(tamanhoPalavra - 1) - i] = palavra[i];
				palavra[i] = intermediador[0];
			} else { }
		}
	}
	for (int i = 0; i < tamanhoPalavra; i++) {
		if (palavra[i] != palavraCopia[i]) {
			printf("%s não é um palíndromo: %s\n", palavraCopia, palavra);
			break;
		} else {}
		if (i == tamanhoPalavra - 1) {
			printf("%s é um palíndromo: %s\n", palavraCopia, palavra);
			break;
		}
	}
	return 0;
}
