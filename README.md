# CIS-25
Module 4
I accidently clicked on the second part of the module first so I did it out of order
so week7pt2 is actually the first part of module 4.
The example felt pretty basic so I was going to spice it up a little bit by making it more videogame-esq
I got a little carried away and made an array to hold an inventory beecuase I felt like just display text saying "displaying inventory" felt a little to boring. Long story short I made the menu and it even asks if you are sure you want to exit before stopping the program

so from top to bottom I inlcuded the string becuase I used strings
i had a couple variables up top, choic ewhich would be used to hold the value the user selected later on
size to hold the arrays size
invintory which Im now noticing I spelled wrong, which is the array to act as the users inventory
the do while loop is to continusly run the menu until the user chooses to exit
choicse are displayed and a varaible confirm is created to cheeck the users choice if they really want to exit
some if statments to evaluate the users choice
a for loop to print the contents of the inventory
a second do while loop to allow the user to examen their inventory without having the whole menu thrown at them again
more if statements to evalute the exit option and an else handler for invalid inputs
all in all a pretty simple program

for the second file Week7pt1 I copied over the code from the module to debug, I noticed the errors such as the missing arrows on the float "cin" and added the brackets and missing ; where they needed to be. Then I found a way to convert it into nested if statemetns as instructed

so from top to bottom we have our float variables deeclared and then a prompt to have the user enter numbers
next we recive the input from the user 
then we have our nested if statements, first we check if the first input is larger the nthe second
if it is then we check if its larger theen the third
if it is then we know the largest num and can output it
if its not bigger then the third but made it this far that means the third input is the largest and so we print that
if our first if fails then we know two is bigger then one so we must check if two is bigger then three
if it is we know 2 is the biggest, if it is not we know 3 is the biggest

