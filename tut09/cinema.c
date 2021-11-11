
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cinema.h"

struct movie {
    char title[MAX_STR_LENGTH];
    int length;
    double rating;

    struct movie *next;
};

struct genre {
    char name[MAX_STR_LENGTH];

    struct movie *movies;
    struct genre *next;
};

struct cinema {
    struct genre *genres;
};

struct movie *create_new_movie(char *movie_name, int length, double rating);
struct movie *last_movie(struct movie *head);
struct genre *find_genre(struct cinema *cinema, char *genre_name);

struct cinema *create_cinema() {
    struct cinema *new = malloc(sizeof(struct cinema));
    new->genres = NULL;

    return new;
}

void add_genre(struct cinema *cinema, char *genre_name) {
    struct genre *new = malloc(sizeof(struct genre));
    strcpy(new->name, genre_name);
    new->movies = NULL;
    new->next = NULL;

    new->next = cinema->genres;
    cinema->genres = new;
}

int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_name,
    int length,
    double rating
) {
    struct genre *to_add = find_genre(cinema, genre_name);
    if (to_add == NULL) {
        return NOT_FOUND;
    }

    struct movie *new = create_new_movie(movie_name, length, rating);
    // CASE 1: list is empty
    if (to_add->movies == NULL) {
        to_add->movies = new;
    } else {
        // CASE 2: list is not empty
        struct movie *end_movie = last_movie(to_add->movies);
        end_movie->next = new;
    }
    
    return SUCCESS;
}

void print_genre(struct cinema *cinema, char *genre_name) {
    struct genre *genre = find_genre(cinema, genre_name);
    if (genre == NULL) {
        return;
    }

    struct movie *curr = genre->movies;
    while (curr != NULL) {
        printf("%s, %lf/10 (%d)\n", curr->title, curr->rating, curr->length);

        curr = curr->next;
    }

    return;
}

/** HELPER FUNCTIONS **/

// `create_new_movie` will take in the details of a movie and allocate memory
// to create a new struct movie.
//
// `create_new_movie` will take in:
// - the name of the new movie,
// - the length of the new movie and
// - the rating of the new movie.
//
// `create_new_movie` will return:
// - a pointer to the new struct movie.
struct movie *create_new_movie(char *movie_name, int length, double rating) {
    struct movie *new = malloc(sizeof(struct movie));
    strcpy(new->title, movie_name);
    new->length = length;
    new->rating = rating;
    new->next = NULL;

    return new;
}

// `last_movie` will get the last movie in a linked list of movies.
//
// `last_movie` will take in:
// - the head of a linked list of movies.
//
// `last_movie` will return the struct movie pointer to the last movie.
//
// ASSUMPTIONS:
// - head is never NULL.
struct movie *last_movie(struct movie *head) {
    struct movie *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    return curr;
}

// `find_genre` will find the corresponding genre in the cinema.
//
// `find_genre` will take in:
// - a struct cinema pointer and
// - name of the genre we are trying to find.
//
// `find_genre` will return:
// - the corresponding struct genre's pointer or
// - NULL if not found.
//
// ASSUMPTIONS:
// - cinema is never NULL.
struct genre *find_genre(struct cinema *cinema, char *genre_name) {
    struct genre *curr_genre = cinema->genres;
    struct genre *to_add = NULL;

    while (curr_genre != NULL && to_add == NULL) {
        if (strcmp(curr_genre->name, genre_name) == 0) {
            to_add = curr_genre;
        }

        curr_genre = curr_genre->next;
    }

    return to_add;
}