//Loops-Loops are the concept of coding where they are executed till the condition is true.They save time, reduce errors,make code readable, and most importantly they stick to the DRY concept (Don't repeat yourself).
/*
Loops are of 3 types in cpp->for, while, do-while(not used much so not mentioning).
    -for loop:When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop.
        Syntax-
            for (initializing the looping variable;condition on which the loop runs;increament/decreament)
            {
                //code to be executed.
            }
        example-
            for (int i=0;i<5;i++)
            {
                cout<<i<<",";
            }
            output-0,1,2,3,4
    -while loop:
        Syntax-
            while (condition){
                //code block to be executed.
            }
        
        example-
            int i=0;
            while (i < 5) {
                cout << i<<",";
                i++;
            }
            output-0,1,2,3,4
*/

        for(i=0;i<=5;i++)
        {
            cout<<"Hello\n";
        }

        //Labels in cpp.
        /*    int n;
            cout<<"Begin"<<endl<<"Enter an number:";
            cin>>n;

            if (n%2==0){
                goto label1;
            }
            else{
                goto label2;
            }
            label1:{
                cout<<"even";
                return 0;
            }
            label2:{
                cout<<"Odd";
            }
            cout<<endl<<"the program ran successfully";
        */