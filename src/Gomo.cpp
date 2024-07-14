#include "Arduino.h"
#include "Gomo.h"

Gomo::Gomo(int INA1, int INA2,int PWMA, int INB1,int INB2, int PWMB, int STBY)
	{
		_INA1 = INA1;
		_INA2 = INA2;
		_PWMA = PWMA;
		_INB1 = INB1;
		_INB2 = INB2;
		_PWMB = PWMB;
		_STBY = STBY;
	}


void Gomo::begin()
	{
		pinMode(_INA1, OUTPUT);
  		pinMode(_INA2, OUTPUT);
  		pinMode(_PWMA, OUTPUT);

  		pinMode(_INB1, OUTPUT);
  		pinMode(_INB2, OUTPUT);
  		pinMode(_PWMB, OUTPUT);

  		pinMode(_STBY, OUTPUT);
	
  		digitalWrite(_STBY, HIGH);
	}



void Gomo::Depan()
{
  digitalWrite(_INA1, HIGH);
  digitalWrite(_INA2, LOW);
  analogWrite(_PWMA, 150);

  digitalWrite(_INB1, HIGH);
  digitalWrite(_INB2, LOW);
  analogWrite(_PWMB, 150);

}

void Gomo::Belakang()
{
  digitalWrite(_INA1, LOW);
  digitalWrite(_INA2, HIGH);
  analogWrite(_PWMA, 150);

  digitalWrite(_INB1, LOW);
  digitalWrite(_INB2, HIGH);
  analogWrite(_PWMB, 150);

}

void Gomo::Kanan()
{
  digitalWrite(_INA1, LOW);
  digitalWrite(_INA2, HIGH);
  analogWrite(_PWMA, 150);

  digitalWrite(_INB1, HIGH);
  digitalWrite(_INB2, LOW);
  analogWrite(_PWMB, 150);

}

void Gomo::Kiri()
{
  digitalWrite(_INA1, HIGH);
  digitalWrite(_INA2, LOW);
  analogWrite(_PWMA, 150);

  digitalWrite(_INB1, LOW);
  digitalWrite(_INB2, HIGH);
  analogWrite(_PWMB, 150);
}

void Gomo::Stop()
{
  digitalWrite(_INA1, HIGH);
  digitalWrite(_INA2, LOW);
  analogWrite(_PWMA, 0);

  digitalWrite(_INB1, LOW);
  digitalWrite(_INB2, HIGH);
  analogWrite(_PWMB, 0);
}
