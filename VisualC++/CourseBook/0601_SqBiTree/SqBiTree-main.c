#include <stdio.h>
#include "Status.h"     //**��01 ����**//
#include "SqBiTree.h"   //**��06 ���Ͷ�����**//

// ���Ժ�������ӡԪ��
Status PrintElem(TElemType c) {
    printf("%c", c);
    return OK;
}


int main(int argc, char* argv[]) {
    SqBiTree T;
    
    printf("���������������� InitBiTree \n");
    {
        printf("�� ��ʼ���ն����� T ...\n");
        InitBiTree(T);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� CreateBiTree \n");
    {
        printf("�� ���������д��������� T ...\n");
        CreateBiTree(T, "TestData_Pre.txt");
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� BiTreeDepth \n");
    {
        printf("�� ������ T �����Ϊ��%d \n", BiTreeDepth(T));
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� PrintTree \n");
    {
        printf("�� ���������Ľṹ��ӡ�� T ...\n");
        PrintTree(T);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� PreOrderTraverse \n");
    {
        printf("�� ǰ����������� T = ");
        PreOrderTraverse(T, PrintElem);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� InOrderTraverse \n");
    {
        printf("�� ������������� T = ");
        InOrderTraverse(T, PrintElem);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� PostOrderTraverse \n");
    {
        printf("�� ������������� T = ");
        PostOrderTraverse(T, PrintElem);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� LevelOrderTraverse \n");
    {
        printf("�� ������������� T = ");
        LevelOrderTraverse(T, PrintElem);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� Value \n");
    {
        TElemType e = 'F';
        printf("�� ��� %c ��ֵΪ %c\n", e, Value(T, e));
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� Assign \n");
    {
        TElemType e = 'F';
        TElemType value = 'X';
        printf("�� ����� %c ��ֵΪ %c ��T = \n", e, value);
        Assign(T, e, value);
        PrintTree(T);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� Root \n");
    {
        printf("�� T �ĸ����Ϊ %c\n", Root(T));
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� Parent \n");
    {
        TElemType e = 'E';
        printf("�� ��� %c ��˫��Ϊ��%c \n", e, Parent(T, e));
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� LeftChild��RightChild \n");
    {
        TElemType e = 'E';
        printf("�� ��� %c �����ӽ��ֵΪ��%c ���Һ��ӽ��ֵΪ��%c\n", e, LeftChild(T, e), RightChild(T, e));
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� LeftSibling \n");
    {
        TElemType e = 'I';
        printf("�� ��� %c �����ֵ�Ϊ��%c\n", e, LeftSibling(T, e));
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� RightSibling \n");
    {
        TElemType e = 'H';
        printf("�� ��� %c �����ֵ�Ϊ��%c\n", e, RightSibling(T, e));
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� InsertChild \n");
    {
        SqBiTree c1, c2;
        TElemType p1 = 'D';
        TElemType p2 = 'E';
        
        printf("�� �������� c1 ...\n");
        InitBiTree(c1);
        CreateBiTree(c1, "TestData_c1.txt");
        PrintTree(c1);
    
        printf("�� �������� c2 ...\n");
        InitBiTree(c2);
        CreateBiTree(c2, "TestData_c2.txt");
        PrintTree(c2);
    
        printf("�� ������ c1 ����Ϊ������ T �� %c ���������� ...\n", p1);
        InsertChild(T, p1, 1, c1);
        PrintTree(T);
    
        printf("�� ������ c2 ����Ϊ������ T �� %c ���������� ...\n", p2);
        InsertChild(T, p2, 0, c2);
        PrintTree(T);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� DeleteChild \n");
    {
        TElemType p1 = 'D';
        TElemType p2 = 'E';
    
        printf("�� ɾ�������� T �� %c ���������� ...\n", p1);
        DeleteChild(T, p1, 1);
        PrintTree(T);
    
        printf("�� ɾ�������� T �� %c ���������� ...\n", p2);
        DeleteChild(T, p2, 0);
        PrintTree(T);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� ClearBiTree��BiTreeEmpty \n");
    {
        printf("�� ���ǰ��");
        BiTreeEmpty(T) ? printf("T Ϊ�գ�\n") : printf("T ��Ϊ�գ�\n");
        
        ClearBiTree(T);
    
        printf("�� ��պ�");
        BiTreeEmpty(T) ? printf("T Ϊ�գ�\n") : printf("T ��Ϊ�գ�\n");
    }
    PressEnterToContinue(debug);
    
    return 0;
}