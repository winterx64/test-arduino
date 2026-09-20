#ifndef USMP_CORE_H
#define USMP_CORE_H

#ifdef __cplusplus
extern "C" {
#endif

#define USMP_CORE_VERSION_MAJOR 0
#define USMP_CORE_VERSION_MINOR 1
#define USMP_CORE_VERSION_PATCH 1

/**
 * @brief Get the core USMP protocol engine version string.
 */
const char* usmp_core_get_version(void);

/**
 * @brief Calculate a simple packet checksum (sample protocol utility).
 */
int usmp_core_calculate_checksum(const unsigned char *data, int len);

#ifdef __cplusplus
}
#endif

#endif // USMP_CORE_H
