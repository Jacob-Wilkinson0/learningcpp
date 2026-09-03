
int main() {
    char c = 'x';
    int i1 = c; // i1 gets the value 120, which is the integer value of 'x' in ASCII.
    int i2 = c + 1000; // The char c is PROMOTED to int, i2 = 1120
    double d = i2 + 7.3;  // The integer i2 is promoted to a floating point value, d = 1127.3


    // widening conversion
    // This conversion preserves information
    char a = 'a';
    int ia = a;

    // narrowing conversion
    // This conversion may lose information
    // Chars can hold only small integer values. Often, a char is a byte whereas an int is 4 bytes;
    int ix = 1000;
    char x = ix;
