/*
The Egyptian football team will be in Russia for the World Cup. Of course,
they all would like to buy souvenirs for their families. Luckily, they met the
king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes
it using different wooden pieces: eyes, mouths and bodies. He can form a nice
Katryoshka using one of the following combinations:

1. Two eyes and one body.
2. Two eyes, one mouth, and one body.
3. One eye, one mouth, and one body.
If the king has n eyes, m mouths and k bodies, what is the largest number of
Katryoshkas he can make?

Input
Only one line containing three numbers n, m and k(0≤n,m,k≤1018) – the number of
eyes, mouths and bodies respectively.
*/

#include <stdio.h>
int main()
{
    long long int eye, mouth, body;
    scanf("%lld %lld %lld %lld", &eye, &mouth, &body, &body);
    long long int mimum;
    if (eye < mouth && eye < body)
        mimum = eye;
    else if (mouth < eye && mouth < body)
        mimum = mouth;
    else
    {
        mimum = body;
    }
    long long int katryoshka = mimum;
    eye = eye - mimum;
    mouth = mouth - mimum;
    body = body - mimum;

    eye = eye / 2;
    if (eye < body)
    {
        katryoshka = katryoshka + eye;
    }
    else
    {
        katryoshka = katryoshka + body;
    }
    printf("%lld\n", katryoshka);
    return 0;
}
