#include "Dementor.h"

NoFriend::NoFriend()
{
	printf("友達の家に遊びに行くよ\n");
}

NoFriend::~NoFriend()
{
	printf("友達と会うのをあきらめた\n");
}

void NoFriend::FriendOver()
{
	printf("友達が待合場所にいないよ\n");
}
