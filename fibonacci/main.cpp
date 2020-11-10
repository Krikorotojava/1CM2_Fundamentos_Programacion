

#include <cstdlib>

int fibonacci (int n)
{
switch (n) {
case 2:
return 1;
case 1:
return 1;
case 0:
return 0;
default:
return fibonacci(n - 1) + fibonacci(n - 2);
}
}

int main (void)
{
int num;

for (num = 1;num <= 20; num++) {
printf("%d\n", fibonacci(num));
}

system("PAUSE");
return 0;
}
