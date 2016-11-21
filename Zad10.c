#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int i;
	char zdanie[1024];

	fgets(zdanie, 1024, stdin);

	for (i = 0; i < strlen(zdanie); i++) {
		if (zdanie[i] == 'k'&&zdanie[i + 1] == 'o'&&zdanie[i + 2] == 't'&&zdanie[i + 3] == 'e'&&zdanie[i + 4] == 'k') {
			printf("piesek");
			i += 4;
		}
		else printf("%c", zdanie[i]);
	}
	system("PAUSE");
	return 0;
}
