unsigned long long fact (unsigned long long n) {
    unsigned long long a[10000] = {0};
    unsigned long long i;
    if (n == 0) return 1;
    else {
    a[0]=1;
    for (i = 1; i < n; i++) {
        a[i]= a[i-1]*(i+1);
    }
    return a[n-1];
    }
}