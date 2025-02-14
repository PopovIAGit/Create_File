/**
 * ************************************************************************
 *
 * @file project_version.h
 * @author Popov Ivan (myxxxwm@gmail.com)
 * @brief ���� �������� ������ �������
 * @version 0.1
 * @date 12-09-2024
 *
 * ************************************************************************
 * @attention
 * ������ ������� ����������� �� ������ �������� - #DEVICE_GROUP ,
 * �������� ������ - #VERSION ,
 * ������ ������� - #MODULE_VERSION ,
 * ��������� - #SUBVERSION ,
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
 * @brief ����������� ������ ����������
 * @def DEVICE_GROUP
 * @note 16 - ���-4
 */
#define DEVICE_GROUP 14
/**
 * @brief ������ �������
 * @def VERSION
 * */
#define VERSION 01
/**
 * @brief ������ ������
 * @def MODULE_VERSION
 */
#define MODULE_VERSION 10
/**
 * @brief ��������� �������
 * @def SUBVERSION
 * @note ����������� �������� ��������� - 01
 */
#define SUBVERSION 03

#ifdef __cplusplus
}
#endif // extern "C"

#endif // PROJECT_VERSION_
