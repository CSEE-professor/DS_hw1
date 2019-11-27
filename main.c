#include <stdio.h>

#define min2(a,b) ((a)<(b) ? (a) : (b))
#define min3(a,b,c) min2(min2(a,b),c)

int N, i;
int R, G, B;
int r, g, b;

int main(void)
{
	scanf("%d", &N);
	for(i = 0; i < N; ++i)
	{
		scanf("%d %d %d", &R, &G, &B);
		R += min2(g, b);
		G += min2(r, b);
		B += min2(r, g);
		r = R;
		g = G;
		b = B;
	}
	printf("%d\n", min3(r, g, b));

	return 0;
}
