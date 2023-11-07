#include <stdio.h>

// υπολογιζουμε το μηκος της ακολουθιας Collatz για έναν αριθμο
int collatz_seq_l(long long n)
{
    int length = 1;

    // υπολογίζουμε τα μήκη των ακολουθιών για διαφορετικούς αριθμούς
    while (n != 1)
    {
        if (n % 2 == 0) // Αν ο αριθμός είναι άρτιος
        {
            n /= 2; // διαιρούμε με το 2
        }
        else
        {
            n = 3 * n + 1; // αλλιώς πολλαπλασιάζουμε τον αριθμό με 3 και προσθέτουμε 1
        }
        length++; // aυξάνουμε το μήκος της ακολουθίας
    }

    return length;
}

int main()
{
    long long start, end;
    scanf("%lld %lld", &start, &end);

    // Έλεγχος εισόδου: Αν οι αρχικοί αριθμοί είναι μη θετικοί, τυπώνουμε 0 και τερματίζουμε το πρόγραμμα
    if (start <= 0 || end <= 0)
    {
        printf("0\n");
        return 0;
    }

    int max_length = 0;

    // Υπολογίζουμε το μέγιστο μήκος ακολουθίας Collatz για τους αριθμούς από start έως end
    for (long long i = start; i <= end; i++)
    {
        int length = collatz_seq_l(i);
        if (length > max_length)
        {
            max_length = length;
        }
    }

    // Εκτύπωση του μέγιστου μήκους
    printf("%d\n", max_length);

    return 0;
}