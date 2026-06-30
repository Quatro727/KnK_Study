#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int counts[26], int counts2[26]);

int main(void){
    int alpha1[26] ={0}, alpha2[26] = {0};
    bool result = false;
   
    //read first input words by user
    printf("Enter first words: ");
    read_word(alpha1);
    
    //read second input by user
    printf("Enter second words: ");
    read_word(alpha2);
    
    //check whether anagram or not
    result = equal_array(alpha1, alpha2);
    
    if(result == true) printf("These two words are anagrams!\n");
    else printf("These two words aren't anagrams...\n");

    return 0;
}

void read_word(int counts[26]){
    int i = 0;
    char words[26];

    while((words[i] = getchar()) != '\n') i++;
    words[i] = '\0';

    for(i = 0; words[i] != '\0'; i++){
        if(!isalpha(words[i])) continue;
        if(words[i] >= 'A' && words[i] <= 'Z') words[i] = tolower(words[i]);
        if(isalpha(words[i])) counts[words[i] - 'a'] += 1;
    }
}

bool equal_array(int counts[26], int counts2[26]){
    int i;

    for(i = 0; i < 26; i++){
        if(counts[i] != counts2[i]) return false;
    }
    return true;
}
        
