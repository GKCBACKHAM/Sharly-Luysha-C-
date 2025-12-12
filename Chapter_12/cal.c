double inner_product(const double *a, const double *b, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }
    return sum;
}