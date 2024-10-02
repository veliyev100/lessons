
#include <iostream>
#include <set>
#include <unordered_set>
#include <string>

// Функция для очистки слова от неалфавитных символов и приведения к нижнему регистру
std::string clean_word(const std::string& word) {
    std::string result;
    for (char c : word) {
        if (std::isalpha(c)) {
            result += std::tolower(c);
        }
    }
    return result;
}

int main() {
    // Множество слов, связанных с любовью
    std::unordered_set<std::string> love_words = {"любовь", "люблю", "любить", "влюблен", "влюблена"};

    // Множество для хранения всех уникальных слов, связанных с любовью
    std::set<std::string> found_love_words;

    // Множество для подсчета дублирующихся слов, связанных с любовью
    std::set<std::string> duplicate_words;

    std::string word;
    // Ввод текста с консоли
    while (std::cin >> word) {
        // Очищаем и нормализуем слово
        word = clean_word(word);

        // Проверяем, связано ли слово с любовью
        if (love_words.find(word) != love_words.end()) {
            // Если слово уже встречалось, заносим его в дубликаты
            if (!found_love_words.insert(word).second) {
                duplicate_words.insert(word);
            }
        }
    }

    // Вывод всех дублирующихся слов, связанных с любовью
    for (const auto& word : duplicate_words) {
        std::cout << word << " ";
    }

    return 0;
}
