## Introduction to Loops in C++

Loop statements in C++ execute a certain block of the code or statement multiple times, mainly used to reduce the length of the code by executing the same function multiple times and reducing the code’s redundancy. C++ supports various loops like for loop, while loop, and do-while loop; each has its syntax, advantages, and usage. In the programming world, the loop is a control structure that is used when we want to execute a block of code, multiple times. It usually continues to run until and unless some end condition is fulfilled.


## Types of Loops in C++
Now that we have seen how a Loop works let us make it clearer by going through the types of Loops out there. In C++ programming, we have three types of Loops in C++ :

--> For Loop
--> While Loop
--> Do While Loop


## For Loop -->

Loop is an entry controlled loop, meaning that the condition specified by us is verified before entering the loop block. It is a repetition control structure. The loop written by us is run a specified number of times.

To control the loop, we use a loop variable in For loop. This variable is first initialized to some value, then we perform the check on this variable, comparing it to the counter variable, and finally, we update the loop variable.

for(initialization expression; test expression; update expression)
{
// statements to execute in the loop body
}


## While Loop -->

While the loop is also an entry controlled loop, we verify the condition specified before running the loop. The difference is that we use For loops when we know the number of times the body of the loop needs to run, whereas we use while loops in circumstances when beforehand we do not know the precise number of times the body of the loop needs to run. The execution of the loop is terminated based on the test condition.

while (test_expression)
{
// statements to execute in the loop body
update_expression;
}


## Do While Loop -->

Do while loop is an exit controlled loop meaning the test condition is verified after the execution of the loop, at the end of the body of the loop. Hence, the body executes at least once, regardless of the test condition, whether it is true or false. In a while loop, the condition is tested beforehand, whereas in a do loop, the condition is verified at the finish of the loop’s body.

do
{
// statements to execute in the loop body
update_expression;
} while (test_expression);
