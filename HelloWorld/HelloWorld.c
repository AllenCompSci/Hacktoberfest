#include <stdio.h>
#include <stdlib.h>

void add_entry(char *, char *);
void populate_census();

struct census_entry {
   char * fullName;
   char * githubUsername;
   struct census_entry * next;
};

typedef struct census_entry CensusEntry_t;

static CensusEntry_t * head = NULL;
static CensusEntry_t * tail = NULL;

void populate_census() {
   /*
    * ADD YOURSELF HERE!
    *
    * Add yourself using the following format:
    *    add_entry("Your Name", "github_username");
    */
   add_entry("Allen Comp Sci", "AllenCompSci");
   add_entry("Maxwell Cody", "MaxwellCody");
}

int main(int argc, char * argv[]) {
   populate_census();

   for(CensusEntry_t * current = head; current != NULL; current = current->next) {
      printf("Hello World from %s @ https://github.com/%s\n", current->fullName, current->githubUsername);
   }

   return EXIT_SUCCESS;
}

void add_entry(char * fullName, char * githubUsername) {
   CensusEntry_t * entry = malloc(sizeof(CensusEntry_t));
   entry->fullName = fullName;
   entry->githubUsername = githubUsername;
   entry->next = NULL;

   // If one of these conditions is true, then they both should be
   // we're checking both just to be sure.
   if(head == NULL || tail == NULL) {
      head = entry;
   } else {
      tail->next = entry;
   }
   tail = entry;
}
