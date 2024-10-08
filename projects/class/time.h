#ifndef TIME_H
#define TIME_H
namespace chron {
	class Time {
	private:
		int hours;
		int minutes;
		int seconds;

	public:
		Time(int h, int m, int s);  // объявляем конструктор

    // Объявляем три функции для чтения полей:
		int GetHours() const;
		int GetMinutes() const;
		int GetSeconds() const;
		
	};
	}
	#endif //TIME_H
