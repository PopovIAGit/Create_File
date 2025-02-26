/*======================================================================
��� �����:          csl_i2c.h
�����:              ������ �.�.
������ �����:       01.01
���� ���������:		16/02/10
��������:
������������ ���� ��� ������ �� ���������� I2C
======================================================================*/

#ifndef CSL_I2C_
#define CSL_I2C_

#include "csl_io.h"

#ifdef __cplusplus
extern "C" {
#endif

#define I2C_START	0x01
#define I2C_STOP	   0x02

extern IOpin SclOut;
extern IOpin SclDir;
extern IOpin SdaOut;
extern IOpin SdaIn;
extern IOpin SdaDir;

extern void I2C_init(Byte Id, Uns BaudRate);
extern void I2C_send(Byte Id, Byte Mode, Byte Data, Byte Length);
extern Byte I2C_recieve(Byte Id, Byte Mode, Byte Length);

#ifdef __cplusplus
}
#endif // extern "C"

#endif /* CSL_I2C_ */




