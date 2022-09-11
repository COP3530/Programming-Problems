## Running your code with public io based tests  
 
To test your output locally, open a terminal preferably bash based e.g. **git bash**. Make sure you are in the Project1 directory. Then do the following to see your ouput for each test:  

#### Public Test 1:

`g++ -std=c++14 -Werror -Wuninitialized -o build/test_io src/main.cpp && build/test_io < test-io/input-files/1.txt`
        
#### Public Test N (where N in the test case number):

`g++ -std=c++14 -Werror -Wuninitialized -o build/test_io src/main.cpp && build/test_io < test-io/input-files/N.txt`

<hr>

## Comparing your output with expected output

Alternatively, you can test your output with the expected output for the sample tests using the diff command. The diff command will not generate any output if your output matched the expected output. To run io based tests (At the Project1 directory): 

#### Public Test 1:

Run these three commands:

> g++ -std=c++14 -Werror -Wuninitialized -o build/test_io src/main.cpp    

> build/test_io < test-io/input-files/1.txt > test-io/output-files/1.txt  

> diff -w test-io/expected-output-files/1.txt test-io/output-files/1.txt


##### Or Run this: 

`g++ -std=c++14 -Werror -Wuninitialized -o build/test_io src/main.cpp && build/test_io < test-io/input-files/1.txt > test-io/output-files/1.txt && diff -w test-io/expected-output-files/1.txt test-io/output-files/1.txt`


#### Public Test 2:

`g++ -std=c++14 -Werror -Wuninitialized -o build/test_io src/main.cpp && build/test_io < test-io/input-files/2.txt > test-io/output-files/2.txt && diff -w test-io/expected-output-files/2.txt test-io/output-files/2.txt`

#### Public Test 3:

`g++ -std=c++14 -Werror -Wuninitialized -o build/test_io src/main.cpp && build/test_io < test-io/input-files/3.txt > test-io/output-files/3.txt && diff -w test-io/expected-output-files/3.txt test-io/output-files/3.txt`

#### Public Test 4:

`g++ -std=c++14 -Werror -Wuninitialized -o build/test_io src/main.cpp && build/test_io < test-io/input-files/4.txt > test-io/output-files/4.txt && diff -w test-io/expected-output-files/4.txt test-io/output-files/4.txt`

#### Public Test 5:

`g++ -std=c++14 -Werror -Wuninitialized -o build/test_io src/main.cpp && build/test_io < test-io/input-files/5.txt > test-io/output-files/5.txt && diff -w test-io/expected-output-files/5.txt test-io/output-files/5.txt`

