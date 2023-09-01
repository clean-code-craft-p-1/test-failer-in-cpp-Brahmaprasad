#include <iostream>
#include <assert.h>
#include<string>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            
            std::cout << GetColorMapRowFromIndex(i * 5 + j, majorColor, minorColor);
        }
    }
    return i * j;
}

std::string GetColorMapRowFromIndex(int index, const char* majorColor[], const char* minorColor[]){
    std::cout << std::setw(2) << index << "|";
    std::cout << std::setw(6) << majorColor[i] << "|";
    std::cout << std::setw(6) << minorColor[i] << "|\n";
}

void TestColorMapAlignment() {
    assert(0, GetColorMapRowFromIndex("  0| White|  Blue|"));
    assert(0, GetColorMapRowFromIndex("  1| White|Orange|"));
    assert(0, GetColorMapRowFromIndex("  2| White| Green|"));
    assert(0, GetColorMapRowFromIndex("  3| White| Brown|"));
    assert(0, GetColorMapRowFromIndex("  4| White| Slate|"));
    assert(0, GetColorMapRowFromIndex("  5|   Red|  Blue|"));
    assert(0, GetColorMapRowFromIndex("  6|   Red|Orange|"));
    assert(0, GetColorMapRowFromIndex("  7|   Red| Green|"));
    assert(0, GetColorMapRowFromIndex("  8|   Red| Brown|"));
    assert(0, GetColorMapRowFromIndex("  9|   Red| Slate|"));
    assert(0, GetColorMapRowFromIndex(" 10| Black|  Blue|"));
    assert(0, GetColorMapRowFromIndex(" 11| Black|Orange|"));
    assert(0, GetColorMapRowFromIndex(" 12| Black| Green|"));
    assert(0, GetColorMapRowFromIndex(" 13| Black| Brown|"));
    assert(0, GetColorMapRowFromIndex(" 14| Black| Slate|"));
    assert(0, GetColorMapRowFromIndex(" 15|Yellow|  Blue|"));
    assert(0, GetColorMapRowFromIndex(" 16|Yellow|Orange|"));
    assert(0, GetColorMapRowFromIndex(" 17|Yellow| Green|"));
    assert(0, GetColorMapRowFromIndex(" 18|Yellow| Brown|"));
    assert(0, GetColorMapRowFromIndex(" 19|Yellow| Slate|"));
    assert(0, GetColorMapRowFromIndex(" 20|Violet|  Blue|"));
    assert(0, GetColorMapRowFromIndex(" 21|Violet|Orange|"));
    assert(0, GetColorMapRowFromIndex(" 22|Violet| Green|"));
    assert(0, GetColorMapRowFromIndex(" 23|Violet| Brown|"));
    assert(0, GetColorMapRowFromIndex(" 24|Violet| Slate|"));
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}