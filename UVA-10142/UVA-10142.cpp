#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#define MAX_CANDIDATE 25
#define MAX_BALLOT 1005

using namespace std;

// Define each candidate info
typedef struct candidate {
    string name;
    int ballots;
    bool isEliminate;
} Candidate;

// Store each candidate's ballots
typedef struct ballot {
    ballot() {
        vote.clear();
    }
    vector< int > vote;
} Ballot;

int main(void) {
    int T, N;

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {
            Candidate cand[MAX_CANDIDATE];
            Ballot ball[MAX_BALLOT];
            int totalBallots = 0;

            // Get the number of candidate and pass the next line character
            scanf("%d", &N);
            getchar();

            for (int i = 1; i <= N; ++i) {
                getline(cin, cand[i].name);
                cand[i].ballots = 0;
                cand[i].isEliminate = false;
            }

            string votes;
            int vote;
            while (getline(cin, votes) && votes != "") {
                // Use string stream to split the votes into each candidates
                stringstream ss(votes);
                for (int i = 0; i < N; ++i) {
                    ss >> vote;
                    ball[totalBallots].vote.push_back(vote);
                }
                ++totalBallots;
            }

            int maxBallots, minBallots;
            while (true) {
                // Define the maximum and minimum votes
                maxBallots = 0;
                minBallots = MAX_BALLOT;

                // Count for all ballot for each candidates
                for (int i = 0; i < totalBallots; ++i) {
                    cand[ball[i].vote[0]].ballots++;
                }

                for (int i = 1; i <= N; ++i) {
                    // Get the current maximum and minimum ballots
                    if (!cand[i].isEliminate) {
                        maxBallots = max(maxBallots, cand[i].ballots);
                        minBallots = min(minBallots, cand[i].ballots);
                    }
                }

                // Break if the maximum ballots is over 50%
                if (maxBallots > totalBallots / 2)
                    break;

                // Break if all candidate's ballots are same
                if (maxBallots == minBallots)
                    break;
                
                for (int i = 1; i <= N; ++i) {
                    // Eliminate the lowest candidate
                    if (cand[i].ballots == minBallots) {
                        for (int j = 0; j < totalBallots; ++j) {
                            for (int k = 0; k < ball[j].vote.size(); ++k) {
                                if (ball[j].vote[k] == i) {
                                    ball[j].vote.erase(ball[j].vote.begin() + k);
                                    break;
                                }
                            }
                        }
                        cand[i].isEliminate = true;
                    }

                    // For re-count the ballots in next rank
                    cand[i].ballots = 0;
                }
            }

            // Print the next line character for each cases
            if (t > 0)
                printf("\n");
            
            // Print the elected candidate's name
            for (int i = 1; i <= N; ++i) {
                if (cand[i].ballots == maxBallots) 
                    printf("%s\n", cand[i].name.c_str());
            }
        }
    }

    return 0;
}