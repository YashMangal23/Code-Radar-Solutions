int main() {
    char str[100], reversed[100];
    int i, length;

    
    scanf("%s",&str);

    
    for (length = 0; str[length] != '\0'; length++);
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; 
    printf(reversed);
    return 0;
}