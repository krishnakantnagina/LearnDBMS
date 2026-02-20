int a = 12, b = 18;

while(b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
}

cout << a;
