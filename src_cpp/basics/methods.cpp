#include <iostream>

// Returns the number of characters in a string (excluding the null terminator).
size_t my_strlen(const char* str) {
    size_t len = 0;
    int index = 0;
    while (str[len] != '\0') len++;
    return len;
}

// Copies all characters from src to dest, including the null terminator.
char* my_strcpy(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// A concise version of strcpy using pointer arithmetic and assignment evaluation.
void my_strcpy2(char *dest, const char *src) {
    while ((*dest++ = *src++)); 
}

// Compares two strings character by character; returns 0 if equal, or the difference of the first mismatch.
int my_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    return s1[i] - s2[i];
}

// Appends the src string to the end of the dest string, overwriting the original null terminator.
char *my_strcat(char *dest, const char *src) {
    int dest_len = my_strlen(dest);
    my_strcpy(dest + dest_len, src);
    return dest;
}

// Reverses the characters in a string in-place.
void my_strrev(char* str) {
    if (!str || !*str) return;

    char *start = str;
    char *end = str + strlen(str) - 1; // Point to the last character before '\0'

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}