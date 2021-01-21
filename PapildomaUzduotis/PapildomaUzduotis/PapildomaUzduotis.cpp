// PapildomaUzduotis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Metodai.h"
#include <string>
#include "Zodis.h"
#include <map>

int main()
{
    std::map<string, Zodis> words;
    std::map<string, Zodis> webSites;

    int wordsCount = ReadFromFile(words, "Tekstas.txt", false);
    int reapeatedWordsMoreThan2 = WriteToFile(words, "Rezultatai.txt", false);

    std::cout << "Tekstinio failo Tekstas.txt nuskaitytu zodziu skaicius: " << wordsCount << "\n";
    std::cout << "Suskaiciuotas unikaliu zodziu skaicius: " << words.size() << "\n";
    std::cout << "Pasikartojantys 2 ir daugiau zodziu skaicius: " << reapeatedWordsMoreThan2 << "\n";
    std::cout << "Zodziai, pasikartojantys 2 ir daugiau kartu, issaugoti faile \"Rezultatai.txt\". \n\n\n";

    wordsCount = ReadFromFile(webSites, "Tekstas.txt", true);
    WriteToFile(webSites, "Nuorodos.txt", true);

    std::cout << "Tekstinio failo Tekstas.txt nuskaitytu nuorodu skaicius: " << wordsCount << "\n";
    std::cout << "Rastos nuorodos, issaugotos faile \"Nuorodos.txt:\" \n";

    system("pause");
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
