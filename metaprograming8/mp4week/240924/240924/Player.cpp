#include "Player.h"

Player::Player():attack(0),defense(0){}

void Player::equipItem(Item& item)
{
    //장착을 해야하는데 이미 장착되어있을 경우 함수 종료
    if (isItemEquipped(item))
    {
        std::cout << "해당 아이템은 이미 장착 되어있습니다" << std::endl;
        return;
    }

    //장착
    equippedItems.push_back(item);

    //장착한 걸로 바꿈
    item.setEquipped(true);

    //공격력 증가
    attack += item.getAttack();

    //방어력 증가
    defense += item.getDefense();

    //아이템 장착 출력
    std::cout << item.getName() << "(" << item.getType() << ") 아이템이 장착되었습니다" << std::endl;
}

void Player::UnequipItem(Item& item)
{
    //반복자로 벡터를 돌면서
    for (auto it = equippedItems.begin(); it != equippedItems.end();)
    {
        //찾으려고 하는 아이템이 아이템의 이름과 동일하다면
        if ((*it).getName() == item.getName())
        {
            //공격력 빼고
            attack -= (*it).getAttack();
            //방어력 빼고
            defense -= (*it).getDefense();
            //장착해제로 바꾸고
            (*it).setEquipped(false);
            //벡터에서 제거
            equippedItems.erase(it);

            std::cout << item.getName() << "(" << item.getType() << ") 아이템이 장착 해제되었습니다" << std::endl;
            return;
        }
    } //end of for(it)
    std::cout << item.getName() << "(" << item.getType() << ") 아이템이 장착되어 있지 않습니다"<< std::endl;

}

void Player::displayEquippedItems() const
{
    //비어있으면
    if (equippedItems.empty())
    {
        std::cout << "장착된 아이템이 없습니다." << std::endl;
        return;
    }
    std::cout << "<장착된 아이템 목록>" << std::endl;

    //돌면서 출력
    for (const auto& item : equippedItems)
    {
        std::cout << item.getName() << "(" << item.getType() << ") = 공격력: "
            << item.getAttack() << ", 방어력: " << item.getDefense();
        //아이템이 장착되어 있으면
        if (item.isEquipped())
        {
            std::cout << "<장착중>";
        }
        std::cout << std::endl;
    }
}

//사용가능한 아이템 출력
void Player::displayAvailableItems(const std::vector<Item>& availableItems) const
{
    if (availableItems.empty())
    {
        std::cout << "사용가능한 아이템이 없습니다" << std::endl;
        return;
    }

    std::cout << "<<사용가능한 아이템 목록>"<<std::endl;

    for (size_t i = 0; i < availableItems.size(); i++)
    {
        const Item& item = availableItems[i];
        std::cout << i + 1 << ". " << item.getName() << "(" << item.getType() << ") = 공격력: "
            << item.getAttack() << ", 방어력: " << item.getDefense();

        //장착중이면?
        if (isItemEquipped(item))
        {
            std::cout << "<장착중>";
        }
        std::cout << std::endl;
    }
}


bool Player::isItemEquipped(const Item& item) const
{
    for (const auto& equippedtem : equippedItems)
    {
        if (equippedtem.getName() == item.getName()) 
        {
            return true;
        }
    }
    return false;
}
