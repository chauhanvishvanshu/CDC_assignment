// Print 1 to n without using loops
void numberPrint(int n) {
    if (n == 0)
        return;
    numberPrint(n - 1);   // first print 1..(n-1)
    cout << n << " ";     // then print n
}
