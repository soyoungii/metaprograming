#include "Game.h"

void Game::InitItems()
{
	availableItems.push_back(Item("한손검", "무기", 30, 0));
	availableItems.push_back(Item("방패", "방어구", 0, 20));
	availableItems.push_back(Item("갑옷", "방어구", 0, 30));
	availableItems.push_back(Item("반지", "장신구", 0, 10));
}

void Game::Run()
{
	while (true)
	{
		ShowMenu();

		int choice;
		std::cin >> choice;

		Menu::Option op = static_cast<Menu::Option>(choice);

		switch (op)
		{
		case Menu::Option::EQIP_ITEM:
			EquipItem();
			break;
		case Menu::Option::UNEQUIP_ITEM:
			UnEquipItem();
			break;
		case Menu::Option::DISPLAY_EQUIPPED:
			player->displayEquippedItems();
			break;
		case Menu::Option::DISPLAY_AVAILABLE:
			player->displayAvailableItems(availableItems);
			break;
		case Menu::Option::EXIT:
			std::cout << "종료" << std::endl;
			return;
		default:
			std::cout << "다시 시도" << std::endl;
			break;
		}
	}
	std::cout << std::endl;
}

void Game::ShowMenu()
{
	std::cout << "1. 아이템 장착" << std::endl;
	std::cout << "2. 아이템 장착해제" << std::endl;
	std::cout << "3. 장착된 아이템 목록" << std::endl;
	std::cout << "4. 사용가능한 아이템 목록" << std::endl;
	std::cout << "5. 종료" << std::endl;
	std::cout << "메뉴를 선택하세요";
}

void Game::EquipItem()
{
	std::cout << "장착할 아이템을 선택하세요 (1-" << availableItems.size() << "): " << std::endl;
	player->displayAvailableItems(availableItems);

	int itemIdx;
	std::cin >> itemIdx;

	//선택한 아이템 인덱스가 유효한지
	if (itemIdx >= 1 && itemIdx <= availableItems.size())
	{
		Item& selectItem = availableItems[itemIdx - 1];
		player->equipItem(selectItem);
	}
	else
	{
		std::cout << "다시 시도" << std::endl;
	}
}


void Game::UnEquipItem()
{
	player->displayEquippedItems();

	std::cout << "장착 해제할 아이템을 선택하세요 (1-" << player->getEquippedItemCount() << ")";

	int itemIdx;
	std::cin >> itemIdx;

	if (itemIdx >= 1 && itemIdx <= player->getEquippedItemCount())
	{
		Item& selectItem = player->getEquippedItem(itemIdx - 1); 
		player->UnequipItem(selectItem);
	}
	else
	{
		std::cout << "다시 시도" << std::endl;
	}

}
