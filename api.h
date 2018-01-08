/* Pi-hole: A black hole for Internet advertisements
*  (c) 2017 Pi-hole, LLC (https://pi-hole.net)
*  Network-wide ad blocking via your own hardware.
*
*  FTL Engine
*  API commands and structures
*
*  This file is copyright under the latest version of the EUPL.
*  Please see LICENSE file for your rights under this license. */

// Statistic methods
void getStats(int *sock);
void getOverTime(int *sock);
void getTopDomains(char *client_message, int *sock);
void getTopClients(char *client_message, int *sock);
void getForwardDestinations(char *client_message, int *sock);
void getQueryTypes(int *sock);
void getAllQueries(char *client_message, int *sock);
void getRecentBlocked(char *client_message, int *sock);
void getForwardDestinationsOverTime(int *sock, char type);
void getQueryTypesOverTime(int *sock, char type);
void getClientsOverTime(int *sock);
void getClientNames(int *sock);

// FTL methods
void getMemoryUsage(int *sock);
void getClientID(int *sock, char type);
void getVersion(int *sock, char type);
void getDBstats(int *sock, char type);
void getUnknownQueries(int *sock);

// DNS methods
void getList(int *sock, char type, char list_type);
void addList(int *sock, char type, char list_type, char *data);
void removeList(int *sock, char type, char list_type, char *client_message);
void getPiholeStatus(int *sock, char type);

// General API commands
bool matchesRegex(char *regex_expression, char *input);
bool isValidDomain(char *domain);

// MessagePack serialization helpers
void pack_eom(int sock);
void pack_uint8(int sock, uint8_t value);
void pack_uint64(int sock, uint64_t value);
void pack_int32(int sock, int32_t value);
void pack_float(int sock, float value);
void pack_fixstr(int sock, char *string);
void pack_str32(int sock, char *string);
void pack_map16_start(int sock, uint16_t length);
