#include <iostream>

int main() {
    unsigned long long totalCells = 0;
    unsigned long long layer = 1;
    unsigned long long layersSum = 0;

    std::cin >> totalCells;

    while (layer * layer < totalCells) {
        totalCells -= layer * layer;
        layersSum += layer;
        ++layer;
    }

    unsigned long long currentFloor = layersSum + (totalCells / layer) + (totalCells % layer > 0 ? 1 : 0);
    unsigned long long cellsOnCurrentLayer = (totalCells % layer == 0) ? layer : totalCells % layer;

    std::cout << currentFloor << ' ' << cellsOnCurrentLayer;

    return 0;
}
