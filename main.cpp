#include <stdio.h>
#include"MeetFriend.h"
#include"AngryFriend.h"
#include"DontMeetFriend.h"

int main()
{
<<<<<<< Updated upstream
	FriendEnjoy* death_eaters[4];
=======
	MeetFriend* meet_friend[4];
>>>>>>> Stashed changes

	//�����t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
<<<<<<< Updated upstream
		{
			death_eaters[i] = new NoFriend;
		}
		else
		{
			death_eaters[i] = new FriendAngrey;
		}
=======

			meet_friend[i] = new MeetFriend;

		else

			meet_friend[i] = new DontMeetFriend;

>>>>>>> Stashed changes
	}

	//�U���t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
<<<<<<< Updated upstream
		death_eaters[i]->FriendOver();
=======
		meet_friend[i]->Attack();
>>>>>>> Stashed changes
	}
	//�j���t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
		delete meet_friend[i];
	}
	return 0;
}