//41
//64010846
#include <stdio.h>
int find_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int q, w;
	scanf_s("%d %d", &q, &w);
	int ans = find_max(q, w);
	printf("%d",ans);
	return 0;
}