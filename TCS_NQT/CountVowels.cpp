string str = "hello";
int count = 0;

for(char ch : str)
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        count++;

cout << count;
