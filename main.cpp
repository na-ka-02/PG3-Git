#include <stdio.h>
#include"MeetFriend.h"
#include"AngryFriend.h"
#include"DontMeetFriend.h"

int main()
{
	MeetFriend* meet_friend[4];

	//�����t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			meet_friend[i] = new MeetFriend;
		}
		else
		{
			meet_friend[i] = new DontMeetFriend;

		}

	}

	//�U���t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
		meet_friend[i]->Attack();
	}
	//�j���t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
		delete meet_friend[i];
	}
	return 0;
}