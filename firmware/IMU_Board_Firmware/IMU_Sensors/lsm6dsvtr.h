#ifndef LSM6DSVTR_H
#define LSM6DSVTR_H

#include "main.h"

typedef enum
{
    LSM6DSVTR_IMU1 = 0,
    LSM6DSVTR_IMU2 = 1
} LSM6DSVTR_Device_t;

typedef struct
{
    float ax;
    float ay;
    float az;
    float gx;
    float gy;
    float gz;
} LSM6DSVTR_Data_t;

void LSM6DSVTR_Init(LSM6DSVTR_Device_t imu);
uint8_t LSM6DSVTR_ReadID(LSM6DSVTR_Device_t imu);
void LSM6DSVTR_ReadAccelGyro(LSM6DSVTR_Device_t imu, LSM6DSVTR_Data_t *data);

#endif




