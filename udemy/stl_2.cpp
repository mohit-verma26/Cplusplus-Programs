// Section 20
// Challenge 2
//  Lists
#include<conio.h>

#include <iostream>
#include <list>
#include <string>
#include <string.h>

#include <cctype>
#include <iomanip>
#include <limits>
using namespace std;
class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }

    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }

    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display
    // Playing: followed by the song that is playing

    std::cout << "playing"<< std::endl;
    cout<<song;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist
    // and then the current song playing.

    std::cout << "Displaying all song:- " << std::endl;
    for(const Song &ss:playlist)
    {
        cout<<ss<<endl;
    }
    cout<<"Current Song is :- ";
    cout<<current_song;
}

int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}
    };

    std::list<Song>::iterator current_song = playlist.begin();

    std::cout << "To be implemented" << std::endl;
    // Your program logic goes here
    int flag{1};
    do
    {
        char ch;
        display_menu();
        cout<<"Enter your choice:- ";
        cin>>ch;
        ch=tolower(ch);
        switch(ch)
        {
        case 'f':
            cout<<"Playing First song"<<endl;
            current_song=playlist.begin();
            cout<<*current_song<<endl;
            getch();

            break;
        case 'n':
            cout<<"Playing next song :- "<<endl;
            current_song++;
            if(current_song==playlist.end())
            {
                cout<<"Wrapping to the start of the play list";
                current_song=playlist.begin();
            }
            cout<<*current_song<<endl;
            getch();
            break;
        case 'p':
            cout<<"Playing previous song:- "<<endl;
             if(current_song==playlist.begin())
            {
                cout<<"Wrapping to the end of the play list"<<endl;
                current_song=playlist.end();
            }
            current_song--;
            cout<<*current_song<<endl;
            getch();
        case 'q':
            flag=0;
            getch();
            break;
        case 'l':
            display_playlist(playlist,*current_song);
            getch();
            break;
        case 'a':
            {string name,artist;
            int rating;
            cin.ignore();
            cout<<"Enter the name of the Song:- "<<endl;

            getline(cin,name);
            cout<<"Enter the name of the artist:- "<<endl;
            getline(cin,artist);
            cout<<"Enter the rating of the song:- ";
            cin>>rating;
            playlist.insert(current_song,Song(name,artist,rating));
            current_song--;
            play_current_song(*current_song);
            getch();
            break;}
        default:
            cout<<"Invalid reponse"<<endl;
            cout<<"Please select from menu"<<endl;
            getch();
        }
    system("CLS");
    }
    while(flag==1);

    std::cout << "Thanks for listening!" << endl;
    return 0;
}
