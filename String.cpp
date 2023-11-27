#include <iostream>
#include <string.h>
using namespace std;
void revstring(char *abc) {
  
    int i, len, temp;
    len = strlen(abc);

    for(i = 0;i < len/2;i++)
    {
        temp = abc[i];
        abc[i] = abc[len - i - 1];
        abc[len - i - 1] = temp;
    }
}
int main()
{
    char abc[50] = "paras";
    cout << "Before reversing the string: " << abc;

    revstring(abc);
    
    cout<< "\nAfter reversing the string: " << abc;
    return 0;
}
