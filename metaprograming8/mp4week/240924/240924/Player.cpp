#include "Player.h"

Player::Player():attack(0),defense(0){}

void Player::equipItem(Item& item)
{
    //������ �ؾ��ϴµ� �̹� �����Ǿ����� ��� �Լ� ����
    if (isItemEquipped(item))
    {
        std::cout << "�ش� �������� �̹� ���� �Ǿ��ֽ��ϴ�" << std::endl;
        return;
    }

    //����
    equippedItems.push_back(item);

    //������ �ɷ� �ٲ�
    item.setEquipped(true);

    //���ݷ� ����
    attack += item.getAttack();

    //���� ����
    defense += item.getDefense();

    //������ ���� ���
    std::cout << item.getName() << "(" << item.getType() << ") �������� �����Ǿ����ϴ�" << std::endl;
}

void Player::UnequipItem(Item& item)
{
    //�ݺ��ڷ� ���͸� ���鼭
    for (auto it = equippedItems.begin(); it != equippedItems.end();)
    {
        //ã������ �ϴ� �������� �������� �̸��� �����ϴٸ�
        if ((*it).getName() == item.getName())
        {
            //���ݷ� ����
            attack -= (*it).getAttack();
            //���� ����
            defense -= (*it).getDefense();
            //���������� �ٲٰ�
            (*it).setEquipped(false);
            //���Ϳ��� ����
            equippedItems.erase(it);

            std::cout << item.getName() << "(" << item.getType() << ") �������� ���� �����Ǿ����ϴ�" << std::endl;
            return;
        }
    } //end of for(it)
    std::cout << item.getName() << "(" << item.getType() << ") �������� �����Ǿ� ���� �ʽ��ϴ�"<< std::endl;

}

void Player::displayEquippedItems() const
{
    //���������
    if (equippedItems.empty())
    {
        std::cout << "������ �������� �����ϴ�." << std::endl;
        return;
    }
    std::cout << "<������ ������ ���>" << std::endl;

    //���鼭 ���
    for (const auto& item : equippedItems)
    {
        std::cout << item.getName() << "(" << item.getType() << ") = ���ݷ�: "
            << item.getAttack() << ", ����: " << item.getDefense();
        //�������� �����Ǿ� ������
        if (item.isEquipped())
        {
            std::cout << "<������>";
        }
        std::cout << std::endl;
    }
}

//��밡���� ������ ���
void Player::displayAvailableItems(const std::vector<Item>& availableItems) const
{
    if (availableItems.empty())
    {
        std::cout << "��밡���� �������� �����ϴ�" << std::endl;
        return;
    }

    std::cout << "<<��밡���� ������ ���>"<<std::endl;

    for (size_t i = 0; i < availableItems.size(); i++)
    {
        const Item& item = availableItems[i];
        std::cout << i + 1 << ". " << item.getName() << "(" << item.getType() << ") = ���ݷ�: "
            << item.getAttack() << ", ����: " << item.getDefense();

        //�������̸�?
        if (isItemEquipped(item))
        {
            std::cout << "<������>";
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
