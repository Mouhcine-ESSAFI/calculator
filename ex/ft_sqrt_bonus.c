#include "lib.h"


float find_sqrt(float number)
{
    float ans = 0;
    float increment = 0.000001;

	while (ans * ans <= number){
		if (ans * ans == number)
			return (ans);
		ans++;
	}

        while (ans * ans >= number) {
            ans -= increment;
        }
    return (ans);
}


