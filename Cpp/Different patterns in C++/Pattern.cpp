// Nested Loops :- Loops within loops are termed as nested loops.

// Pattern Problems :- The easiest way to understand the working of a nested loop is by solving pattern printing problems.

// 1. Print a solid rectangle :-

// *****
// *****
// *****
// *****
// *****

#include <iostream>
using namespace std;

int main()
{
    // size of the square
    int size = 5;
    // outer loop
    for (int i = 0; i < size; i++)
    {
        // inner loop
        for (int j = 0; j < size; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 2. Hollow Square pattern in C++ :-

// *****
// *   *
// *   *
// *   *
// *****

#include <iostream>
using namespace std;

int main()
{
    // size of the square
    int size = 5;
    // outer loop
    for (int i = 0; i < size; i++)
    {
        // inner loop
        for (int j = 0; j < size; j++)
        {
            // print only star in first and last row
            if (i == 0 || i == size - 1)
            {
                cout << "*";
            }
            else
            {
                // print star only at first and last position row
                if (j == 0 || j == size - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}

// 3. Left triangle star pattern in C++ :-

// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main()
{
    // size of the triangle
    int size = 5;
    // loop to print the pattern
    for (int i = 0; i < size; i++)
    {
        // print column
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 4. Right triangle C++ pattern program :-

//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
using namespace std;

int main()
{
    // size of the triangle
    int size = 5;
    // loop to print the pattern
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 1; j < size - i; j++)
        {
            cout << " ";
        }
        // print stars
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 5. Left Down Triangle :- The left down triangle looks like water image of left triangle star pattern.

// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main()
{
    // size of the triangle
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        // print stars
        for (int j = 0; j < size - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

6. Right Down Triangle : -

// *****
//  ****
//   ***
//    **
//     *

#include <iostream>
                         using namespace std;

int main()
{
    // size of the triangle
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // print stars
        for (int j = size; j > i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 7. Hollow triangle star pattern in C++ :-

// *
// **
// * *
// *  *
// *   *
// ******

#include <iostream>
using namespace std;

int main()
{
    // size of the triangle
    int size = 5;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // not last row
            if (i != size)
            {
                if (j == 0 || j == i - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            // last row
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}

// 8. Pyramid star pattern in C++ :-

//     *
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        // print stars
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 9. Reverse pyramid star pattern in C++ :-

// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main()
{
    // size of the pyramid
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // print stars
        for (int k = 0; k < 2 * (size - i) - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 10. Hollow pyramid pattern in C++ :-
//     *
//    * *
//   *   *
//  *     *
// *********

#include <iostream>
using namespace std;

int main()
{
    // size of the pyramid
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        // print stars
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (i == 0 || i == size - 1)
            {
                cout << "*";
            }
            else
            {
                if (k == 0 || k == 2 * i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}

// 11. Diamond star pattern in C++ :-
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    // upside pyramid
    for (int i = 1; i <= size; i++)
    {
        // printing spaces
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        // printing star
        for (int k = 0; k < i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // downside pyramid
    for (int i = 1; i <= size - 1; i++)
    {
        // printing spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // printing star
        for (int k = (size - i) * 2 - 1; k > 0; k--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 12. Hollow diamond star pattern in C++ :-
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    // upside pyramid
    for (int i = 1; i <= size; i++)
    {
        // printing spaces
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        // printing star
        for (int k = 0; k < i * 2 - 1; k++)
        {
            if (k == 0 || k == 2 * i - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    // downside triangle
    for (int i = 1; i < size; i++)
    {
        // printing spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // printing star
        for (int k = (size - i) * 2 - 1; k >= 1; k--)
        {
            if (k == 1 || k == (size - i) * 2 - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// 13. Hourglass star pattern in C++ :-
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    // reversed pyramid star pattern
    for (int i = 0; i < size; i++)
    {
        // printing spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // printing star
        for (int k = 0; k < (size - i) * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // pyramid star pattern
    for (int i = 2; i <= size; i++)
    {
        // printing spaces
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        // printing star
        for (int k = 0; k < i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 14. Right pascal star pattern :-
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main()
{
    // right pasal triangle
    int size = 5;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 1; i <= size - 1; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 15. Left pascal star pattern :-
//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *

#include <iostream>
using namespace std;

int main()
{
    // left pasal triangle
    int size = 5;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= size - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < size - i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 16. Heart pattern :-
//  ***   ***
// ***** *****
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

#include <iostream>
using namespace std;

int main()
{
    // heart star pattern
    int size = 6;

    for (int i = size / 2; i < size; i += 2)
    {
        // print first spaces
        for (int j = 1; j < size - i; j += 2)
        {
            cout << " ";
        }
        // print first stars
        for (int j = 1; j < i + 1; j++)
        {
            cout << "*";
        }
        // print second spaces
        for (int j = 1; j < size - i + 1; j++)
        {
            cout << " ";
        }
        // print second stars
        for (int j = 1; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // lower part
    // inverted pyramid
    for (int i = size; i > 0; i--)
    {
        for (int j = 0; j < size - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i * 2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 17. Plus star pattern in C++ :-
//   *
//   *
// *****
//   *
//   *

#include <iostream>
using namespace std;

int main()
{
    // size of plus, use odd number
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // print only stars in middle row
            if (i == size / 2)
            {
                cout << "*";
            }
            // other than middle row, print star only at index size/2
            else
            {
                if (j == size / 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}

// 18. Cross pattern program in C++ :-
// *   *
//  * *
//   *
//  * *
// *   *

#include <iostream>
using namespace std;

int main()
{
    // size of cross, use odd number
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j || i + j == size - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// 19. Left triangle number pattern :-
// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

int main()
{

    int size = 5;
    // loop to print the pattern
    for (int i = 0; i < size; i++)
    {
        // print column
        for (int j = 0; j <= i; j++)
        {
            cout << (j + 1);
        }
        cout << "\n";
    }
    return 0;
}

// 20. Right triangle number pattern :-
//     1
//    12
//   123
//  1234
// 12345

#include <iostream>
using namespace std;

int main()
{

    int size = 5;
    // loop to print the pattern
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 1; j < size - i; j++)
        {
            cout << " ";
        }
        // print number
        for (int k = 0; k <= i; k++)
        {
            cout << (k + 1);
        }
        cout << "\n";
    }
    return 0;
}

// 21. Number pyramid pattern :-
//     1
//    123
//   12345
//  1234567
// 123456789

#include <iostream>
using namespace std;

int main()
{

    int size = 5;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        // print number
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << (k + 1);
        }
        cout << "\n";
    }
    return 0;
}

// 22. Number pyramid reverse pattern :-
// 123456789
//  1234567
//   12345
//    123
//     1

#include <iostream>
using namespace std;

int main()
{

    int size = 5;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // print number
        for (int k = 0; k < 2 * (size - i) - 1; k++)
        {
            cout << (k + 1);
        }
        cout << "\n";
    }
    return 0;
}

// 23. Hollow number pyramid pattern :-
//     1
//    1 2
//   1   2
//  1     2
// 123456789

#include <iostream>
using namespace std;

int main()
{

    int size = 5;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        // print number
        int num = 1;
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (i == 0 || i == size - 1)
            {
                cout << num++;
            }
            else
            {
                if (k == 0 || k == 2 * i)
                {
                    cout << num++;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}

// 24. Number diamond pattern :-
//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567
//   12345
//    123
//     1

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int num = 1;
    // upside pyramid
    for (int i = 1; i <= size; i++)
    {
        // printing spaces
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        // printing number
        for (int k = 0; k < i * 2 - 1; k++)
        {
            cout << num++;
        }
        // set the number to 1
        num = 1;
        cout << "\n";
    }
    // downside pyramid
    for (int i = 1; i <= size - 1; i++)
    {
        // printing spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // printing number
        for (int k = (size - i) * 2 - 1; k > 0; k--)
        {
            cout << num++;
        }
        // set num to 1
        num = 1;
        cout << "\n";
    }
    return 0;
}

// 25. Hollow number diamond pattern :-
//     1
//    1 2
//   1   2
//  1     2
// 1       2
//  1     2
//   1   2
//    1 2
//     1

#include <iostream>
using namespace std;

int main()
{
    int size = 5, num = 1;
    // upside pyramid
    for (int i = 1; i <= size; i++)
    {
        // printing spaces
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        // printing number
        for (int k = 0; k < i * 2 - 1; k++)
        {
            if (k == 0 || k == 2 * i - 2)
            {
                cout << num++;
            }
            else
            {
                cout << " ";
            }
        }
        // set the number to 1
        num = 1;
        cout << "\n";
    }
    // downside triangle
    for (int i = 1; i < size; i++)
    {
        // printing spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // printing number
        for (int k = (size - i) * 2 - 1; k >= 1; k--)
        {
            if (k == 1 || k == (size - i) * 2 - 1)
            {
                cout << num++;
            }
            else
            {
                cout << " ";
            }
        }
        // set the number to 1
        num = 1;
        cout << "\n";
    }
    return 0;
}

// 26. Alphabet pyramid pattern :-

//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI

#include <iostream>
using namespace std;

int main()
{

    int size = 5, alpha = 65;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        // print alphabets
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << ((char)(alpha + k));
        }
        cout << "\n";
    }
    return 0;
}

// 27. Reverse alphabet pyramid pattern :-

// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A

#include <iostream>
using namespace std;

int main()
{
    // size of the square
    int size = 5, alpha = 65;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // print alphabets
        for (int k = 0; k < 2 * (size - i) - 1; k++)
        {
            cout << ((char)(alpha + k));
        }
        cout << "\n";
    }
    return 0;
}

// 28. Hollow alphabet pyramid pattern :-
//     A
//    B C
//   D   E
//  F     G
// HIJKLMNOP

#include <iostream>
using namespace std;

int main()
{

    int size = 5, alpha = 65, num = 0;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        // print alphabets
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (i == 0 || i == size - 1)
            {
                cout << ((char)(alpha + num++));
            }
            else
            {
                if (k == 0 || k == 2 * i)
                {
                    cout << ((char)(alpha + num++));
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}

// 29. Alphabet diamond pattern :-

//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int alpha = 65;
    int num = 0;
    // upside pyramid
    for (int i = 1; i <= size; i++)
    {
        // printing spaces
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        // printing alphabets
        for (int k = 0; k < i * 2 - 1; k++)
        {
            cout << ((char)(alpha + num++));
        }
        // set the number to 0
        num = 0;
        cout << "\n";
    }
    // downside pyramid
    for (int i = 1; i <= size - 1; i++)
    {
        // printing spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // printing alphabets
        for (int k = (size - i) * 2 - 1; k > 0; k--)
        {
            cout << ((char)(alpha + num++));
        }
        // set num to 0
        num = 0;
        cout << "\n";
    }
    return 0;
}

// 30. Hollow alphabet diamond pattern :-

//     A
//    A B
//   A   B
//  A     B
// A       B
//  A     B
//   A   B
//    A B
//     A

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int alpha = 65;
    int num = 0;
    // upside pyramid
    for (int i = 1; i <= size; i++)
    {
        // printing spaces
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        // printing alphabets
        for (int k = 0; k < i * 2 - 1; k++)
        {
            if (k == 0 || k == 2 * i - 2)
            {
                cout << ((char)(alpha + num++));
            }
            else
            {
                cout << " ";
            }
        }
        // set the number to 0
        num = 0;
        cout << "\n";
    }
    // downside triangle
    for (int i = 1; i < size; i++)
    {
        // printing spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // printing alphabets
        for (int k = (size - i) * 2 - 1; k >= 1; k--)
        {
            if (k == 1 || k == (size - i) * 2 - 1)
            {
                cout << ((char)(alpha + num++));
            }
            else
            {
                cout << " ";
            }
        }
        // set the number to 0
        num = 0;
        cout << "\n";
    }
    return 0;
}

// 30 different patterns in C++ using stars, numbers, and alphabets.