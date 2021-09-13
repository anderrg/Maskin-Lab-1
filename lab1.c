#include <stdio.h>
#include <string.h>
#include <stdbool.h>



char cleanup_string(char input_string[]){
    int i = 0;
    char fixed_string[] = input_string;
    for (i; i <= strlen(input_string); i++) {
         if (input_string[i] > 90) {
                fixed_string[i] = input_string[i]-32;
            }
    }
    return fixed_string;
}



bool check_palindrome(char input_string[]) {
    int start = 0;
    int end = strlen(input_string) -1;
    while (end >= 1){
        if (input_string[start++] != input_string[end--]) {
            return false;
        }
    }
    return true;
}
    







int main(){
  
   printf(cleanup_string("aAAAAA"));

/*
  for(int i = 0; i < 1; i++){
    if (check_palindrome("AnddnA")) {
        printf("Palindrom");
    }
    else {
        printf("IKKE Palindrom");
    }
}
   */
    
    

    return 0;
};