#include <iostream>
#include <string>
#include <vector>
using namespace std;

void display_rankings();
char get_choice();
void change_ranking();

int main() {
    vector<string> movies { "The Incredibles", "Monsters Inc.", "Toy Story", "Cars", "Finding Nemo" };
    cout << "The Movie Rankings program\n";
    display_rankings(movies);
    char choice = get_choice();

    while (tolower(choice) == 'y') {
        int current_ranking = 0;
        cout << "Enter current ranking of a movie: ";
        cin >> current_ranking;
        int new_ranking = 0;
        cout << "Enter new ranking of the movie: ";
        cin >> new_ranking;
        change_ranking(movies, current_ranking, new_ranking);
        display_rankings(movies); // show updated rankings
        choice = get_choice(); // ask if user wants to continue
        }
}

void display_rankings() {

}

char get_choice() {

}

void change_ranking() {
    // make sure rankings are in bounds

    // decrement rankings to create valid indexes

    // store current ranking element

    // remove element at old location

    // insert element at new location

}