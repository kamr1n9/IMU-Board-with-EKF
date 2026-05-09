#include "lsm6dsvtr.h"

void LSM6DSVTR_Init(LSM6DSVTR_Device_t imu)
{
    /*
     * Later:
     * - configure accelerometer output data rate
     * - configure gyroscope output data rate
     * - configure full-scale ranges
     * - enable block data update
     */

    (void)imu;
}

uint8_t LSM6DSVTR_ReadID(LSM6DSVTR_Device_t imu)
{
    /*
     * Later:
     * - select IMU1 or IMU2 chip select
     * - read WHO_AM_I register over SPI
     * - return actual sensor ID
     */

    (void)imu;

    return 0x00;
}

void LSM6DSVTR_ReadAccelGyro(LSM6DSVTR_Device_t imu, LSM6DSVTR_Data_t *data)
{
    /*
     * Later:
     * - read raw accel and gyro registers
     * - convert raw values to g and deg/s
     */

    (void)imu;

    if (data == NULL)
    {
        return;
    }

    data->ax = 0.0f;
    data->ay = 0.0f;
    data->az = 0.0f;

    data->gx = 0.0f;
    data->gy = 0.0f;
    data->gz = 0.0f;
}















