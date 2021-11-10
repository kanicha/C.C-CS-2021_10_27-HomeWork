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

	float getX() { return x; }
	float getY() { return y; }
	float getZ() { return z; }

	virtual void Update() {}

	~Object() {}
private:
	float x;
	float y;
	float z;
};

/// <summary>
/// Vehicle(乗り物)クラス
/// </summary>
class Vehicle : public Object
{
public:
	Vehicle()
	{
		speed = 0;
		accel = 0;
	}

	virtual void setSpeed(float speed, float accel);
	// スピード, アクセル習得関数
	float getSpeed() { return speed; }
	float getAccel() { return accel; }

	~Vehicle() {}
private:
	float speed;
	float accel;
};

/// <summary>
/// Car(車)クラス、Vehicle継承
/// </summary>
class Car : public Vehicle
{
public:
	Car(){}

	Vehicle vehicle;

	void Speed(float speed, float accel);
	void Update();
	~Car() {}
private:

};

int main()
{
	Car car;
	// Updateを呼ぶ回数
	const int roopNum = 100;

	car.setSpeed(2.2f, 1.2f);

	for (int i = 0; i < roopNum; i++)
	{
		car.Update();
	}
}

/// <summary>
/// 移動設定関数
/// </summary>
void Vehicle::setSpeed(float speed, float accel)
{
	this->speed = speed;
	this->accel = accel;
}

/// <summary>
/// Carの速度設定関数
/// </summary>
void Car::Speed(float speed, float accel)
{
	vehicle.setSpeed(speed, accel);
}

/// <summary>
/// アップデート処理関数
/// </summary>
void Car::Update()
{
	float stopNum = 90;
	float speed;
	
	speed = vehicle.getSpeed();

	if (stopNum > speed)
	{
		speed++;
	}
	else
		return;
}