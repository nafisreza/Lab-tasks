#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

class RunwayReservationSystem
{
private:
    BinarySearchTree<int> reservations;

    bool isTimeAvailable(int time)
    {
        for (int i = time - 3; i <= time + 3; i++)
        {
            if (reservations.root() != nullptr && reservations.root()->find(i))
            {
                return false;
            }
        }
        return true;
    }

public:
    bool makeReservation(int time)
    {
        if (isTimeAvailable(time))
        {
            reservations.insert(time);
            return true;
        }
        return false;
    }

    void printReservations()
    {
        if (reservations.root() == nullptr)
        {
            cout << "No reservations" << endl;
        }
        else
        {
            reservations.inorder_traversal(reservations.root());
            cout << endl;
        }
    }
};

int main()
{
    RunwayReservationSystem rrs;
    int time;

    while (true)
    {
        cout << "Enter reservation time: ";
        cin >> time;

        if (time == -1)
            break;

        if (rrs.makeReservation(time))
        {
            cout << "Reservation successful. Current reservations: ";
        }
        else
        {
            cout << "Reservation failed. Current reservations: ";
        }

        rrs.printReservations();
    }

    return 0;
}
