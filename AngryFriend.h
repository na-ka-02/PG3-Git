#pragma once
#include "MeetFriend.h"

//�f�����^�[�N���X�̒�`
class AngryFriend :public MeetFriend
{
public:/*�����o�ϐ�*/
	//�R���X�g���N�^(�錾)
	AngryFriend();
	//�f�X�g���N�^(�錾)
	~AngryFriend();
	//�U��(�錾)
	void Attack()override;

private:/*�����o�ϐ�*/
};