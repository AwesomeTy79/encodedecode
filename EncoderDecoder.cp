//
//  main.cpp
//  Encode
//
//  Created by Logan on 8/20/19.
//  Copyright © 2019 MyRoom0510. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int choice;
    string letter;
    
    cout << "Use lowercase letters only" << endl;
    cout << "" << endl;
    cout << "Menu: " << endl;
    cout << "[1] Encode" << endl;
    cout << "[2] Decode" << endl;
    cin >> choice;
     
    string seed;
    cout << "Enter the seed: " << endl;
    cin >> seed;
    cout << "Enter letters and then press enter" << endl;
     for (int i=0; i <99999999; i++)
     {
          if (choice == 1 || choice == 2)
         {
              
              if (seed == "1")
              {
                   cin >> letter;
                   
				   if (letter == "done")
                   {
                       break;
                   }
                   if (letter == "a")
                   {
                       cout << "g" << endl;
                       cout << "" << endl;
                   }
                   if (letter == "b")
                   {
                        cout << "c" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "c")
                   {
                        cout << "b" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "d")
                   {
                        cout << "z" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "e")
                   {
                        cout << "q" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "f")
                   {
                        cout << "h" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "g")
                   {
                        cout << "a" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "h")
                   {
                        cout << "f" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "i")
                   {
                        cout << "m" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "j")
                   {
                        cout << "v" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "k")
                   {
                        cout << "u" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "l")
                   {
                        cout << "s" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "m")
                   {
                        cout << "i" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "n")
                   {
                        cout << "y" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "o")
                   {
                        cout << "r" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "p")
                   {
                        cout << "w" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "q")
                   {
                        cout << "e" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "r")
                   {
                        cout << "o" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "s")
                   {
                        cout << "l" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "t")
                   {
                        cout << "x" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "u")
                   {
                        cout << "k" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "v")
                   {
                        cout << "j" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "w")
                   {
                        cout << "p" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "x")
                   {
                        cout << "t" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "y")
                   {
                        cout << "n" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "z")
                   {
                        cout << "d" << endl;
                        cout << "" << endl;
                   }
               }
              
              
               if (seed == "2")
               {
                    cin >> letter;
                    
					if (letter == "done")
                    {
                        break;
                    }
                    if (letter == "a")
                    {
                         cout << "o" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "b")
                    {
                         cout << "f" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "c")
                    {
                         cout << "n" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "d")
                    {
                         cout << "g" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "e")
                    {
                         cout << "z" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "f")
                    {
                         cout << "b" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "g")
                    {
                         cout << "d" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "h")
                    {
                         cout << "i" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "i")
                    {
                         cout << "h" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "j")
                    {
                         cout << "m" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "k")
                    {
                         cout << "w" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "l")
                    {
                         cout << "x" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "m")
                    {
                         cout << "j" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "n")
                    {
                         cout << "c" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "o")
                    {
                         cout << "a" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "p")
                    {
                         cout << "y" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "q")
                    {
                         cout << "r" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "r")
                    {
                         cout << "q" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "s")
                    {
                         cout << "u" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "t")
                    {
                         cout << "v" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "u")
                    {
                         cout << "s" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "v")
                    {
                         cout << "t" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "w")
                    {
                         cout << "k" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "x")
                    {
                         cout << "l" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "y")
                    {
                         cout << "p" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "z")
                    {
                         cout << "e" << endl;
                         cout << "" << endl;
                    }
   
               }
               if (seed == "3")
               {
                    cin >> letter;
                    
					if (letter == "done")
                    {
                       break;
                    }
                    if (letter == "a")
                    {
                         cout << "i" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "b")
                    {
                         cout << "k" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "c")
                    {
                         cout << "t" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "d")
                    {
                         cout << "e" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "e")
                    {
                         cout << "d" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "f")
                    {
                         cout << "z" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "g")
                    {
                         cout << "j" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "h")
                    {
                         cout << "p" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "i")
                    {
                         cout << "a" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "j")
                    {
                         cout << "g" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "k")
                    {
                         cout << "b" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "l")
                    {
                         cout << "n" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "m")
                    {
                         cout << "i" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "n")
                    {
                         cout << "y" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "o")
                    {
                         cout << "r" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "p")
                    {
                         cout << "w" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "q")
                    {
                         cout << "e" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "r")
                    {
                         cout << "o" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "s")
                    {
                         cout << "l" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "t")
                    {
                         cout << "x" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "u")
                    {
                         cout << "u" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "v")
                    {
                         cout << "j" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "w")
                    {
                         cout << "p" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "x")
                    {
                         cout << "t" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "y")
                    {
                         cout << "n" << endl;
                         cout << "" << endl;
                    }
                    if (letter == "z")
                    {
                         cout << "d" << endl;
                         cout << "" << endl;
                    }
               }
              
              
              if (seed == "4")
              {
                   cin >> letter;
                   
				   if (letter == "done")
                   {
                       break;
                   }
                   if (letter == "a")
                   {
                        cout << "r" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "b")
                   {
                        cout << "v" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "c")
                   {
                        cout << "q" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "d")
                   {
                        cout << "e" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "e")
                   {
                        cout << "d" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "f")
                   {
                        cout << "m" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "g")
                   {
                        cout << "u" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "h")
                   {
                        cout << "t" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "i")
                   {
                        cout << "w" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "j")
                   {
                        cout << "k" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "k")
                   {
                        cout << "j" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "l")
                   {
                        cout << "p" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "m")
                   {
                        cout << "f" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "n")
                   {
                        cout << "x" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "o")
                   {
                        cout << "y" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "p")
                   {
                        cout << "l" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "q")
                   {
                        cout << "c" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "r")
                   {
                        cout << "a" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "s")
                   {
                        cout << "z" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "t")
                   {
                        cout << "h" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "u")
                   {
                        cout << "g" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "v")
                   {
                        cout << "b" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "w")
                   {
                        cout << "i" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "x")
                   {
                        cout << "n" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "y")
                   {
                        cout << "o" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "z")
                   {
                        cout << "s" << endl;
                        cout << "" << endl;
                   }
                   
               }
               if (seed == "5")
               {
                   cin >> letter;
                   if (letter == "done")
                   {
                       break;
                   }
                   if (letter == "a")
                   {
                        cout << "x" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "b")
                   {
                        cout << "v" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "c")
                   {
                        cout << "o" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "d")
                   {
                        cout << "v" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "e")
                   {
                        cout << "r" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "f")
                   {
                        cout << "t" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "g")
                   {
                        cout << "q" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "h")
                   {
                        cout << "s" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "i")
                   {
                        cout << "w" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "j")
                   {
                        cout << "n" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "k")
                   {
                        cout << "m" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "l")
                   {
                        cout << "z" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "m")
                   {
                        cout << "k" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "n")
                   {
                        cout << "j" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "o")
                   {
                        cout << "c" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "p")
                   {
                        cout << "y" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "q")
                   {
                        cout << "g" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "r")
                   {
                        cout << "e" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "s")
                   {
                        cout << "h" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "t")
                   {
                        cout << "f" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "u")
                   {
                        cout << "d" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "v")
                   {
                        cout << "b" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "w")
                   {
                        cout << "i" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "x")
                   {
                        cout << "a" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "y")
                   {
                        cout << "p" << endl;
                        cout << "" << endl;
                   }
                   if (letter == "z")
                   {
                        cout << "l" << endl;
                        cout << "" << endl;
                   }
               }
         } //THIS BRACKET IS THE CHOICE
     } //THIS BRACKET IS THE FOR LOOP
    return 0;
} //THIS BRACKET IS THE MAIN
