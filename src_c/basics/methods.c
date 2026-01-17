// Returns the number of characters in a string (excluding the null terminator).
int my_strlen(const char *s) {
    int i = 0;
    while (s[i]) i++;
    return i;
}

// Copies all characters from src to dest, including the null terminator.
void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
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

// Converts a string to an integer, skipping whitespace and handling signs.
int my_atoi(const char *str) {
    int i = 0;
    int result = 0;
    int sign = 1;

    while (str[i] == ' ')
        i++;

    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++; // Move past the sign to the first digit
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = (result * 10) + (str[i] - '0');
        i++;
    }

    return result * sign;
}

// reverse a string in-place (no extra buffer needed)
void reverse_string(char *str) {
    int start = 0;
    int end = my_strlen(str) - 1;
    char temp; // Just a single character

    while (start < end) {
        temp = str[start]; 
        str[start] = str[end];
        str[end] = temp;    

        start++;
        end--;
    }
}