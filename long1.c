#include <stdio.h>
#include <string.h>

void printSubstring(char str[], int left, int right) {
    for (int i = left; i <= right; i++)
        printf("%c", str[i]);
}
void longestPalSubstring(char str[]) {
    int n = strlen(str);
    int maxLength = 1;
    int start = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int flag = 1;
            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] != str[j - k])
                    flag = 0;

            if (flag && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
        printSubstring(str, start, start + maxLength - 1);
}

int main() {
    char str[20];
    scanf("%s",str);
    longestPalSubstring(str);
}