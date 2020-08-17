# OIT_Challenge

I don't have any experience in compiling in Windows (without an IDE), but 
the file "oitChallenge.cpp" in this repo is all that is needed to compile challenge
solution. So long as you have the tools to compile C++ files for windows,
compiling should be no issue.

I worked on solving this challenge for approximately 3 hours 37 minutes. This does not include the time spent to post my work to github, or editing this README.

A few notes:

1. Based on a good bit of testing, I am confident that this code, as seen in the source code file, accounts for all 4 rules for creating roman numerals, as is described in the challenge specifications; however, rule #4 is not %100 clear on which numerals can/cannot precede each other in subtractive notation. One example of this is 'L' and 'D'. No value of x in 10^x will result in 50, and no value of x in 10^x+1 will result in 'D'. But if you divide them both by five, you get 10 and 100, and we know that 'X' may precede 'C'. Thus, my code includes this logic.

2. Should there happen to be any rule of creating numerals broken -- although the extent to which I conducted tests leads me to conclude that such is not likely -- It will almost certainly be in a case where the ambiguity of the documentation forced me to make my own inference regarding the rules. If this be the case, I would like to note that, had I not been under a time constraint, I would have had the luxury of asking the individual who provided the specs for additional clarification.

3. Had there been more time allotted me, I would have liked to test my code some more.
