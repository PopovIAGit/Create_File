/**
 * ************************************************************************
 *
 * @file project_version.h
 * @author Popov Ivan (myxxxwm@gmail.com)
 * @brief Файл описания версии проекта
 * @version 0.1
 * @date 12-09-2024
 *
 * ************************************************************************
 * @attention
 * Версия проекта формируется из номера устройва - #DEVICE_GROUP ,
 * мажорной версии - #VERSION ,
 * версии модулей - #MODULE_VERSION ,
 * подверсии - #SUBVERSION ,
 * Version = DEVICE_GROUP.VERSION.MODULE_VERSION.SUBVERSION
 */

#ifndef PROJECT_VERSION_
#define PROJECT_VERSION_

#ifdef __cplusplus
extern "C"
{
#endif

#define DEVICE_NAME "BKS"
/**
 * @brief Индификатор группы устроийств
 * @def DEVICE_GROUP
 * @note 16 - БКС-4
 */
#define DEVICE_GROUP 14
/**
 * @brief Версия проекта
 * @def VERSION
 * */
#define VERSION 01
/**
 * @brief Версия модуля
 * @def MODULE_VERSION
 */
#define MODULE_VERSION 10
/**
 * @brief Подверсия проекта
 * @def SUBVERSION
 * @note Минимальное значение подверсии - 01
 */
#define SUBVERSION 03

#ifdef __cplusplus
}
#endif // extern "C"

#endif // PROJECT_VERSION_
