/*
Jump statements-break, continue, goto.
Lets see break-
    Break-It just breaks out of the function instantly without executing below code of that block.
    For example-
        for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        } 
        cout << i << "\n";
        in the above code, when i's value becomes 4 then the loop execution automatically stops itself and jumps out of the block.
    Continue-The continue statement breaks one iteration in the loop(if a specific condition occurs) and then 'continues' with the next iteration of the loop.
    For example-
        int main() {
            for (int i = 0; i < 10; i++) {
                if (i == 4) {
            continue;
            }
            cout << i ;
            }   
            return 0;
        }
        now the above piece of code outputs, ->0 1 2 3 5 6 7 8 9    when the inside if condition became true and the continue statement got executed then it didn't print i at that instance and performed its normal looping behaviour.

    You can use 'break' and 'continue' with loops, conditions, functions or any valid programming concept.
*/