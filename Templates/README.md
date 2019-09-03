# Шаблони

Функция или клас, която работи не с променливи от някакъв дефиниран тип, а с абстрактни променливи, се нарича шаблонна функция/клас. 
Когато някоя програма използва такава функция, тя трябва изрично да уточни с какъв тип данни се използва. 

# Шаблонна функция

```cpp
template <typename T> T max(T x, T y) 
{ 
   return (x > y)? x: y; 
} 
```
# Задача 1

Съставете функция която да намира най-малката стоиност от две променливи.

# Задача 1

Съставете функция която да разменя стоиност от две променливи.

# Шаблоннн клас

```cpp
template <class T> class Calculator
{
private:
	T num1, num2;

public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}

	void displayResult()
	{
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}

	T add() { return num1 + num2; }

	T subtract() { return num1 - num2; }

	T multiply() { return num1 * num2; }

	T divide() { return num1 / num2; }
};
```
