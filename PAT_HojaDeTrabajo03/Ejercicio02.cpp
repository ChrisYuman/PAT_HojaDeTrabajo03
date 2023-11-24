#include "Ejercicio02.h"
#include <map> // libreria para almacenar pares de claves donde cada calve es unica
#include <algorithm>

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings) {
    std::map<std::string, std::vector<std::string>> anagramMap;

    for (const string& word : strings) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        anagramMap[sortedWord].push_back(word);
    }

    auto result = new vector<vector<string>>();
    for (auto& entry : anagramMap) {
        result->push_back(entry.second);
    }

    return result;
}
