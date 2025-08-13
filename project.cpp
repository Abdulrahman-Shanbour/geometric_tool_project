#include <iostream>
#include <cmath>
using namespace std;
// Declaring Arrays to store the dimensions for all the shapes 
// Initializing all of them at 0 to check whether the user have drawn the shape before or not
int square_dimension[1] = { 0 };
int rectangle_dimensions[2] = { 0, 0 };
int triangle_dimension[1] = { 0 };
int circle_dimension[1] = { 0 };
int hexagon_dimension[1] = { 0 };

// A Global Variable 
string decision;

// Prototypes 
void Display(); 
void clear_console(); 
void choice_continue(); 
void introduction(); 
void draw_triangle();
void draw_square();
void draw_hexagon();
void draw_circle();
void draw_rectangle();
void redraw_option(); 

// The main Function 
int main() {
    Display(); 
    return 0;
}

// The first function to be run after the main 
void Display()
{
    char choice;
    char console;
    introduction();
    do {
        cout << "\t\t\t\t       Which Shape would you like to draw ? \n 1 - Square \n 2 - rectangle \n";
        cout << " 3 - triangle \n 4 - circle \n 5 - hexagon \n q - quit" << endl;
        cin >> choice;
        switch (choice)
        {
        case '1': draw_square(); redraw_option(); clear_console(); break;
        case '2': draw_rectangle(); redraw_option(); clear_console(); break;
        case '3': draw_triangle(); redraw_option(); clear_console(); break;
        case '4': draw_circle(); redraw_option(); clear_console(); break;
        case '5': draw_hexagon(); redraw_option(); clear_console(); break;
        case 'q': break;
        default: cout << "Invalid option, please choose again: \n";  // Making sure that the user have entered a valid choice 
        }
    } while (choice != 'q'); // The condition 
}

// Drawing the triangle
void draw_triangle()
{
    int i, j, k;
    int length;
    char used_ch; 
    do {
        cout << "*****************************************************"<<endl;
        cout << "Enter the length of the triangle sides: ";
        cin >> length;
        cout << endl; 
        cout << "Which character you would like to use to draw the triangle: "; 
        cin >> used_ch;
        cout << endl;
        if (length >= 2) {
            triangle_dimension[0] = length; // Storing the length of the triangle in the array for future manipulation 
            for (i = 1; i <= length; i++) {
                cout << "\t";
                for (k = length - i; k >= 0; k--) {
                    cout << " ";
                }
                for (j = 1; j <= i; j++) {
                    cout << " " << used_ch;
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (length == 1)
            cout << "A triangle can not be drawn using 1 point ): \n\n ";   // Makin sure that a proper shape will be drawn 
        else
            cout << "Invalid length !!!! \n\n"; // Validating the user's choice of the length  
        choice_continue(); 
    } while (decision != "no"); 
    
}

// Drawing the square 
void draw_square()
{
    int i, j, k;
    int length;
    char used_ch; 
    do {
        cout << "*****************************************************"<<endl;
        cout << "Enter the length of the square sides: ";
        cin >> length;
        cout << endl;
        cout << "Which character you would like to use to draw the square: ";
        cin >> used_ch;
        cout << endl;
        if (length >= 2) {
            square_dimension[0] = length; // Storing the length of the square in the array for future manipulation 
            for (i = 1; i <= length; i++) {
                cout << "\t";
                for (k = 0; k <= 0; k++) {
                    cout << " ";
                }
                for (j = 1; j <= length; j++) {
                    cout << " " << used_ch;
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (length == 1)
            cout << "A square can not be drawn out of one point  ): \n\n"; // Makin sure that a proper shape will be drawn 
        else
            cout << "Invalid length !!! \n\n";  // Validating the user's choice of the length 

        choice_continue();
    } while (decision != "no");
    
}

// Drawing the hexagon 
void draw_hexagon()
{
    int size;
    char used_ch; 
    do {
        cout << "*****************************************************"<<endl;
        cout << "Enter the length of the hexagon sides: ";
        cin >> size;
        cout << endl;
        cout << "Which character you would like to use to draw the hexagon: ";
        cin >> used_ch;
        cout << endl;
        // Top half of the hexagon
        if (size >= 2) {
            hexagon_dimension[0] = size; // Storing the length of the square in the array for future manipulation 
            for (int i = 0; i < size; ++i) {
                cout << "   ";
                for (int j = 0; j < size - i - 1; ++j) {
                    cout << "  ";
                }
                for (int k = 0; k < size + 2 * i + 0; ++k) {
                    cout << used_ch << " ";
                }
                cout << endl;
            }

            // Bottom half of the hexagon
            for (int i = size - 1; i >= 0; --i) {
                cout << "   ";
                for (int j = 0; j < size - i - 1; ++j) {
                    cout << "  ";
                }
                for (int k = 0; k < size + 2 * i + 0; ++k) {
                    cout << used_ch << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (size == 1)
            cout << "A hexagon can not be drawn out of one point ): \n\n"; // Makin sure that a proper shape will be drawn 
        else
            cout << "Invalid size !!! \n\n"; // Validating the user's choice of the length  

        choice_continue();
    } while (decision != "no");
    
}

// Drawing the circle 
void draw_circle()
{
    int radius;
    char used_ch; 
    do {
        cout << "*****************************************************"<<endl;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << endl;
        cout << "Which character you would like to use to draw the circle: ";
        cin >> used_ch;
        cout << endl;
        // Diameter of the circle
        int diameter = 2 * radius;
        if (radius >= 1) {
            circle_dimension[0] = radius; // Storing the radius of the circle in the array for future manipulation 
            // Loop through each row
            for (int y = 0; y <= diameter; ++y) {
                // Loop through each column
                for (int x = 0; x <= diameter; ++x) {
                    // Calculate the distance from the center
                    float distance = sqrt(pow(x - radius, 2) + pow(y - radius, 2));

                    // Print '*' if the distance is approximately equal to the radius
                    if (distance > radius - 0.5 && distance < radius + 0.5) {
                        cout << used_ch << " ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            cout << endl;
        }
        else
            cout << "Invalid Radius !!!\n\n"; // Validating the user's choice of the radius   

        choice_continue();
    } while (decision != "no"); 
}

// Drawing the rectangle 
void draw_rectangle()
{
    int width, height;
    char used_ch; 
    do {
        cout << "*****************************************************"<<endl;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << endl;
        cout << "Enter the height of the rectangle: ";
        cin >> height;
        cout << endl;
        cout << "Which character you would like to use to draw the rectangle: ";
        cin >> used_ch;
        cout << endl;
        if (width == height)
            cout << "This is a square not a rectangle .... :)\n\n";
        else if ((width >= 1) && (height >= 1)) {
            rectangle_dimensions[0] = width; // Storing the width of the rectangle in the array for future manipulation 
            rectangle_dimensions[1] = height;  // Storing the height of the rectangle in the array for future manipulation 
            // Loop through each row
            for (int i = 0; i < height; ++i) {
                cout << "\t";
                // Loop through each column
                for (int j = 0; j < width; ++j) {
                    // Print '*' for all cells
                    cout << used_ch << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        else
            cout << "Invalid Dimensions !!!\n\n"; // Validating the user's choice of the radius   

        choice_continue();
    } while (decision != "no"); 

}

void introduction() {
        cout << "\t\t\t\t\t         Shape Artistry!\n\t\t\t\t\t   Interactive Drawing with C++\n";
        cout << "\t\t\t\t\t*********************************\n\n";
}

// This function is used in all other functions that are related to draw the shapes 
// This is why the variable "decision" was declared as a global variable 
void choice_continue() {
    cout << "Would you like to redraw similar shape again (yes/no) ? ";
    cin >> decision;
    cout << endl;
    if ((decision != "yes") && (decision != "no")) { // Validating the user's input 
        do {
            cout << "Invalid answer !!! (yes or no) ";
            cin >> decision;
            cout << endl;
        } while ((decision != "yes") && (decision != "no"));
    }
}

void clear_console() {
    char console; 
    do {
        cout << "Would you like to clear the console (y/n) ? ";
        cin >> console;
        cout << endl;
        if (console == 'y')
            system("cls"); // Using "cls" since the program is being runed in windows 
        else if ((console != 'n') && (console != 'y')) { // Validating the user's input 
            cout << "Invalid !! Try Again (y or n): ";
            cin >> console;
            cout << endl;
            if (console == 'y')
                system("cls");
        }
    } while ((console != 'n') && (console != 'y'));
}

void redraw_option() {
    string option; 
    char shape; 
    cout << "Would you like to change the dimensions of a previous shape and redraw it (yes or no)? "; 
    cin >> option; 
    cout << endl;
    while ((option != "yes") && (option != "no")) {  // Validating the user's input
        cout << "Invalid option!! Please try again: "; 
        cin >> option; 
        cout << endl;
    }
    if (option == "yes"){
        cout << " Which Shape would you like to draw ? \n 1 - Square \n 2 - rectangle \n 3 - triangle \n 4 - circle \n 5 - hexagon\n"; 
        cin >> shape; 
        cout << endl;
        while ((shape < '1') || (shape > '5')) {
            cout << "Invalid shape!! please try again: ";    // Validating the user's input
            cin >> shape; 
            cout << endl;
        }
        switch (shape) 
        {
        case '1': 
            if (square_dimension[0] == 0 )
                cout << "You did not draw a square before\n\n"; 
            else {
                cout << "The previous square dimension was " << square_dimension[0]<<endl<<endl;
                draw_square();
            }
            break;
        case '2':
            if ((rectangle_dimensions[0] == 0) && (rectangle_dimensions[1] == 0))
                cout << "You did not draw a rectangle before\n\n";
            else {
                cout << "The previous width was " << rectangle_dimensions[0] << " while the previous height was " << rectangle_dimensions[1] <<"\n\n";
                draw_rectangle(); 
            }
            break;
        case '3':
            if (triangle_dimension[0] == 0)
                cout << "You did not draw a triangle before\n\n";
            else {
                cout << "The previous length of the triangle sides was " << triangle_dimension[0] << endl<<endl;
                draw_triangle(); 
            }
            break; 
        case '4':
            if (circle_dimension[0] == 0)
                cout << "You did not draw a circle before\n\n"; 
            else {
                cout << "The previous radius was " << circle_dimension[0] << endl<<endl;
                draw_circle(); 
            }
            break; 
        case '5':
            if (hexagon_dimension[0] == 0)
                cout << "You did not draw a hexagon before\n\n"; 
            else {
                cout << "The previous length of the hexagon sides was " << hexagon_dimension[0] << endl<<endl;
                draw_hexagon(); 
            }
        }
    }

}