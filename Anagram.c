#include <stdio.h>
#include <string.h>

void sortWord(char *Word) {
    int len = strlen(Word);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (Word[j] > Word[j + 1]) {
                char temp = Word[j];
                Word[j] = Word[j + 1];
                Word[j + 1] = temp;
            }
        }
    }
}

int checkAnagram(char *firstWords, char *secondWords) {
    if (strlen(firstWords) != strlen(secondWords)) {
        return 0;
    }
    
    sortWord(firstWords);
    sortWord(secondWords);
    
    if (strncmp(firstWords, secondWords, strlen(firstWords)) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char firstWords[100], secondWords[100];

    scanf("%s", firstWords);
    scanf("%s", secondWords);
    
    int result = checkAnagram(firstWords, secondWords);
    printf("%d", result);
    
    return 0;
}
