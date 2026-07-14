#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>



#define NUM_CARDS 5
#define NUM_RANKS 13
#define NUM_SUITS 4

//external variables
int hand[5][2];
bool straight, flush, four, three;
int pairs;

//function prototypes
void read_cards(void);
bool duplicated_card(int rank, int suit, int hand[5][2], int card_reads);
void analyze_hand(void);
void print_result(void);

int main(void){
    for (;;){
        read_cards();
        analyze_hand();
        print_result();
    }
}

//read_cards
void read_cards(void){
    char ch, rank_ch, suit_ch;
    int i, j, rank, suit;
    bool bad_card;
    int card_reads = 0;
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 2; j++){
            hand[i][j] = 0;
        }
    }
    while(card_reads < NUM_CARDS){
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch){
            case '0':                exit(EXIT_SUCCESS);
            case '2':                rank = 0; break;
            case '3':                rank = 1; break;
            case '4':                rank = 2; break;
            case '5':                rank = 3; break;
            case '6':                rank = 4; break;
            case '7':                rank = 5; break;
            case '8':                rank = 6; break;
            case '9':                rank = 7; break;
            case 't': case 'T':      rank = 8; break;
            case 'j': case 'J':      rank = 9; break;   
            case 'q': case 'Q':      rank = 10; break;
            case 'k': case 'K':      rank = 11; break;
            case 'a': case 'A':      rank = 12; break;
            default:                 bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch){
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n'){
            if (ch != ' ') bad_card = true;
        }

        if(bad_card) printf("Bad card, ignored.\n");
        else if (duplicated_card(rank, suit, hand, card_reads)) printf("Duplicate card, ignored.\n");
        else {
            hand[card_reads][0] = rank;
            hand[card_reads][1] = suit;
            card_reads++;
        }
    }
}

//Check user input card is duplicated with the previous inputs
bool duplicated_card(int rank, int suit, int hand[5][2], int card_reads){
    int i;
    for(i = 0; i < card_reads; i++){
        if(hand[i][0] == rank && hand[i][1] == suit) return true;
    }
    return false;
}

//analyze_hand
void analyze_hand(void){
    int card, rank;
    int rank_counts[NUM_RANKS] = {0};

    straight  = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    //sort the cards
    int i, j, min, temp_suit, temp_rank;
    for(i = 0; i < NUM_CARDS; i++){
        min = i;
        
        for(j = i + 1; j < NUM_CARDS; j++){
            if(hand[j][0] < hand[min][0]) min = j;
        }

        temp_rank = hand[i][0];
        temp_suit = hand[i][1];
        hand[i][0] = hand[min][0];
        hand[i][1] = hand[min][1];
        hand[min][0] = temp_rank;
        hand[min][1] = temp_suit;
    }

    //check for flush
    for(card = 1; card < NUM_CARDS; card++){
        if(hand[card][1] != hand[0][1]) break;
        if(card == NUM_CARDS - 1) flush = true;
    }

    //check for straight
    for(card = 1; card < NUM_CARDS; card++){
        if(hand[card][0] - hand[card - 1][0] != 1) break;
        if(card ==NUM_CARDS - 1) straight = true;
    }

    //check for 4-of-a-knid, 3-of-a kind, and pairs
    for(card = 0; card < NUM_CARDS; card++){
        int r = hand[card][0];
        rank_counts[r]++;
    }

    for(rank = 0; rank < NUM_RANKS; rank++){
        if(rank_counts[rank] == 4) four = true;
        if(rank_counts[rank] == 3) three = true;
        if(rank_counts[rank] == 2) pairs++;
    }
}

//print result
void print_result(void){
    if (straight && flush)          printf("Straight flush");
    else if (four)                  printf("Four of a kind "); 
    else if (three && pairs == 1)   printf("Full house"); 
    else if (flush)                 printf("Flush"); 
    else if (straight)              printf("Straight"); 
    else if (three)                 printf("Three of a kind"); 
    else if (pairs == 2)            printf("Two pairs"); 
    else if (pairs == 1)            printf("Pair");
    else                            printf("High Card");

    printf("\n");
}
