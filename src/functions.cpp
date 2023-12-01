int max (int i1, int i2) {
    if (i1 > i2) return i1;

    return i2;
}

int sum(int a1, int a2) {
    return a1+a2;
}

int square(int a, int b) {
    if ((a < 0) || (b < 0)) {
        return 1;
    }
    return a*b;
}