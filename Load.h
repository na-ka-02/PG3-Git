#pragma once
#include "DeathEater.h"

//�f�����^�[�N���X�̒�`
class Load :public DeathEater
{
public:/*�����o�ϐ�*/
	//�R���X�g���N�^(�錾)
	Load();
	//�f�X�g���N�^(�錾)
	~Load();
	//�U��(�錾)
	void Attack()override;

private:/*�����o�ϐ�*/
};