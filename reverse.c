#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct sLinkNode
{
	struct sLinkNode* pNext;
}LinkNode;

typedef struct sLinkList
{
	int m_Size;
	struct sLinkNode pHeader;
}LinkList;

void Reverse_LinkList(LinkList* list)
{
	LinkNode* pPerv = NULL;
	LinkNode* PCurrent = &list->pHerade;
	LinkNode* pNext = NULL;
	
	while(pCurrent != NULL)
	{
		pNext = PCurrent->pNext;
		pCurrent->pNext = pPrev;
		pPerv = pCurrent;
		pCurrent = pNext;
	}
	&list->pHeader = pPerv;
}

int main() {

	

	system("pause");
	return EXIT_SUCCESS;
}