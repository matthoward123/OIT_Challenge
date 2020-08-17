# OIT_Challenge

I don't have any experience in compiling in Windows (without an IDE), but 
the file "oitChallenge.cpp" in this repo is all that is needed to compile challenge
solution. So long as you have the tools to compile C++ files for windows,
compiling should be no issue. Also, I included "main" which is the compiled version of my source code, and 
it runs fine in Ubuntu, but I have trouble doing so in Windows. Just to be safe, you'll probably want to go
ahead and compile the source code provided to create a runnable windows exe.

It took several tries to upload my source code to where GitHub would interpret my tabs properly. If for some reason the source code does not compile properly, please let me know, and I'll just add the source code from before fixing the formatting (the tabs were originally being interpreted by GitHub as being way too large) that should work/compile properly (it will just have tabs that are too large).

I worked on solving this challenge for approximately 3 hours 37 minutes. This does not include the time spent to post my work to github, or editing this README.

A few notes:

1. Based on a good bit of testing, I am confident that this code, as seen in the source code file, accounts for all 4 rules for creating roman numerals, as is described in the challenge specifications; however, rule #4 is not %100 clear on which numerals can/cannot precede each other in subtractive notation. One example of this is 'L' and 'D'. No value of x in 10^x will result in 50, and no value of x in 10^x+1 will result in 'D'. But if you divide them both by five, you get 10 and 100, and we know that 'X' may precede 'C'. Thus, my code includes this logic. If you discover that I broke a rule for creating Roman Numerals, I suspect that it will likely involve incorrect logic in subtraction notation, which I had to infer in unclear cases (as explained earlier in this paragraph). Should this flaw exist, I would like to note that, had I not been under a time constraint, I would have had the luxury of asking the individual who provided the specs for additional clarification.

3. Had there been more time allotted me, I would have liked to test my code some more. I also would have liked to add additional input validation. With that said, there are a few assumptions associated with certain instances of user input (with the exception of the easier-to-implement input validations for a menuChoice or something like that):
  - When inputting a roman numeral, it is assumed that you will use all-caps, and that you will input a valid/real   Roman Numeral.
  - When inputting a modern number, it is assumed that you will input a single whole number, and nothing else.

4. This program is designed to run on the command line.
