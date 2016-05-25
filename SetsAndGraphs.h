#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

///Объявление типа данных - множество
typedef std::vector<int> Set;

///Объявления типа данных - график
typedef std::vector< std::pair<int, int> > Graph;

/// Прототипы функций с графиками
Graph graphIntersection(Graph, Graph);
Graph graphDifference(Graph, Graph);
Graph graphSymDiff(Graph, Graph);
Graph graphUnion(Graph, Graph);
Graph graphInversion(Graph);
Graph graphComposition(Graph, Graph);

/// Прототипы функций со множествами
Set setIntersection(Set, Set);
Set setDifference(Set, Set);
Set setSymDiff(Set, Set);
Set setUnion(Set, Set);
Graph setCartesian(Set, Set);

/** Шаблон функции, которая определяет, содержится ли элемент в множестве.
 *  Аргументы функции - множество элементов dset и элемент element.
 *  Функция возвращает true, если элемент содержится в множестве,
 *  и false, если не содержится.
 */
template<class T>
bool contains(std::vector<T> dset, T element)
{
    for (std::size_t i = 0; i < dset.size(); i++) ///обход по всем элементам графика dgraph
        if (dset.at(i) == element)
            return true;
    return false;
}

///Функция корректного считывания с клавиатуры числового значения
void readInteger(int& number);

///Функция корректного считывания с клавиатуры пары чисел
void readPair(std::pair<int,int>& nPair);
