#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Movie
{
    string name;
    string rating;
    int watched;
public:
    void set_name(string temp_name)
    {
        name=temp_name;
    }
    string get_name() const
    {
        return name;
    }
    void set_rating(string temp_rating)
    {
        name=temp_rating;
    }
    string get_rating() const
    {
        return rating;
    }
    void set_watched(string temp_watched)
    {
        name=temp_watched;
    }
    int get_watched() const
    {
        return watched;
    }
    void increment_watched()
    {
        watched++;
    }
    void display() const
    {
        cout<<name<<", "<<rating<<", "<<watched<<endl;
    }
    Movie(string name,string rating, int watched)
    :name{name},rating{rating},watched{watched}
    {

    }
    Movie(const Movie &source )
    :name{source.name},rating{source.rating},watched{source.watched}
    {

    }
    ~Movie(){}
};
class Movies
{
        vector<Movie> movies;
public:
    Movies(){}
    ~Movies(){}
     bool add_movie(string name,string rating, int watched)
    {
        for(const Movie &movie :movies)
        {
            if(movie.get_name()==name)
            {

                return false;
            }

        }
         Movie temp{name,rating,watched};
            movies.push_back(temp);
            return true;
    }
    bool increment_watched(string name)
    {
        for(Movie &movie: movies)
        {
            if(movie.get_name()==name)
            movie.increment_watched();
            return true;
        }
        return false;
    }
    void display() const
    {
        if(movies.size()==0)
        {
            cout<<"No movies are found in the list."<<endl;
        }
        for(const Movie &movie: movies)
        {
            movie.display();
        }
    }
};
void increment_watched(Movies &movies, string name)
{
        if(movies.increment_watched(name))
        {
            cout<<name<<" is incremented"<<endl;
        }
        else
        {
            cout<<name<<" Not found"<<endl;
        }
}
void add_movie(Movies &movies,string name,string rating, int watched)
{
    if(movies.add_movie(name,rating,watched))
        {
            cout<<name<<" is added"<<endl;
        }
        else
        {
            cout<<name<<" already exist"<<endl;
        }
}
int main()
{
    Movies my_movies;
    my_movies.display();
    add_movie(my_movies,"Main hu na","PG0",2);
    my_movies.add_movie("Main bhi hu na","PG0",4);
    my_movies.display();
    add_movie(my_movies,"Main bhi hu na","PG0",6);
    my_movies.display();

}
