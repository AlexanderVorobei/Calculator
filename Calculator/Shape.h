/*
��������� #pragma once �������� ��������� �� ���������� �����������, � ������ ����� �� �������������� ���������� �������������, � ����� ������ ��������������.
��������� #ifndef � #define �������� ������������ �����������, � ������ �� ������������� � ������ ��������� ����� ��������� ��� ���� ������������.
*/

#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape
{
public:

	/*
	� ������� ����������� ������� �� ����� ������� ����� ������� ����� ��������� ������������ ���.
	�����, ����� ������������ �����-�� ������ ����� � ����������� �������� ����� ������ � ��������������
	���-�� ������� �������� ������ ���-�� �� �������.
	������ ����� ����� ���� � �� �� ������ �� ����� ���� ����� �� �������. � ���� ����� ����������� �����������.
	*/

	virtual float Area() = 0;
	virtual float Perimeter() = 0;
	
};






#endif SHAPE_H

