// escrot
// Utility for making escrot easy to use
// Protected by MIT License
#include <stdlib.h>
#include <iostream>
using namespace std;
int main( int argc, char *argv[] )
{
	system("scrot -s -e 'xclip -selection clipboard -target image/png -in $f'");
	return 0;
}
