#define _CRT_SECURE_NO_WARNINGS
#define _CRT_OBSOLETE_NO_WARNINGS    
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
---------------------------------------
Simple duel program based on random number
---------------------------------------
Incomplete code for the class, Understanding programming
Written by ypkim@semyung.ac.kr
School of Computer Science, Semyung University

Required rule:
Actions: Attack, Defense
Action point range: 10-100
Bonus action probability: 20%
*/

/*------------------------------------------------
�Ʒ� main �Լ��� �ּ��� **** ǥ�õ� �κп�
�ʿ��� C�ڵ带 �ۼ��Ͽ� �ϼ��Ͻÿ�.
--------------------------------------------------*/

int main()
{
	// �ʿ��� ���� ���� �� �ʱ�ȭ
	int usr_act, com_act;			// ����� �ൿ, ��ǻ�� �ൿ
	int usr_hp, com_hp;			// ����� ü��, ��ǻ�� ü��
	int round = 0;					// ����
	int usr_ap, com_ap;			// ����� �ൿ����Ʈ, ��ǻ�� �ൿ����Ʈ
	int usr_bonus;  					// ����� ���ʽ� (���ʽ� ���� ó�� ��)
	const int MAX_HP = 250;	// �ִ� ü�� ��

	srand((unsigned)time(NULL));	// ���� �ʱ�ȭ	
	usr_hp = 0;	// ü�°� �ʱ�ȭ
	usr_hp = com_hp = MAX_HP;
	printf("���� �ùķ��̼� ����\n");

	// �ݺ��� ����
	// ���� ������ ����� �Ǵ� ��ǻ�� ü���� 0 �����϶�
	while(usr_hp || com_hp <= 0)
	{
		printf("�ൿ�� ���ÿ�. (0=����, 1=���) \n");
		scanf("%d", &usr_act);

		printf("��ǻ�� ���� ��..");
		com_act = rand() % 2;

		_sleep(1000);	// 1�� ������
		printf("�Ϸ�!\n");

		printf("����%d ����\n", round++);

		// ����ڿ� ��ǻ�� �׼� ����Ʈ ���� ���� (10 - 100)
		usr_ap = rand() % 91 + 10;
		com_ap = rand() % 91 + 10;

		// �Ѵ� ���� �ൿ�� ���� ��
		if (com_act == usr_act)
		{
			// �� �� ������ ���
			if (com_act == 0) 
			{
				printf("�Ѵ� ������\n");
				// ���� ������ ü�� ap��ŭ ���ҽ�Ŵ
				com_hp = com_hp - usr_ap;
				usr_hp = usr_hp - com_ap;
			}
			// �Ѵ� ����� ���
			else
			{
				printf("�Ѵ� �����.\n");
			}
		}
		// ���� ���� ���� ��, ��ǻ�ʹ� ���
		else if (usr_act==0&&com_act==1) 
		{
			// ������� �׼� ����Ʈ�� ��ǻ�� ���� ū ���,
			if (usr_ap>com_ap) 
			{
				com_hp = com_hp - (usr_ap - com_ap);
				printf("��ǻ�Ϳ��� %d�� ������!!", usr_ap - com_ap);
			}
			else {
				printf("�� ���� ����\n");
			}
		}
		// ���� ����ϰ�, ��ǻ�͸� ����������
		else {
			// ��ǻ���� �׼� ����Ʈ�� ����ں��� ū ���,
			if (com_ap>usr_ap) 
			{
				// ����� ü�� �׼� ap ���̸�ŭ ���� ��Ű�� �޽��� ���: "��ǻ�� ���� XX ����!"
				usr_hp = usr_hp - (com_ap - usr_ap);
				printf("�÷��̾�� %d�� ������!!", com_ap - usr_ap);
			}
			else {
				printf("��ǻ�� ���� ����\n");
			}
		}

		// ���ʽ� ó��
		// usr_bonus = ****
		// if (****) {
		// }

		printf("%d ���� ���: ", round);
		printf("���� ü��: ����� %d, ��ǻ�� %d\n", usr_hp, com_hp);
	} // �ݸ� ����  

	  // ü���� ���� YY�� ���ؼ� ����� �޽��� ���: "XX ���常�� YY �¸�!"
	if (usr_hp > com_hp) {
		printf("%d���� ���� �÷��̾� �¸�!!", round);
	}
	else printf("%d���� ���� ��ǻ���� �¸�", round);
	return 0;
}

