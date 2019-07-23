#ifndef M_SQLQUERY_GLOBAL_H
#define M_SQLQUERY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(M_SQLQUERY_LIBRARY)
#  define M_SQLQUERYSHARED_EXPORT Q_DECL_EXPORT
#else
#  define M_SQLQUERYSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // M_SQLQUERY_GLOBAL_H
