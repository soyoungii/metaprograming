#pragma once
#include"Item.h"
#include<vector>
#include<iostream>


class Player
{
private:
	std::vector<Item> equippedItems;
	int attack;
	int defense;

public:
	Player();

	//����
	void equipItem(Item& item);

	//Ż��
	void UnequipItem(Item& item);

	//������ ������ �����ֱ�
	void displayEquippedItems()const;

	//��밡���� ������ �����ֱ�
	void displayAvailableItems(const std::vector<Item>& availableItems)const;

	//Get(������ ī��Ʈ)
	int getEquippedItemCount()const { return equippedItems.size(); }

	//������ Get
	Item& getEquippedItem(int index) { return equippedItems[index]; }

	//������ �����ߴ���?
	bool isItemEquipped(const Item& item)const;
};

