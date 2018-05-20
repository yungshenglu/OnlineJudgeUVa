#include <cstdio>
#include <cstring>
#include <iostream>

#define MAX 205

using namespace std;

typedef struct octave {
    char note;
    char finger[11];
} Octave;

int main(void) {
    int T;
    char notes[MAX];

    // Define the finger for each note
    Octave octaves[15] = {
        { 'X', "0000000000" },
        { 'c', "0111001111" }, 
        { 'd', "0111001110" },
        { 'e', "0111001100" },
        { 'f', "0111001000" },
        { 'g', "0111000000" },
        { 'a', "0110000000" },
        { 'b', "0100000000" },
        { 'C', "0010000000" },
        { 'D', "1111001110" },
        { 'E', "1111001100" },
        { 'F', "1111001000" },
        { 'G', "1111000000" },
        { 'A', "1110000000" },
        { 'B', "1100000000" }
    };

    while (scanf("%d", &T) != EOF) {
        cin.ignore();
        for (int t = 0; t < T; ++t) {
            cin.getline(notes, MAX);

            // Count the times each finger press the button
            int count[10] = { 0 }, curr = 0;
            for (int i = 0; i < strlen(notes); ++i) {
                // Find out the matched note in octaves
                int next = 1;
                while (octaves[next].note != notes[i])
                    ++next;
                
                for (int j = 0; j < 10; ++j) {
                    // Only count when the finger change from 0 to 1 
                    if (octaves[curr].finger[j] == '0' && octaves[next].finger[j] == '1')
                        ++count[j];
                }

                curr = next;
            }

            // Print the result
            printf("%d", count[0]);
            for (int i = 1; i < 10; ++i)
                printf(" %d", count[i]);
            printf("\n");
        }
    }

    return 0;
} 