unsigned int nod( unsigned int a, unsigned int b) {
    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    };
    return a;
}