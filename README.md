# CIS-25
CIS 25 last half of the course assignments

Week 5 edit
-------------------------------
first file is called week 5 beccuase I didnt have the forethought to name it module 6
For this one the instructions seemed to use a lot of general termonology so I assumed
we were to create something to fill the place of the general terms. I used random integers
at the end so I had to include cstdlib and ctime for the code, but I did just modify the 
example code. There is a class called "Card" which ahs two variables suit and value. There are two functions in the class, saveToFile and loadFromFile. saveToFIle has ios::app in it to append the file rather then write over the file. It creates or opens a file called "hand.txt" and writes the name and value of the card the was "drawn" so to speak. It then prints out a message to the console saying the card was saved to hand. The loadFromFile function reads hand.txt and prints out the text in the file. In the main function I have an array of strings to hold the suit names. A random number is generated to determine the suit and the value of the card. Then the values are assigned to the deck class. After that the two functions are called on the deck class to save the card to the file and then print the file to the console.

second file is called module 11, the code is pretty straightforeword
Since this is the first assignment I didnt know if we were supposed to
deviate from the instructions and make things named different or if we 
were just supposed to copy/paste the example and just make sure we understand it.
So I stuck to the example and just slightly modified it to be groceries instead
of a notebook and I created a couple examples. But for how the code works it is 
a class object called "Product" which has a couple variables(id, name, price) 
The constructor initilizes the object and prints message to let you know its been called
the destructor follows to clean up the stack and prints a message to let you know its 
been called. There is a printDetails() function which prints all the details contained
in the class. In the main function I create 3 Products and then print their details.

