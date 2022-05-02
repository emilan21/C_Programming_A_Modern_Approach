/* Classifies a poker hand */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//#define NUM_RANKS 13
//#define NUM_SUITS 4
#define NUM_CARDS 5
#define NUM_HAND_SIZE 2

/* external variables */
//int num_in_rank[NUM_RANKS];
//int num_in_suit[NUM_SUITS];
bool straight, flush, four, three;
int pairs;  /* can be 0, 1, or 2 */
char hand[NUM_CARDS][NUM_HAND_SIZE];

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/*********************************************************
* main: Calls read_cards, analyze_hand, and print_result *
*       repeatedly.                                      *
**********************************************************/
int main(void)
{
    for (;;) {
        read_cards();
        analyze_hand();
        print_result();
    }
}

/*********************************************************
* read_cards: Reads the cards into the external          *
*             variables num_in_rank and num_in_suits;    *
*             checks for bad cards and duplicate cards   *
**********************************************************/
void read_cards(void)
{
    //bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    int cards, hand_size;
    bool bad_card;
    int cards_read = 0;

    for (cards = 0; cards < NUM_CARDS; cards++) {
        //num_in_rank[rank] = 0;
        for (hand_size = 0; hand_size < NUM_HAND_SIZE; hand_size++) {
            //card_exists[rank][suit] = false;
            hand[cards][hand_size] = '0';
        }
    }

    //for (suit = 0; suit < NUM_SUITS; suit++) {
    //    num_in_suit[suit] = 0;
    //}

    while (cards_read < NUM_CARDS) {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':               exit(EXIT_SUCCESS);
            case '2':               hand[cards_read][0] = rank_ch; break;
            case '3':               hand[cards_read][0] = rank_ch; break;
            case '4':               hand[cards_read][0] = rank_ch; break;
            case '5':               hand[cards_read][0] = rank_ch; break;
            case '6':               hand[cards_read][0] = rank_ch; break;
            case '7':               hand[cards_read][0] = rank_ch; break;
            case '8':               hand[cards_read][0] = rank_ch; break;
            case '9':               hand[cards_read][0] = rank_ch; break;
            case 't': case 'T':     hand[cards_read][0] = rank_ch; break;
            case 'j': case 'J':     hand[cards_read][0] = rank_ch; break;
            case 'q': case 'Q':     hand[cards_read][0] = rank_ch; break;
            case 'k': case 'K':     hand[cards_read][0] = rank_ch; break;
            case 'a': case 'A':     hand[cards_read][0] = rank_ch; break;
            default:                bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C':     hand[cards_read][1] = suit_ch; break;
            case 'd': case 'D':     hand[cards_read][1] = suit_ch; break;
            case 'h': case 'H':     hand[cards_read][1] = suit_ch; break;
            case 's': case 'S':     hand[cards_read][1] = suit_ch; break;
            default:                bad_card = true;
        }

        while ((ch = getchar()) != '\n') {
            if (ch != ' ') {
                bad_card = true;
            }
        }

        if (bad_card) {
            printf("Bad card; ignored.\n");
        }
        //else if ((hand[cards_read][0] != '0') && (hand[cards_read][1] != '0')) {
        //    printf("Duplicate card; ignored.\n");
        //}
        else {
            //num_in_rank[rank]++;
            //num_in_suit[suit]++;
            //card_exists[rank][suit] = true;
            cards_read++;
        }
    }
}

/*********************************************************
* analyze_hand: Determines whether the hand contains a   *
*             straight, a flush, four-of-a-kind,         *
*             and/or three-of-a-kind; determines the     *
*             number of pairs; stores the results into   *
*             the external variables straight, flush,    *
*             four, three, and pairs.                    *
**********************************************************/
void analyze_hand(void)
{
    int num_consec = 0;
    int rank, suit;
    int cards, hand_size;
    char current_suit;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    /* check for flush */
    current_suit = hand[0][1];
    for (cards = 0; cards < NUM_CARDS; cards++) {
        if (hand[cards][1] == current_suit) {
            flush = true;
        }
    }

    /* check for straight */
    rank = hand[cards][0];
    for (cards = 0; cards < NUM_CARDS; cards++) {
        if (hand[cards][0] >= rank) {
            num_consec++;
        }
    }

    //rank = 0;
    //while (num_in_rank[rank] == 0) {
    //    rank++;
    //}
    //for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++) {
    //    num_consec++;
    //}
    if (num_consec == NUM_CARDS) {
        straight = true;
        return;
    }

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    //for (rank = 0; rank < NUM_RANKS; rank++) {
    //    if (num_in_rank[rank] == 4) {
    //        four = true;
    //    }
    //    if (num_in_rank[rank] == 3) {
    //        three = true;
    //    }
    //    if (num_in_rank[rank] == 2) {
    //        pairs++;
    //    }
    //}
}

/*********************************************************
* print_result: Prints the classification of the hand.   *
*             based on the values of the external        *
*             variables straight, flush, four, three,    *
*             and pairs                                  *
**********************************************************/
void print_result(void)
{
    if (straight && flush) {
        printf("Straight flush");
    }
    else if (four) {
        printf("Four of a kind");
    }
    else if (three && pairs == 1) {
        printf("Full house");
    }
    else if (flush) {
        printf("Flush");
    }
    else if (straight) {
        printf("Straight");
    }
    else if (three) {
        printf("Three of a kind");
    }
    else if (pairs == 2) {
        printf("Two pairs");
    }
    else if (pairs == 1) {
        printf("Pair");
    }
    else {
        printf("High card");
    }

    printf("\n\n");
}
