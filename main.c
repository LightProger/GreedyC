#include <stdio.h>
#include <math.h>

/*
 *  ����: ����⪨ ��������� 25, 10, 5, 1 業�
 *  �ணࠬ�� ������:
 *  ������ ���짮��⥫�, ᪮�쪮 ᤠ� �㦭� �뤠��
 *  ������� �������쭮� ������⢮ �����, � ������� ������ ����� �� ᤥ����
 */


int main(void) {

    //����⠭��
    #define QUARTER 25
    #define DIME 10
    #define NICKEL 5
    #define PENNY 1

    // ��६����
    float owed;
    int centCount;
    int quarterCount;
    int dimeCount;
    int nickelCount;
    int pennyCount;
    int rest;

    printf("�ਢ��! ����쪮 � ������ ��� ᤠ�?");
    printf("\n");

    // ���� ������
    scanf("%f", &owed);

    if (owed <= 0) {
        printf("� ��� ��祣� �� ������!\n");
    }
    else if(owed > 0){
        // ��ॢ���� ������� � 業��
        centCount = (int) round (owed * 100);

        // ��⠥� ᪮�쪮 �㦭� ����⮪ ��������� 25 業⮢
        quarterCount = centCount / QUARTER;

        // ��⠥� ᪮�쪮 �㦭� ����⮪ ��������� 10 業⮢
        dimeCount = quarterCount / DIME;

        // ��⠥� ᪮�쪮 �㦭� ����⮪ ��������� 5 業⮢
        nickelCount = dimeCount / NICKEL;

        // ��⠥� ᪮�쪮 �㦭� ����⮪ ��������� 1 業�
        pennyCount = nickelCount / PENNY;

        // �����뢠�� � �뢮��� �� �����
        rest = quarterCount + dimeCount + nickelCount + pennyCount;
        printf("%i", rest);
        printf("\n");
    }
    return 0;
}


