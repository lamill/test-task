# Тестовое задание

### ТЗ 

```
Дана последовательность отсчетов, представляющих собой пары (int Х : int Y). Отсчеты упорядочены по значениям Х.
В этой последовательности могут встречаться непрерывные подпоследовательности, состоящие из идентичных отсчетов. Идентичные отсчеты имеют одинаковые значения Y. 

Реализовать функцию, прореживающую исходную последовательность следующим образом:
В каждой подпоследовательности идентичных отсчетов оставить только первый и последний отсчеты, а так же каждый n-ный отсчет (n > 2). 
Вывести на экран последовательность до и после применения функции прореживания.

* Язык программирования: C++.
* Тип приложения: консольное.
* Входные данные задаются непосредственно в тексте программы (жесткое кодирование).

Пример.
Исходная: (1, 10) (2, 11), (3, 11), (4, 11), (5, 11) (6, 10) (7, 11) (8, 11) (9, 11) (10, 11) (11, 10)
Результат при n = 3: (1, 10) (2, 11), (4, 11), (5, 11) (6, 10) (7, 11) (9, 11) (10, 11) (11, 10)
Результат при n = 4: (1, 10) (2, 11), (5, 11) (6, 10) (7, 11) (10, 11) (11, 10)
```
---
* Параметр n передается аргументом при запуске программы
