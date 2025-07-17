# Movie Ranking Program

## Background
The screen output below shows the Movie Ranking program, which displays a list of movies in ranked order with the best movie in 
the #1 position, the second best in the #2 position, and so on. Then, the program allows the user to change these rankings. To do that, 
the user selects a movie by entering its current rank. Then, the user enters a new ranking for the movie.

<pre><b>The Movie Rankings program

Movie Rankings
--------------
1 - The Incredibles
2 - Monsters Inc.
3 - Toy Story
4 - Cars
5 - Finding Nemo

Do you want to change any rankings? (y/n): y
Enter current ranking of a movie: 3
Enter new ranking of the movie: 1

Movie Rankings
--------------
1 - Toy Story
2 - The Incredibles
3 - Monsters Inc.
4 - Cars
5 - Finding Nemo

Do you want to change any rankings? (y/n): n

</b></pre>

## Directions
Your solution must include the following functions that implement the given descriptions.

main() : this function starts by defining a vector of strings named movies. To keep this program simple, the code uses an initialization list to initialize this vector with five movie titles. However, in a more realistic program, this data would be read from a file that might contain many more titles. After initializing the vector, the code displays the program title and passes the vector of movie titles to the display_rankings() function which prints the list of movie titles along with their rank number. Next, the  code calls the get_choice() function.

display_rankings() : this function defines the vector as a constant reference parameter. That way, the function works directly with the vector passed to it, not with a copy, and it can’t change any of the data in the vector. That makes sense because this function only needs to read the vector elements, not change them.

change_ranking() : this function also defines the vector as a reference parameter so it can work directly with the vector passed to it. This time, though, the vector isn’t defined as a constant. That makes sense because this function needs to change the sequence of the elements in the vector. This is a common pattern when working with vectors, which can be large and inefficient to copy. In other words, it’s common for a function to use a constant reference parameter for the vector when the function only needs to read the elements in the vector, and it’s common for a function to use a variable reference parameter for the vector when the function needs to make changes to the vector.

get_choice() : this function asks the user if they want to change a ranking. If so, the function collects the rank number of the title to be moved (current_rank) and the rank position where it is to be moved to in the list (new_ranking) and then return these values that indicates the response.

