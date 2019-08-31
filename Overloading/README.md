# Предефиниране на оператори

В C ++ можем да накараме операторите да работят за дефинирн от потребителя клас. 

# Задача 1: 

Заместете операциите в класовете Num, Point, Line с предефинирани оператори.

## Предефиниране на оператор (+,-,/.*)

Пример:

```cpp
Num Num::operator-(const Num& b)
{
	return this->num - b.num;
}
```

## Предефиниране на оператор (<, >, <=, >=, ==, etc.)

```cpp
bool Line::operator<(const Line& d)
{
	Line obj = d;
	if (this->length() < obj.length()) {
		return true;
	}
	if (this->length() > obj.length()) {
		return true;
	}

	return false;
}
```

## Предефиниране на оператор (>>, <<)

```cpp
friend ostream& operator<<(ostream& output, const Point& point);

ostream& operator<<(ostream& output, const Point& point)
{
	Point obj = point;
	output << "Point (x, y): (" << obj.get_x().getNum() << ", " << obj.get_y().getNum() << ")";
	return output;
}
```

## Предефиниране на оператор (++, --)

```cpp
Point Point::operator++()
{
	this->num_x = Num(this->num_x.getNum() + 1);
	this->num_y = Num(this->num_y.getNum() + 1);

	return Point(this->get_x(), this->get_y());
}

Point Point::operator++(int)
{
	Point obj = Point(this->num_x, this->num_y);

	this->num_x = Num(this->num_x.getNum() + 1);
	this->num_y = Num(this->num_y.getNum() + 1);

	return obj;
}
```

## Предефиниране на оператор (=)

```cpp
void operator = (const Point &point)
{ 
    Point obj = point;
    this->num_x = obj.get_x();
    this->num_y = obj.get_y();
}
```

## Предефиниране на оператор ()
```cpp
Line operator()(Point point) 
{
    Line line;
    
    line.a = point;
    line.a = point + 10;
    
    return D;
}
```
## Предефиниране на оператор ([])
```cpp
Point &operator[](int i) 
{
    if( i > SIZE ) {
        cout << "Index out of bounds" <<endl; 
        return points[0];
    }

    return points[i];
}
```

# Задача 2

Допълнете класа Car с опратори за:

- Извеждане на кола
- Въвеждне на кола
- Сравнение на коли
