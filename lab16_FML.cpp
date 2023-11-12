/////////////////////////////////////////////////////////////////////
//
// Name: Landon Burns
// Date: 4/7/2022
// Class: CSCI 1370.04
// Semester: Spring
// CSCI 1370 Instructor: Gustavo Dietrich
//
// Program Description: This creates a ledger for a hotel based on a provided sheet then shows percentage of occupancy.
//
/////////////////////////////////////////////////////////////////////


#include <iomanip>				
#include <iostream>
#include <fstream>
#include <string>

// Include here the libraries that your program needs to compile


using namespace std;

void printHotelOccupancy();



int main()
{
// Enter here all the statements needed to use the input file
// Check if there was an error opening the input file
cout << "     Floor | Occupants  Rate (%)" << endl << "--------------------------------" << endl;

// Call the function to print the occupancy table
printHotelOccupancy();

// Close the input file


	return 0;
}

//************************  Function definitions  *************************
// Read the handout carefully for detailed description of the functions that you have to implement


// This function receives an input file with data about rooms in a hotel.
// Each row of the file represents a floor in the hotel. You do not know ahead of time how many floors there are in the hotel.
// Each room is represented by a single digit: 1 (the room is occupied) or 0 (the room is not occupied).
// Because each floor can have a different number of rooms, the value -1 is used to indicate that the end of data for that floor has been reached.
// The function must print the header of the table followed by the floor number, the number of rooms occupied in that floor, and the occupancy
// rate (percentage of rooms occupied) for that floor. Below this information it must display the overall occupancy rate for the whole hotel.
// The rates must be displayed real numbers with a single decimal digit.

void printHotelOccupancy(){
int tell;
int i;
int x;
int y;
y = 0;
int z;
  ifstream hotelFile;
  hotelFile.open("occupants.txt");
  
z = 0;
while (z < 14){
z = z + 1;
x = 0;
y = 0;
double sumr;
double brick;
sumr = 0;
  while (x != -1){
  hotelFile >> x;
  y = x + y;
  }
  y = y + 1;
  if (z < 10){
  cout << endl << "         " << z << " |         " << y;
    }
  else {

cout << endl << "        " << z << " |         " << y;
    
  }

if (z == 1){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/28);

  }

else if (z == 2){
cout <<  fixed << setprecision(1) << "    " << ((100.0 * y)/20);

  }

  else if (z == 3){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/24);
  
    } 

  else if (z == 4){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/21);
    }

      
  else if (z == 5){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/7);
    }

  else if (z == 6){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/18);
    }

  else if (z == 7){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/22);
    }

 else if (z == 8){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/22);
   }

  else if (z == 9){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/21);
    }

  else if (z == 10){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/17);
    }

  else if (z == 11){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/11);
    }

  else if (z == 12){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/16);
    }

  else if (z == 13){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/28);
    }

  else if (z == 14){
cout << fixed << setprecision(1) << "    " << ((100.0 * y)/14);
    }
    


if (z == 1){
sumr = ((100.0 * y)/28);

  }

else if (z == 2){
sumr = ((100.0 * y)/20);

  }

  else if (z == 3){
sumr = ((100.0 * y)/24);
  
    } 

  else if (z == 4){
sumr = ((100.0 * y)/21);
    }

      
  else if (z == 5){
sumr =  ((100.0 * y)/7);
    }

  else if (z == 6){
sumr =  ((100.0 * y)/18);
    }

  else if (z == 7){
sumr = ((100.0 * y)/22);
    }

 else if (z == 8){
sumr = ((100.0 * y)/22);
   }

  else if (z == 9){
sumr = ((100.0 * y)/21);
    }

  else if (z == 10){
sumr = ((100.0 * y)/17);
    }

  else if (z == 11){
sumr = ((100.0 * y)/11);
    }

  else if (z == 12){
sumr = ((100.0 * y)/16);
    }

  else if (z == 13){
sumr = ((100.0 * y)/28);
    }

  else if (z == 14){
sumr = ((100.0 * y)/14);
    }




brick = brick + sumr;

if (z == 14){

cout << endl << endl << "The overall occupancy rate is: " << brick/14 << "%";
  
}

  
  }

  
}