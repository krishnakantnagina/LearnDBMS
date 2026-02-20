int n = 153, original = n, sum = 0;

while(n > 0) {
    int digit = n % 10;
    sum += digit * digit * digit;
    n /= 10;
}

if(sum == original)
    cout << "Armstrong";
else
    cout << "Not Armstrong";
