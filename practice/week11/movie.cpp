#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movie
{
private:
  string title;
  double rating;

public:
  Movie(string t = "", double r = 0.0)
  {
    title = t;
    rating = r;
  }
  void PrintMovie() { cout << title << ": " << rating << endl; }
};
int main(void)
{
  vector<Movie> movies;
  movies.push_back(Movie("titinic", 9.9));
  movies.push_back(Movie("gone with the wind", 9.6));
  movies.push_back(Movie("terminator", 9.7));
  for (auto &e : movies)
    e.PrintMovie();
  return 0;
}