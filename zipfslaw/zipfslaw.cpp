#include "Sorting.h"

int main()
{
    //text file object
    Sorting Textfile;

    Textfile.fileRequest();
    Textfile.fileFind("test.txt");
    Textfile.intialDisplay("test.txt");
    //Textfile.counting();


    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;

        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        // end the current frame
        window.display();
    }

    return 0;
}