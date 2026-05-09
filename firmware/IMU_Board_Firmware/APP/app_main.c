#include "app_main.h"
#include "main.h"
#include "lsm6dsvtr.h"

void App_Main(void)
{
    LSM6DSVTR_Data_t imu1_data;
    LSM6DSVTR_Data_t imu2_data;

    LSM6DSVTR_Init(LSM6DSVTR_IMU1);
    LSM6DSVTR_Init(LSM6DSVTR_IMU2);

    while (1)
    {
        uint8_t imu1_id = LSM6DSVTR_ReadID(LSM6DSVTR_IMU1);
        uint8_t imu2_id = LSM6DSVTR_ReadID(LSM6DSVTR_IMU2);

        LSM6DSVTR_ReadAccelGyro(LSM6DSVTR_IMU1, &imu1_data);
        LSM6DSVTR_ReadAccelGyro(LSM6DSVTR_IMU2, &imu2_data);

        (void)imu1_id;
        (void)imu2_id;

        HAL_Delay(500);
    }
}
