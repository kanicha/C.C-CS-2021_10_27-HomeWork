#include <iostream>

/// <summary>
/// オブジェクトクラス
/// </summary>
class Object
{
public:
	Object()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	virtual void Update() {}
private:
	int x;
	int y;
	int z;
};

/// <summary>
/// Vehicle(乗り物)クラス
/// </summary>
class Vehicle : Object
{
public:
	Vehicle() {}
private:
	/// <summary>
	/// 移動速度上昇関数
	/// </summary>
	class SpeedUp
	{
	public:
		SpeedUp() {}
	private:
		int speed;
		int axcel;
	};
};

/// <summary>
/// Car(車)クラス、Vehicle継承
/// </summary>
class Car : Vehicle
{
public:
	Car() {}

	void SetSpeed();
private:

};

/// <summary>
/// スピード設定用関数
/// </summary>
void Car::SetSpeed()
{

}