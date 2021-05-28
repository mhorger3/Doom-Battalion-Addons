#define SCOPE_PRIVATE 0
#define SCOPE_PROTECTED 1
#define SCOPE_PUBLIC 2
#define SCOPE_DEVELOPER "1 + getNumber (configFile >> 'DBA' >> 'isDeveloper')"

#define DEVELOPER_GUARD if !(call DBA_Common_fnc_isDeveloper) exitWith {}
