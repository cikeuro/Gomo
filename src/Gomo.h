
#ifndef GOMO_H
#define GOMO_H
#include "Arduino.h"


class Gomo 
	{
		public :
			Gomo(int INA1, int INA2,int PWMA, int INB1,int INB2, int PWMB, int STBY);
			void begin();
			void Depan();
			void Belakang();
			void Kiri();
			void Kanan();
			void Stop();

		private:
			int _INA1;
			int _INA2;
			int _PWMA;
			int _INB1;
			int _INB2;
			int _PWMB;
			int _STBY;
	};



#endif