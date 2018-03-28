/* THIS FILE IS AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * schema-defined QAPI function prototypes
 *
 * Copyright IBM, Corp. 2011
 *
 * Authors:
 *  Anthony Liguori   <aliguori@us.ibm.com>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 *
 */

#ifndef QMP_COMMANDS_H
#define QMP_COMMANDS_H

#include "qapi-types.h"
#include "error.h"

NameInfo * qmp_query_name(Error **errp);
int qmp_marshal_input_query_name(Monitor *mon, const QDict *qdict, QObject **ret);
VersionInfo * qmp_query_version(Error **errp);
int qmp_marshal_input_query_version(Monitor *mon, const QDict *qdict, QObject **ret);
KvmInfo * qmp_query_kvm(Error **errp);
int qmp_marshal_input_query_kvm(Monitor *mon, const QDict *qdict, QObject **ret);
StatusInfo * qmp_query_status(Error **errp);
int qmp_marshal_input_query_status(Monitor *mon, const QDict *qdict, QObject **ret);
UuidInfo * qmp_query_uuid(Error **errp);
int qmp_marshal_input_query_uuid(Monitor *mon, const QDict *qdict, QObject **ret);
ChardevInfoList * qmp_query_chardev(Error **errp);
int qmp_marshal_input_query_chardev(Monitor *mon, const QDict *qdict, QObject **ret);
CommandInfoList * qmp_query_commands(Error **errp);
int qmp_marshal_input_query_commands(Monitor *mon, const QDict *qdict, QObject **ret);
MigrationInfo * qmp_query_migrate(Error **errp);
int qmp_marshal_input_query_migrate(Monitor *mon, const QDict *qdict, QObject **ret);
MouseInfoList * qmp_query_mice(Error **errp);
int qmp_marshal_input_query_mice(Monitor *mon, const QDict *qdict, QObject **ret);
CpuInfoList * qmp_query_cpus(Error **errp);
int qmp_marshal_input_query_cpus(Monitor *mon, const QDict *qdict, QObject **ret);
BlockInfoList * qmp_query_block(Error **errp);
int qmp_marshal_input_query_block(Monitor *mon, const QDict *qdict, QObject **ret);
BlockStatsList * qmp_query_blockstats(Error **errp);
int qmp_marshal_input_query_blockstats(Monitor *mon, const QDict *qdict, QObject **ret);
VncInfo * qmp_query_vnc(Error **errp);
int qmp_marshal_input_query_vnc(Monitor *mon, const QDict *qdict, QObject **ret);
SpiceInfo * qmp_query_spice(Error **errp);
int qmp_marshal_input_query_spice(Monitor *mon, const QDict *qdict, QObject **ret);
BalloonInfo * qmp_query_balloon(Error **errp);
int qmp_marshal_input_query_balloon(Monitor *mon, const QDict *qdict, QObject **ret);
PciInfoList * qmp_query_pci(Error **errp);
int qmp_marshal_input_query_pci(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_quit(Error **errp);
int qmp_marshal_input_quit(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_stop(Error **errp);
int qmp_marshal_input_stop(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_system_reset(Error **errp);
int qmp_marshal_input_system_reset(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_system_powerdown(Error **errp);
int qmp_marshal_input_system_powerdown(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_cpu(int64_t index, Error **errp);
int qmp_marshal_input_cpu(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_begin_record(const char * filename, Error **errp);
int qmp_marshal_input_begin_record(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_begin_record_from(const char * snapshot, const char * filename, Error **errp);
int qmp_marshal_input_begin_record_from(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_begin_replay(const char * filename, Error **errp);
int qmp_marshal_input_begin_replay(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_end_record(Error **errp);
int qmp_marshal_input_end_record(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_end_replay(Error **errp);
int qmp_marshal_input_end_replay(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_load_plugin(const char * filename, Error **errp);
int qmp_marshal_input_load_plugin(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_unload_plugin(int64_t index, Error **errp);
int qmp_marshal_input_unload_plugin(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_list_plugins(Error **errp);
int qmp_marshal_input_list_plugins(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_plugin_cmd(const char * cmd, Error **errp);
int qmp_marshal_input_plugin_cmd(Monitor *mon, const QDict *qdict, QObject **ret);

#endif
