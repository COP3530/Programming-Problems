## Important Instructions

1. You can code your project in *src* directory. 

2. You are recommended to test your own code by building unit tests in *test-unit/test.cpp*
    - To run the tests, use the following command, 
        `g++ -std=c++14 -Werror -Wuninitialized -o build/test test-unit/test.cpp && build/test`
    - You will have to comment main() when unit testing your code because catch uses its own main().

3. You will submit the *main.cpp* file on canvas. If you are using multiple header files, you will have to include them directly in main.cpp once you are done with all your testing. **Remember, you must submit a single standalone .cpp file for us to grade. Failure to do this will lead to a 20% penalty**.

4. Instructions on how to test io based tests through command line are given in *test-io/readme-io.md*.