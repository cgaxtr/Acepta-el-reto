#include <iostream>
#include <cctype>
#include <string>

int main() {

    std::ios::sync_with_stdio(false);
	std::cin.tie(false);

    char prefix;
    int counter = 0;
    int offset;
    std::string textCoded;
    unsigned char aux;

    do {
        std::getline(std::cin, textCoded);
        offset = 'p' - textCoded[0];

        for (auto i = 0; i < textCoded.size(); i++) {
            aux = tolower(textCoded[i]);

            if (isalpha(aux)) {
                aux = aux + offset;

                if (aux < 97) {
                    aux = 123 - (97 - aux);
                }
                else if (aux > 122) {
                    aux = 97 + (aux % 123);
                }
            }

            if (aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u')
                 counter++;

            if (isupper(textCoded[i]))
                aux = toupper(aux);

            textCoded[i] = aux;
        }

        if (textCoded != "pFIN")
            std::cout << counter << std::endl;

        counter = 0;

    } while (textCoded != "pFIN");

    return 0;
}