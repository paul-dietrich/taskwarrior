////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// This file contains all the strings that should be localized.  If a string is
// *not* in this file, then either:
//   (a) it should not be localized, or
//   (b) you have found a bug - please report it
//
// Strings that should be localized:
//   - text output that the user sees
//
// Strings that should NOT be localized:
//   - .taskrc configuration variable names
//   - command names
//   - extension function names
//   - certain literals associated with parsing
//   - debug strings
//   - attribute names
//   - modifier names
//   - logical operators (and, or, xor)
//
// Rules:
//   - Localized strings should not in general  contain leading or trailing
//     white space, including \n, thus allowing the code to compose strings.
//   - Retain the tense of the original string.
//   - Retain the same degree of verbosity of the original string.
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// Translators:
//   1. Copy this file (eng-USA.h) to a new file with the target locale as the
//      file name.  Using German as an example, do this:
//
//        cp eng-USA.h deu-DEU.h
//
//   2. Modify all the strings below.
//        i.e. change "Unknown error." to "Unbekannter Fehler.".
//
//   3. Add your new translation to the task.git/src/i18n.h file, if necessary,
//      by inserting:
//
//        #elif PACKAGE_LANGUAGE == LANGUAGE_DEU_DEU
//        #include <deu-DEU.h>
//
//   4. Add your new language to task.git/CMakeLists.txt, making sure that
//      number is unique:
//
//        set (LANGUAGE_DEU_DEU 3)
//
//   5. Add your new language to task.git/cmake.h.in:
//
//        #define LANGUAGE_DEU_DEU ${LANGUAGE_DEU_DEU}
//
//   6. Build your localized Taskwarrior with these commands:
//
//      cd task.git
//      cmake -D LANGUAGE=3 .
//      make
//
//   7. Submit your translation to support@taskwarrior.org, where it will be
//      shared with others.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// Note that for English, the following two lines are not displayed.  For all
// other localizations, these lines will appear in the output of the 'version'
// and 'diagnostics' commands.
//
// DO NOT include a copyright in the translation.
//
#define STRING_LOCALIZATION_DESC     "Japanese localization"
#define STRING_LOCALIZATION_AUTHOR   "Translated into Japanese by Oota Toshiya."

// Parser
#define STRING_PARSER_ALIAS_NEST     "ネストされたエイリアスの制限 {1} に到達した。"
#define STRING_PARSER_OVERRIDE_RC    "設定は上書きされた rc.{1}:{2}"
#define STRING_PARSER_UNKNOWN_ATTMOD "エラー: 不明な属性変更子 '{1}'."
#define STRING_PARSER_ALTERNATE_RC   "代替の .taskrc ファイル {1} を使用"
#define STRING_PARSER_ALTERNATE_DATA "代替の data.location {1} を使用"
#define STRING_PARSER_UNEXPECTED_ARG "The '{1}' command does not allow '{2}'."

// Color
#define STRING_COLOR_UNRECOGNIZED    "The color '{1}' is not recognized."

// columns/Col*
#define STRING_COLUMN_BAD_NAME       "認識できないカラム名 '{1}'。"
#define STRING_COLUMN_BAD_FORMAT     "認識出来ないカラム形式 '{1}.{2}'"
#define STRING_COLUMN_LABEL_TASKS    "Tasks"
#define STRING_COLUMN_LABEL_DEP      "Depends"
#define STRING_COLUMN_LABEL_DEP_S    "Dep"
#define STRING_COLUMN_LABEL_DESC     "Description"
#define STRING_COLUMN_LABEL_DUE      "Due"
#define STRING_COLUMN_LABEL_END      "End"
#define STRING_COLUMN_LABEL_ENTERED  "Entered"
#define STRING_COLUMN_LABEL_COUNT    "Count"
#define STRING_COLUMN_LABEL_COMPLETE "Completed"
#define STRING_COLUMN_LABEL_MOD      "Modified"
#define STRING_COLUMN_LABEL_ADDED    "Added"
#define STRING_COLUMN_LABEL_AGE      "Age"
#define STRING_COLUMN_LABEL_ID       "ID"
#define STRING_COLUMN_LABEL_PROJECT  "Project"
#define STRING_COLUMN_LABEL_UNTIL    "Until"
#define STRING_COLUMN_LABEL_WAIT     "Wait"
#define STRING_COLUMN_LABEL_WAITING  "Waiting until"
#define STRING_COLUMN_LABEL_RECUR    "Recur"
#define STRING_COLUMN_LABEL_RECUR_L  "Recurrence"
#define STRING_COLUMN_LABEL_START    "Start"
#define STRING_COLUMN_LABEL_STARTED  "Started"
#define STRING_COLUMN_LABEL_ACTIVE   "A"
#define STRING_COLUMN_LABEL_STATUS   "Status"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "Pending"
#define STRING_COLUMN_LABEL_STAT_CO  "Completed"
#define STRING_COLUMN_LABEL_STAT_DE  "Deleted"
#define STRING_COLUMN_LABEL_STAT_WA  "Waiting"
#define STRING_COLUMN_LABEL_STAT_RE  "Recurring"
#define STRING_COLUMN_LABEL_STAT_P   "P"
#define STRING_COLUMN_LABEL_STAT_C   "C"
#define STRING_COLUMN_LABEL_STAT_D   "D"
#define STRING_COLUMN_LABEL_STAT_W   "W"
#define STRING_COLUMN_LABEL_STAT_R   "R"
#define STRING_COLUMN_LABEL_TAGS     "Tags"
#define STRING_COLUMN_LABEL_TAG      "Tag"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Urgency"
#define STRING_COLUMN_LABEL_NAME     "Name"
#define STRING_COLUMN_LABEL_VALUE    "Value"
#define STRING_COLUMN_LABEL_PARENT   "Parent task"
#define STRING_COLUMN_LABEL_DATE     "Date"
#define STRING_COLUMN_LABEL_COLUMN   "Columns"
#define STRING_COLUMN_LABEL_STYLES   "Supported Formats"
#define STRING_COLUMN_LABEL_EXAMPLES "Example"
#define STRING_COLUMN_LABEL_SCHED    "Scheduled"
#define STRING_COLUMN_LABEL_UDA      "Name"
#define STRING_COLUMN_LABEL_TYPE     "Type"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Label"
#define STRING_COLUMN_LABEL_DEFAULT  "Default"
#define STRING_COLUMN_LABEL_VALUES   "Allowed Values"
#define STRING_COLUMN_LABEL_UDACOUNT "Usage Count"
#define STRING_COLUMN_LABEL_ORPHAN   "Orphan UDA"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "home @chore next"
#define STRING_COLUMN_EXAMPLES_PROJ  "home.garden"
#define STRING_COLUMN_EXAMPLES_PAR   "home"
#define STRING_COLUMN_EXAMPLES_IND   "  home.garden"
#define STRING_COLUMN_EXAMPLES_DESC  "Move your clothes down on to the lower peg"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Immediately before your lunch"
#define STRING_COLUMN_EXAMPLES_ANNO2 "If you are playing in the match this afternoon"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Before you write your letter home"
#define STRING_COLUMN_EXAMPLES_ANNO4 "If you're not getting your hair cut"

// commands/Cmd*
// USAGE strings are visible in 'task help'
#define STRING_CMD_CONFLICT          "Custom report '{1}' conflicts with built-in task command."
#define STRING_CMD_VERSION_USAGE     "taskwarrior バージョン番号の表示"
#define STRING_CMD_VERSION_USAGE2    "taskwarrior バージョン番号のみの表示"
#define STRING_CMD_VERSION_MIT       "Taskwarrior はMITライセンス下でのみコピーでき、それは taskwarrior source kit 中にあります。"
#define STRING_CMD_VERSION_DOCS      "taskwarrior のドキュメントは 'man task', 'man taskrc', 'man task-color', 'man task-sync' あるいは http://taskwarrior.org にあります。"
#define STRING_CMD_VERSION_BUILT     "{1} {2} built for "
#define STRING_CMD_VERSION_UNKNOWN   "unknown"
#define STRING_CMD_VERSION_COPY      "Copyright (C) 2006 - 2018 P. Beckingham, F. Hernandez."
#define STRING_CMD_LOGO_USAGE        "Taskwarrior ロゴの表示"
#define STRING_CMD_LOGO_COLOR_REQ    "色のサポートをする logo コマンドが有効になりました。"
#define STRING_CMD_EXEC_USAGE        "外部コマンドまたはスクリプトの実行"
#define STRING_CMD_URGENCY_USAGE     "Displays the urgency measure of a task"
#define STRING_CMD_URGENCY_RESULT    "task {1} urgency {2}"
#define STRING_CMD_ADD_USAGE         "新しいタスクの追加"
#define STRING_CMD_ADD_FEEDBACK      "タスク {1} が生成されました。"
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Adds a new task that is already completed"
#define STRING_CMD_LOG_NO_RECUR      "You cannot log recurring tasks."
#define STRING_CMD_LOG_NO_WAITING    "保留のタスクはログできません。"

//#define STRING_CMD_LOG_LOGGED        "Logged task {1}."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Shows the IDs of matching tasks, as a range"
#define STRING_CMD_IDS_USAGE_LIST    "Shows the IDs of matching tasks, in the form of a list"
#define STRING_CMD_IDS_USAGE_ZSH     "Shows the IDs and descriptions of matching tasks"
#define STRING_CMD_UDAS_USAGE        "Shows all the defined UDA details"
#define STRING_CMD_UDAS_COMPL_USAGE  "Shows the defined UDAs for completion purposes"
#define STRING_CMD_UUIDS_USAGE_RANGE "Shows the UUIDs of matching tasks, as a comma-separated list"
#define STRING_CMD_UUIDS_USAGE_LIST  "Shows the UUIDs of matching tasks, as a list"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Shows the UUIDs and descriptions of matching tasks"
#define STRING_CMD_EXPORT_USAGE      "JSON 形式で タスク をエクスポート"
#define STRING_CMD_INFO_USAGE        "すべてのデータとメタデータを表示"
#define STRING_CMD_INFO_BLOCKED      "This task blocked by"
#define STRING_CMD_INFO_BLOCKING     "This task is blocking"
#define STRING_CMD_INFO_UNTIL        "Until"
#define STRING_CMD_INFO_MODIFICATION "Modification"
#define STRING_CMD_INFO_MODIFIED     "Last modified"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Reverts the most recent change to a task"
#define STRING_CMD_STATS_USAGE       "タスク データベース情報を表示"
#define STRING_CMD_STATS_CATEGORY    "Category"
#define STRING_CMD_STATS_DATA        "Data"
#define STRING_CMD_STATS_TOTAL       "Total"
#define STRING_CMD_STATS_ANNOTATIONS "Annotations"
#define STRING_CMD_STATS_UNIQUE_TAGS "Unique tags"
#define STRING_CMD_STATS_PROJECTS    "Projects"
#define STRING_CMD_STATS_DATA_SIZE   "Data size"
#define STRING_CMD_STATS_UNDO_TXNS   "Undo transactions"
#define STRING_CMD_STATS_BACKLOG     "Sync backlog transactions"
#define STRING_CMD_STATS_TAGGED      "Tasks tagged"
#define STRING_CMD_STATS_OLDEST      "最古の タスク"
#define STRING_CMD_STATS_NEWEST      "最新の タスク"
#define STRING_CMD_STATS_USED_FOR    "Task used for"
#define STRING_CMD_STATS_ADD_EVERY   "Task added every"
#define STRING_CMD_STATS_COMP_EVERY  "Task completed every"
#define STRING_CMD_STATS_DEL_EVERY   "Task deleted every"
#define STRING_CMD_STATS_AVG_PEND    "Average time pending"
#define STRING_CMD_STATS_DESC_LEN    "Average desc length"
#define STRING_CMD_STATS_CHARS       "{1} 文字"
#define STRING_CMD_STATS_BLOCKED     "ブロックされたタスク"
#define STRING_CMD_STATS_BLOCKING    "Blocking tasks"
#define STRING_CMD_REPORTS_USAGE     "Lists all supported reports"
#define STRING_CMD_REPORTS_REPORT    "Report"
#define STRING_CMD_REPORTS_DESC      "Description"
#define STRING_CMD_REPORTS_SUMMARY   "{1} reports"
#define STRING_CMD_TAGS_USAGE        "使用されているすべてのタグを表示"
#define STRING_CMD_COMTAGS_USAGE     "Shows only a list of all tags used, for autocompletion purposes"
#define STRING_CMD_TAGS_SINGLE       "1 つのタグ"
#define STRING_CMD_TAGS_PLURAL       "{1} 個のタグ"
#define STRING_CMD_TAGS_NO_TAGS      "タグがない。"
#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_DAY      "Day"
#define STRING_CMD_HISTORY_USAGE_M   "Shows a report of task history, by month"
#define STRING_CMD_HISTORY_YEAR      "Year"
#define STRING_CMD_HISTORY_MONTH     "Month"
#define STRING_CMD_HISTORY_ADDED     "Added"
#define STRING_CMD_HISTORY_COMP      "Completed"
#define STRING_CMD_HISTORY_DEL       "Deleted"
#define STRING_CMD_HISTORY_NET       "Net"
#define STRING_CMD_HISTORY_USAGE_A   "Shows a report of task history, by year"
#define STRING_CMD_HISTORY_AVERAGE   "Average"
#define STRING_CMD_HISTORY_LEGEND    "Legend: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Legend: + Added, X Completed, - Deleted"
#define STRING_CMD_GHISTORY_USAGE_M  "Shows a graphical report of task history, by month"
#define STRING_CMD_GHISTORY_USAGE_A  "Shows a graphical report of task history, by year"
#define STRING_CMD_GHISTORY_YEAR     "Year"
#define STRING_CMD_GHISTORY_MONTH    "Month"
#define STRING_CMD_GHISTORY_NUMBER   "追加/完了/削除されたタスク数"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_DONE_USAGE        "Marks the specified task as completed"
#define STRING_CMD_DONE_CONFIRM      "タスク {1} '{2}' を完了?"
#define STRING_CMD_DONE_TASK         "タスク {1} '{2}' を完了します。"
#define STRING_CMD_DONE_NO           "タスク は完了しなかった。"
#define STRING_CMD_DONE_NOTPEND      "Task {1} '{2}' is neither pending nor waiting."
#define STRING_CMD_DONE_1            "{1} task を完了。"
#define STRING_CMD_DONE_N            "{1} task を完了。"

#define STRING_CMD_PROJECTS_USAGE    "Shows all project names used"
#define STRING_CMD_PROJECTS_USAGE_2  "Shows only a list of all project names used"
#define STRING_CMD_PROJECTS_NO       "プロジェクトがない。"
#define STRING_CMD_PROJECTS_NONE     "(none)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} プロジェクト"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} プロジェクト"
#define STRING_CMD_PROJECTS_TASK     "({1} タスク)"
#define STRING_CMD_PROJECTS_TASKS    "({1} タスク)"
#define STRING_CMD_SUMMARY_USAGE     "Shows a report of task status by project"
#define STRING_CMD_SUMMARY_PROJECT   "Project"
#define STRING_CMD_SUMMARY_REMAINING "Remaining"
#define STRING_CMD_SUMMARY_AVG_AGE   "Avg age"
#define STRING_CMD_SUMMARY_COMPLETE  "Complete"
#define STRING_CMD_SUMMARY_NONE      "(none)"
#define STRING_CMD_COUNT_USAGE       "一致した タスク をカウント"
#define STRING_CMD_GET_USAGE         "DOM Accessor"
#define STRING_CMD_GET_NO_DOM        "No DOM reference specified."
#define STRING_CMD_GET_BAD_REF       "'{1}' is not a DOM reference."

#define STRING_CMD_UDAS_NO           "UDAが一つも定義されていません。"
#define STRING_CMD_UDAS_SUMMARY      "{1} UDA が定義されました。"
#define STRING_CMD_UDAS_SUMMARY2     "{1} UDA が定義されました。"
#define STRING_CMD_UDAS_ORPHAN       "{1} Orphan UDA"
#define STRING_CMD_UDAS_ORPHANS      "{1} Orphan UDAs"

#define STRING_CMD_DELETE_USAGE      "指定されたタスクの削除"
#define STRING_CMD_DELETE_CONFIRM    "完全にタスク {1} '{2}' を削除して良いですか?"
#define STRING_CMD_DELETE_TASK       "タスク {1} '{2}' を削除中。"
#define STRING_CMD_DELETE_TASK_R     "Deleting recurring task {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "This is a recurring task.  Do you want to delete all pending recurrences of this same task?"
#define STRING_CMD_DELETE_NO         "タスク は削除されませんでした。"
#define STRING_CMD_DELETE_NOT_DEL    "タスク {1} '{2}' は削除できません。"
#define STRING_CMD_DELETE_1          " {1} タスク を削除しました。"
#define STRING_CMD_DELETE_N          " {1} タスク を削除しました。"

#define STRING_CMD_DUPLICATE_USAGE   "指定したタスクが重複しています"
#define STRING_CMD_DUPLICATE_REC     "Note: task {1} was a parent recurring task.  The duplicated task is too."
#define STRING_CMD_DUPLICATE_NON_REC "Note: task {1} was a recurring task.  The duplicated task is not."
#define STRING_CMD_DUPLICATE_CONFIRM "タスク {1} '{2}' が重複?"
#define STRING_CMD_DUPLICATE_TASK    "タスク {1} '{2}' が重複。"
#define STRING_CMD_DUPLICATE_NO      "タスク は重複していません。"
#define STRING_CMD_DUPLICATE_1       "重複した {1} タスク。"
#define STRING_CMD_DUPLICATE_N       "重複した {1} タスク。"

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_START_USAGE       "Marks specified task as started"
#define STRING_CMD_START_NO          "タスク は開始していません。"
#define STRING_CMD_START_ALREADY     "タスク {1} '{2}' は既に開始しています。"
#define STRING_CMD_START_TASK        "タスク {1} '{2}' を開始。"
#define STRING_CMD_START_CONFIRM     "タスク {1} '{2}' を開始?"
#define STRING_CMD_START_1           " {1} タスク を開始しました。"
#define STRING_CMD_START_N           " {1} タスク を開始しました。"

#define STRING_CMD_STOP_USAGE        "Removes the 'start' time from a task"
#define STRING_CMD_STOP_NO           "Task は停止できません。"
#define STRING_CMD_STOP_ALREADY      "Task {1} '{2}' は停止できません。"
#define STRING_CMD_STOP_TASK         "task {1} '{2}' を停止中。"
#define STRING_CMD_STOP_CONFIRM      "task {1} '{2}' を停止?"
#define STRING_CMD_STOP_1            "{1} タスク を停止。"
#define STRING_CMD_STOP_N            "{1} タスク を停止。"

#define STRING_CMD_APPEND_USAGE      "存在する task 説明文にテキストを追加"
#define STRING_CMD_APPEND_1          "{1} タスク を追加。"
#define STRING_CMD_APPEND_N          "{1} タスク を追加。"
#define STRING_CMD_APPEND_TASK       "タスク {1} '{2}' を追加中。"
#define STRING_CMD_APPEND_TASK_R     "Appending to recurring task {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "This is a recurring task.  Do you want to append to all pending recurrences of this same task?"
#define STRING_CMD_APPEND_CONFIRM    "タスク {1} '{2}' を追加?"
#define STRING_CMD_APPEND_NO         "タスク を追加できませんでした。"

#define STRING_CMD_PREPEND_USAGE     "Prepends text to an existing task description"
#define STRING_CMD_PREPEND_1         "Prepended {1} task."
#define STRING_CMD_PREPEND_N         "Prepended {1} tasks."
#define STRING_CMD_PREPEND_TASK      "Prepending to task {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Prepending to recurring task {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "This is a recurring task.  Do you want to prepend to all pending recurrences of this same task?"
#define STRING_CMD_PREPEND_CONFIRM   "Prepend to task {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Task not prepended."

#define STRING_CMD_ANNO_USAGE        "既存のタスクに注釈を追加"
#define STRING_CMD_ANNO_CONFIRM      "Annotate task {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "タスク{1} に注釈 '{2}' を追加"
#define STRING_CMD_ANNO_TASK_R       "Annotating recurring task {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "This is a recurring task.  Do you want to annotate all pending recurrences of this same task?"
#define STRING_CMD_ANNO_NO           "Task not annotated."
#define STRING_CMD_ANNO_1            "{1} task に注釈付加."
#define STRING_CMD_ANNO_N            "{1} task に注釈付加."

#define STRING_CMD_COLUMNS_USAGE     "All supported columns and formatting styles"
#define STRING_CMD_COLUMNS_NOTE      "* Means default format, and therefore optional.  For example, 'due' and 'due.formatted' are equivalent."
#define STRING_CMD_COLUMNS_USAGE2    "Displays only a list of supported columns"
#define STRING_CMD_COLUMNS_ARGS      "You can only specify one search string."

#define STRING_CMD_DENO_USAGE        "Deletes an annotation"
#define STRING_CMD_DENO_NONE         "指定されたtaskには注釈がないので削除できません。"
#define STRING_CMD_DENO_CONFIRM      "タスク {1} から注釈 '{2}' を削除しますか?"
#define STRING_CMD_DENO_FOUND        "注釈 '{1}' が見つかったので削除します。"
#define STRING_CMD_DENO_NOMATCH      "'{1}' に一致する注釈が見つからなかったので削除できません。"
#define STRING_CMD_DENO_NO           "Task not denotated."
#define STRING_CMD_DENO_1            "Denotated {1} task."
#define STRING_CMD_DENO_N            "Denotated {1} tasks."

#define STRING_CMD_IMPORT_USAGE      "JSON ファイルをインポート"
#define STRING_CMD_IMPORT_SUMMARY    "{1} task をインポートしました。"
#define STRING_CMD_IMPORT_FILE       "'{1}' をインポート中"
#define STRING_CMD_IMPORT_MISSING    "ファイル '{1}' が見つかりません。"
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Annotation is missing a description: {1}"
#define STRING_TASK_NO_ENTRY         "Annotation is missing an entry date: {1}"
#define STRING_CMD_SYNC_USAGE        "Taskserver とデータを同期"
#define STRING_CMD_SYNC_NO_SERVER    "Taskserver が構成されていません。"
#define STRING_CMD_SYNC_BAD_CRED     "Taskserver credentials malformed."
#define STRING_CMD_SYNC_BAD_CERT     "Taskserver certificate missing."
#define STRING_CMD_SYNC_BAD_KEY      "Taskserver key がありません。"
#define STRING_CMD_SYNC_ADD          "   add {1} '{2}'"
#define STRING_CMD_SYNC_MOD          "modify {1} '{2}'"
#define STRING_CMD_SYNC_PROGRESS     "{1} と同期中"
#define STRING_CMD_SYNC_SUCCESS0     "同期成功。"
#define STRING_CMD_SYNC_SUCCESS1     "同期成功。  {1} 件の変更がアップロードされました。"
#define STRING_CMD_SYNC_SUCCESS2     "同期成功。  {1} 件の変更がダウンロードされました。"
#define STRING_CMD_SYNC_SUCCESS3     "同期成功。  {1} の変更がアップロードされ、{2} 件の本坑がダウンロードされました。"
#define STRING_CMD_SYNC_SUCCESS_NOP  "同期成功。変更はありません。"
#define STRING_CMD_SYNC_FAIL_ACCOUNT "同期失敗。 認証情報が不正か Taskserver のアカウントが有効になっていません。"
#define STRING_CMD_SYNC_FAIL_ERROR   "同期失敗。 Taskserver がエラー: {1} {2} を返した"
#define STRING_CMD_SYNC_FAIL_CONNECT "同期失敗。 Taskserverに接続できない。"
#define STRING_CMD_SYNC_BAD_SERVER   "同期失敗。 不正な形式の設定 '{1}'"
#define STRING_CMD_SYNC_NO_TLS       "Taskwarrior はGnuTLSサポートなしで構成されています。同期は無効です。"
#define STRING_CMD_SYNC_INIT         "Please confirm that you wish to upload all your tasks to the Taskserver"
#define STRING_CMD_SYNC_NO_INIT      "Taskwarrior will not proceed with first-time sync initialization."
#define STRING_CMD_SYNC_RELOCATE0    "The server account has been relocated.  Please update your configuration using:"
#define STRING_CMD_SYNC_RELOCATE1    "task config taskd.server {1}"
#define STRING_CMD_SYNC_BAD_CA       "CA certificate が見つからない。"
#define STRING_CMD_SYNC_TRUST_CA     "You should either provide a CA certificate or override verification, but not both."
#define STRING_CMD_SYNC_TRUST_OBS    "The 'taskd.trust' settings may now only contain a value of 'strict', 'ignore hostname' or 'allow all'."

// STRING_CMD_DIAG_* strings all appear on the 'diag' command output.
#define STRING_CMD_DIAG_USAGE        "Platform, build and environment details"
#define STRING_CMD_DIAG_PLATFORM     "Platform"
#define STRING_CMD_DIAG_COMPILER     "Compiler"
#define STRING_CMD_DIAG_VERSION      "Version"
#define STRING_CMD_DIAG_CAPS         "Caps"
#define STRING_CMD_DIAG_COMPLIANCE   "Compliance"
#define STRING_CMD_DIAG_FEATURES     "Build Features"
#define STRING_CMD_DIAG_BUILT        "Built"
#define STRING_CMD_DIAG_COMMIT       "Commit"
#define STRING_CMD_DIAG_FOUND        "(found)"
#define STRING_CMD_DIAG_MISSING      "(missing)"
#define STRING_CMD_DIAG_MISS_DEP     "Task {1} depends on nonexistent task: {2}"
#define STRING_CMD_DIAG_MISS_PAR     "Task {1} has nonexistent recurrence template {2}"
#define STRING_CMD_DIAG_ENABLED      "Enabled"
#define STRING_CMD_DIAG_DISABLED     "Disabled"
#define STRING_CMD_DIAG_CONFIG       "Configuration"
#define STRING_CMD_DIAG_TESTS        "Tests"
#define STRING_CMD_DIAG_UUID_SCAN    "Scanned {1} tasks for duplicate UUIDs:"
#define STRING_CMD_DIAG_REF_SCAN     "Scanned {1} tasks for broken references:"
#define STRING_CMD_DIAG_REF_OK       "No broken references found"
#define STRING_CMD_DIAG_UUID_DUP     "Found duplicate {1}"
#define STRING_CMD_DIAG_UUID_NO_DUP  "No duplicates found"
#define STRING_CMD_DIAG_NONE         "-none-"
#define STRING_CMD_DIAG_HOOKS        "Hooks"
#define STRING_CMD_DIAG_HOOK_NAME    "unrecognized hook name"
#define STRING_CMD_DIAG_HOOK_SYMLINK "symlink"
#define STRING_CMD_DIAG_HOOK_EXEC    "executable"
#define STRING_CMD_DIAG_HOOK_NO_EXEC "not executable"
#define STRING_CMD_DIAG_HOOK_ENABLE  "Enabled"
#define STRING_CMD_DIAG_HOOK_DISABLE "Disabled"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Generates a list of all commands, for autocompletion purposes"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Generates a list of all commands, for zsh autocompletion purposes"
#define STRING_CMD_ZSHATTS_USAGE     "Generates a list of all attributes, for zsh autocompletion purposes"
#define STRING_CMD_ALIASES_USAGE     "Generates a list of all aliases, for autocompletion purposes"

#define STRING_CMD_MODIFY_USAGE1     "Modifies the existing task with provided arguments."
#define STRING_CMD_MODIFY_NO_DUE     "You cannot specify a recurring task without a due date."
#define STRING_CMD_MODIFY_REM_DUE    "You cannot remove the due date from a recurring task."
#define STRING_CMD_MODIFY_REC_ALWAYS "You cannot remove the recurrence from a recurring task."
#define STRING_CMD_MODIFY_TASK       "タスク {1} '{2}' を変更します。"
#define STRING_CMD_MODIFY_TASK_R     "Modifying recurring task {1} '{2}'."
#define STRING_CMD_MODIFY_1          "{1} タスク を変更。"
#define STRING_CMD_MODIFY_N          "{1} タスク を変更。"
#define STRING_CMD_MODIFY_NO         "タスク は変更されませんでした。"
#define STRING_CMD_MODIFY_CONFIRM    "タスク {1} '{2}' を変更しますか?"
#define STRING_CMD_MODIFY_RECUR      "This is a recurring task.  Do you want to modify all pending recurrences of this same task?"
#define STRING_CMD_MODIFY_NEED_TEXT  "Additional text must be provided."
#define STRING_CMD_MODIFY_INACTIVE   "Note: Modified task {1} is {2}.  You may wish to make this task pending with: task {3} modify status:pending"

#define STRING_CMD_COLOR_USAGE       "All colors, a sample, or a legend"
#define STRING_CMD_COLOR_HERE        "Here are the colors currently in use:"
#define STRING_CMD_COLOR_COLOR       "Color"
#define STRING_CMD_COLOR_DEFINITION  "Definition"
#define STRING_CMD_COLOR_EXPLANATION "Use this command to see how colors are displayed by your terminal."
#define STRING_CMD_COLOR_16          "16-color usage (supports underline, bold text, bright background):"
#define STRING_CMD_COLOR_256         "256-color usage (supports underline):"
#define STRING_CMD_COLOR_YOURS       "Your sample:"
#define STRING_CMD_COLOR_BASIC       "Basic colors"
#define STRING_CMD_COLOR_EFFECTS     "Effects"
#define STRING_CMD_COLOR_CUBE        "Color cube rgb"
#define STRING_CMD_COLOR_RAMP        "Gray ramp"
#define STRING_CMD_COLOR_TRY         "Try running '{1}'."
#define STRING_CMD_COLOR_OFF         "Color is currently turned off in your .taskrc file.  To enable color, remove the line 'color=off', or change the 'off' to 'on'."
#define STRING_CMD_CONFIG_USAGE      "Change settings in the task configuration"
#define STRING_CMD_CONFIG_CONFIRM    "Are you sure you want to change the value of '{1}' from '{2}' to '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Are you sure you want to add '{1}' with a value of '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Are you sure you want to remove '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "No entry named '{1}' found."
#define STRING_CMD_CONFIG_FILE_MOD   "Config file {1} modified."
#define STRING_CMD_CONFIG_NO_CHANGE  "No changes made."
#define STRING_CMD_CONFIG_NO_NAME    "Specify the name of a config variable to modify."
#define STRING_CMD_HCONFIG_USAGE     "Lists all supported configuration variables, for completion purposes"
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "There are different numbers of columns and labels for report '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} shown"
#define STRING_CMD_CUSTOM_COUNT      "1 task"
#define STRING_CMD_CUSTOM_COUNTN     "{1} tasks"
#define STRING_CMD_CUSTOM_TRUNCATED  "truncated to {1} lines"
#define STRING_CMD_TIMESHEET_USAGE   "Summary of completed and started tasks"
#define STRING_CMD_TIMESHEET_STARTED "Started ({1} tasks)"
#define STRING_CMD_TIMESHEET_DONE    "Completed ({1} tasks)"
#define STRING_CMD_BURN_USAGE_M      "Shows a graphical burndown chart, by month"
#define STRING_CMD_BURN_USAGE_W      "Shows a graphical burndown chart, by week"
#define STRING_CMD_BURN_USAGE_D      "Shows a graphical burndown chart, by day"
#define STRING_CMD_BURN_TITLE        "Burndown"
#define STRING_CMD_BURN_TOO_SMALL    "Terminal window too small to draw a graph."
#define STRING_CMD_BURN_TOO_LARGE    "Terminal window too large to draw a graph."
#define STRING_CMD_BURN_DAILY        "Daily"
#define STRING_CMD_BURN_WEEKLY       "Weekly"
#define STRING_CMD_BURN_MONTHLY      "Monthly"
#define STRING_CMD_BURN_STARTED      "Started"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Done"             // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Pending"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "No convergence"
#define STRING_CMD_HELP_USAGE        "Displays this usage help text"
#define STRING_CMD_HELP_USAGE_LABEL  "使用法:"
#define STRING_CMD_HELP_USAGE_DESC   "もしも指定されていれば rc.default.command を実行します。"
#define STRING_CMD_HELP_ALIASED      "Aliased to '{1}'"
#define STRING_CMD_CAL_USAGE         "Shows a calendar, with due tasks marked"
#define STRING_CMD_CAL_BAD_MONTH     "引数 '{1}' は正しい月ではありません。"
#define STRING_CMD_CAL_BAD_ARG       "引数'{1}' を認識できません。"
#define STRING_CMD_CAL_LABEL_DATE    "Date"
#define STRING_CMD_CAL_LABEL_HOL     "Holiday"
#define STRING_CMD_CAL_SUN_MON       "'weekstart' 設定変数は 'Sunday' または 'Monday' のみが使えます。"
#define STRING_CMD_EDIT_USAGE        "task を直接変更するためにエディタを起動します"
#define STRING_CMD_CALC_USAGE        "電卓"

// Config
#define STRING_CONFIG_OVERNEST       "構成ファイルのネストが10以上になっています - これは間違いです。"
#define STRING_CONFIG_READ_INCLUDE   "インクルードファイル '{1}' が読み込めません。"
#define STRING_CONFIG_INCLUDE_PATH   "Can only include files with absolute paths, not '{1}'"
#define STRING_CONFIG_BAD_ENTRY      "Malformed entry '{1}' in config file."
#define STRING_CONFIG_DEPRECATED_COL "Your .taskrc file contains reports with deprecated columns.  Please check for entry_time, start_time or end_time in:"
#define STRING_CONFIG_DEPRECATED_VAR "Your .taskrc file contains variables that are deprecated:"

// Context
#define STRING_CONTEXT_CREATE_RC     "設定ファイルが {1} 中で見つけられませんでした。\n\nサンプルの {2} を作って taskwarrior が処理できるようにして良いですか?"
#define STRING_CONTEXT_DATA_OVERRIDE "TASKDATA override: {1}"

// Date
#define STRING_DATE_INVALID_FORMAT   "'{1}' is not a valid date in the '{2}' format."
#define STRING_DATE_BAD_WEEKSTART    "The 'weekstart' configuration variable may only contain 'Sunday' or 'Monday'."

#define STRING_DATE_JANUARY          "january"
#define STRING_DATE_FEBRUARY         "february"
#define STRING_DATE_MARCH            "march"
#define STRING_DATE_APRIL            "april"
#define STRING_DATE_MAY              "may"
#define STRING_DATE_JUNE             "june"
#define STRING_DATE_JULY             "july"
#define STRING_DATE_AUGUST           "august"
#define STRING_DATE_SEPTEMBER        "september"
#define STRING_DATE_OCTOBER          "october"
#define STRING_DATE_NOVEMBER         "november"
#define STRING_DATE_DECEMBER         "december"

#define STRING_DATE_MONDAY           "monday"
#define STRING_DATE_TUESDAY          "tuesday"
#define STRING_DATE_WEDNESDAY        "wednesday"
#define STRING_DATE_THURSDAY         "thursday"
#define STRING_DATE_FRIDAY           "friday"
#define STRING_DATE_SATURDAY         "saturday"

// dependency
#define STRING_DEPEND_BLOCKED        "Task {1} is blocked by:"
#define STRING_DEPEND_BLOCKING       "and is blocking:"
#define STRING_DEPEND_FIX_CHAIN      "Would you like the dependency chain fixed?"

// DOM
#define STRING_DOM_UNREC             "DOM: Cannot get unrecognized name '{1}'."

// Eval
#define STRING_EVAL_NO_EXPRESSION    "No expression to evaluate."
#define STRING_EVAL_UNSUPPORTED      "Unsupported operator '{1}'."
#define STRING_EVAL_OP_EXPECTED      "Operator expected."
#define STRING_EVAL_NO_EVAL          "式を評価出来ません。"
#define STRING_EVAL_NOT_EXPRESSION   "The value is not an expression."
#define STRING_PAREN_MISMATCH        "Mismatched parentheses in expression"

// edit
#define STRING_EDIT_NO_CHANGES       "No edits were detected."
#define STRING_EDIT_FAILED           "Editing failed with exit code {1}."
#define STRING_EDIT_COMPLETE         "Editing complete."
#define STRING_EDIT_IN_PROGRESS      "Task is already being edited."
#define STRING_EDIT_LAUNCHING        "Launching '{1}' now..."
#define STRING_EDIT_CHANGES          "Edits were detected."
#define STRING_EDIT_UNPARSEABLE      "Taskwarrior couldn't handle your edits.  Would you like to try again?"
#define STRING_EDIT_UNWRITABLE       "Your data.location directory is not writable."
#define STRING_EDIT_TAG_SEP          "Separate the tags with spaces, like this: tag1 tag2"
#define STRING_EDIT_DEP_SEP          "Dependencies should be a comma-separated list of task IDs/UUIDs or ID ranges, with no spaces."
#define STRING_EDIT_UDA_SEP          "User Defined Attributes"
#define STRING_EDIT_UDA_ORPHAN_SEP   "User Defined Attribute Orphans"
#define STRING_EDIT_END              "End"

#define STRING_EDIT_PROJECT_MOD      "Project modified."
#define STRING_EDIT_PROJECT_DEL      "Project deleted."
#define STRING_EDIT_DESC_MOD         "Description modified."
#define STRING_EDIT_DESC_REMOVE_ERR  "Cannot remove description."
#define STRING_EDIT_ENTRY_REMOVE_ERR "Cannot remove creation date."
#define STRING_EDIT_ENTRY_MOD        "Creation date modified."
#define STRING_EDIT_START_MOD        "Start date modified."
#define STRING_EDIT_START_DEL        "Start date removed."
#define STRING_EDIT_END_MOD          "End date modified."
#define STRING_EDIT_END_DEL          "End date removed."
#define STRING_EDIT_END_SET_ERR      "Cannot set a done date on a pending task."
#define STRING_EDIT_SCHED_MOD        "Scheduled date modified."
#define STRING_EDIT_SCHED_DEL        "Scheduled date removed."
#define STRING_EDIT_DUE_MOD          "Due date modified."
#define STRING_EDIT_DUE_DEL          "Due date removed."
#define STRING_EDIT_DUE_DEL_ERR      "Cannot remove a due date from a recurring task."
#define STRING_EDIT_UNTIL_MOD        "Until date modified."
#define STRING_EDIT_UNTIL_DEL        "Until date removed."
#define STRING_EDIT_RECUR_MOD        "Recurrence modified."
#define STRING_EDIT_RECUR_DEL        "Recurrence removed."
#define STRING_EDIT_RECUR_DUE_ERR    "A recurring task must have a due date."
#define STRING_EDIT_RECUR_ERR        "Not a valid recurrence duration."
#define STRING_EDIT_WAIT_MOD         "Wait date modified."
#define STRING_EDIT_WAIT_DEL         "Wait date removed."
#define STRING_EDIT_PARENT_MOD       "Parent UUID modified."
#define STRING_EDIT_PARENT_DEL       "Parent UUID removed."
#define STRING_EDIT_UDA_MOD          "UDA {1} modified."
#define STRING_EDIT_UDA_DEL          "UDA {1} deleted."

// These four blocks can be replaced, but the number of lines must not change.
#define STRING_EDIT_HEADER_1         "The 'task <id> edit' command allows you to modify all aspects of a task"
#define STRING_EDIT_HEADER_2         "using a text editor.  Below is a representation of all the task details."
#define STRING_EDIT_HEADER_3         "Modify what you wish, and when you save and quit your editor,"
#define STRING_EDIT_HEADER_4         "taskwarrior will read this file, determine what changed, and apply"
#define STRING_EDIT_HEADER_5         "those changes.  If you exit your editor without saving or making"
#define STRING_EDIT_HEADER_6         "modifications, taskwarrior will do nothing."

#define STRING_EDIT_HEADER_7         "Lines that begin with # represent data you cannot change, like ID."
#define STRING_EDIT_HEADER_8         "If you get too creative with your editing, taskwarrior will send you"
#define STRING_EDIT_HEADER_9         "back to the editor to try again."

#define STRING_EDIT_HEADER_10        "Should you find yourself in an endless loop, re-editing the same file,"
#define STRING_EDIT_HEADER_11        "just quit the editor without making any changes.  Taskwarrior will"
#define STRING_EDIT_HEADER_12        "notice this and stop the editing."

#define STRING_EDIT_HEADER_13        "Annotations look like this: <date> -- <text> and there can be any number of them."
#define STRING_EDIT_HEADER_14        "The ' -- ' separator between the date and text field should not be removed."
#define STRING_EDIT_HEADER_15        "A \"blank slot\" for adding an annotation follows for your convenience."

// Maintain the same spacing.
#define STRING_EDIT_TABLE_HEADER_1   "Name               Editable details"
#define STRING_EDIT_TABLE_HEADER_2   "-----------------  ----------------------------------------------------"

// Errors
// TODO Move each of these to appropriate section.
#define STRING_ERROR_PREFIX          "エラー: "
#define STRING_TRIVIAL_INPUT         "変更したいコマンドまたはタスクを指定しなければなりません。"
#define STRING_INFINITE_LOOP         "Terminated substitution because more than {1} changes were made - infinite loop protection."
#define STRING_UDA_TYPE              "User defined attributes may only be of type 'string', 'date', 'duration' or 'numeric'."
#define STRING_UDA_COLLISION         "The UDA named '{1}' is the same as a core attribute, and is not permitted."
#define STRING_INVALID_MOD           "The '{1}' attribute does not allow a value of '{2}'."
#define STRING_ERROR_DETAILS         "The setting 'calendar.details.report' must contain a single report name."
#define STRING_ERROR_NO_FILTER       "Command line filters are not supported by this command."
#define STRING_ERROR_CONFIRM_SIGINT  "Interrupted: No changes made."
#define STRING_ERROR_BAD_STATUS      "The status '{1}' is not valid."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "タスクがない。"
#define STRING_FEEDBACK_NO_TASKS_SP  "タスクが1つも指定されていません。"
#define STRING_FEEDBACK_NO_MATCH     "一致したものはありません。"
#define STRING_FEEDBACK_TASKS_SINGLE "(1 タスク)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} タスク)"
#define STRING_FEEDBACK_DELETED      "{1} will be deleted."
#define STRING_FEEDBACK_DEP_SET      "Dependencies will be set to '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "Dependencies will be changed from '{1}' to '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Dependencies '{1}' deleted."
#define STRING_FEEDBACK_DEP_WAS_SET  "Dependencies set to '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dependencies changed from '{1}' to '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} will be set to '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} will be changed from '{2}' to '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "{1} deleted."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} deleted (duration: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} set to '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} changed from '{2}' to '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Annotation of '{1}' added."
#define STRING_FEEDBACK_ANN_DEL      "Annotation '{1}' deleted."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Annotation changed to '{1}'."
#define STRING_FEEDBACK_NOP          "No changes will be made."
#define STRING_FEEDBACK_WAS_NOP      "No changes made."
#define STRING_FEEDBACK_TAG_NOCOLOR  "The 'nocolor' special tag will disable color rules for this task."
#define STRING_FEEDBACK_TAG_NONAG    "The 'nonag' special tag will prevent nagging when this task is modified."
#define STRING_FEEDBACK_TAG_NOCAL    "The 'nocal' special tag will keep this task off the 'calendar' report."
#define STRING_FEEDBACK_TAG_NEXT     "The 'next' special tag will boost the urgency of this task so it appears on the 'next' report."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Unblocked {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Task {1} '{2}' expired and was deleted."
#define STRING_FEEDBACK_BACKLOG_N    "There are {1} local changes.  Sync required."
#define STRING_FEEDBACK_BACKLOG      "There is {1} local change.  Sync required."

// helpers
#define STRING_HELPER_PROJECT_CHANGE "The project '{1}' has changed."
#define STRING_HELPER_PROJECT_COMPL  "Project '{1}' is {2}% complete"
#define STRING_HELPER_PROJECT_REM    "({1} of {2} tasks remaining)."
#define STRING_HELPER_PROJECT_REM1   "({1} task remaining)."

// Hooks
#define STRING_HOOK_ERROR_OBJECT     "Hook Error: JSON Object '{...}' expected from hook script: {1}"
#define STRING_HOOK_ERROR_NODESC     "Hook Error: JSON Object missing 'description' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_NOUUID     "Hook Error: JSON Object missing 'uuid' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_SYNTAX     "Hook Error: JSON syntax error in: {1}"
#define STRING_HOOK_ERROR_JSON       "Hook Error: JSON "
#define STRING_HOOK_ERROR_NOPARSE    "Hook Error: JSON failed to parse: "
#define STRING_HOOK_ERROR_BAD_NUM    "Hook Error: Expected {1} JSON task(s), found {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_SAME1      "Hook Error: JSON must be for the same task: {1}, in hook script: {2}"
#define STRING_HOOK_ERROR_SAME2      "Hook Error: JSON must be for the same task: {1} != {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_NOFEEDBACK "Hook Error: Expected feedback from failing hook script: {1}"

// Record
#define STRING_RECORD_EMPTY          "Empty record in input."
#define STRING_RECORD_JUNK_AT_EOL    "Unrecognized characters at end of line."
#define STRING_RECORD_NOT_FF4        "Record not recognized as format 4."

// 'show' command
#define STRING_CMD_SHOW              "Shows all configuration variables or subset"
#define STRING_CMD_SHOW_ARGS         "You can only specify 'all' or a search string."
#define STRING_CMD_SHOW_NONE         "No matching configuration variables."
#define STRING_CMD_SHOW_UNREC        "Your .taskrc file contains these unrecognized variables:"
#define STRING_CMD_SHOW_DIFFER       "Some of your .taskrc variables differ from the default values."
#define STRING_CMD_SHOW_EMPTY        "Configuration error: .taskrc contains no entries."
#define STRING_CMD_SHOW_DIFFER_COLOR "These are highlighted in {1} above."
#define STRING_CMD_SHOW_CONFIG_ERROR "Configuration error: {1} contains an unrecognized value '{2}'."
#define STRING_CMD_SHOW_NO_LOCATION  "Configuration error: data.location not specified in .taskrc file."
#define STRING_CMD_SHOW_LOC_EXIST    "Configuration error: data.location contains a directory name that doesn't exist, or is unreadable."
#define STRING_CMD_SHOW_CONF_VAR     "Config Variable"
#define STRING_CMD_SHOW_CONF_VALUE   "Value"
#define STRING_CMD_SHOW_CONF_DEFAULT "Default value"
#define STRING_CMD_SHOWRAW           "Shows all configuration settings in a machine-readable format"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior no longer supports file format 1, originally used between 27 November 2006 and 31 December 2007."
#define STRING_TASK_NO_FF2           "Taskwarrior no longer supports file format 2, originally used between 1 January 2008 and 12 April 2009."
#define STRING_TASK_NO_FF3           "Taskwarrior no longer supports file format 3, originally used between 23 March 2009 and 16 May 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Unrecognized Taskwarrior file format or blank line in data."
#define STRING_TASK_DEPEND_ITSELF    "A task cannot be dependent on itself."
#define STRING_TASK_DEPEND_MISS_CREA "Could not create a dependency on task {1} - not found."
#define STRING_TASK_DEPEND_MISS_DEL  "Could not delete a dependency on task {1} - not found."
#define STRING_TASK_DEPEND_DUP       "Task {1} already depends on task {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Circular dependency detected and disallowed."
#define STRING_TASK_VALID_DESC       "A task must have a description."
#define STRING_TASK_VALID_BLANK      "Cannot add a task that is blank."
#define STRING_TASK_VALID_BEFORE     "Warning: You have specified that the '{1}' date is after the '{2}' date."
#define STRING_TASK_VALID_REC_DUE    "A recurring task must also have a 'due' date."
#define STRING_TASK_VALID_RECUR      "The recurrence value '{1}' is not valid."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "コマンドの実行は中止された。"
#define STRING_TASK_SAFETY_ALLOW     "You did not specify a filter, and with the 'allow.empty.filter' value, no action is taken."
#define STRING_TASK_INVALID_DUR      "The duration value '{1}' is not supported."
#define STRING_TASK_INVALID_COL_TYPE "Unrecognized column type '{1}' for column '{2}'"

// TDB2
#define STRING_TDB2_PARSE_ERROR      " in {1} at line {2}"
#define STRING_TDB2_UUID_NOT_UNIQUE  "Cannot add task because the uuid '{1}' is not unique."
#define STRING_TDB2_MISSING          "Missing                       {1}  \"{2}\""
#define STRING_TDB2_NO_UNDO          "There are no recorded transactions to undo."
#define STRING_TDB2_LAST_MOD         "The last modification was made {1}"
#define STRING_TDB2_UNDO_PRIOR       "Prior Values"
#define STRING_TDB2_UNDO_CURRENT     "Current Values"
#define STRING_TDB2_DIFF_PREV        "--- previous state"             // Same length
#define STRING_TDB2_DIFF_PREV_DESC   "Undo will restore this state"   //   ||
#define STRING_TDB2_DIFF_CURR        "+++ current state "             // Same length
#define STRING_TDB2_DIFF_CURR_DESC   "Change made {1}"
#define STRING_TDB2_UNDO_CONFIRM     "The undo command is not reversible.  Are you sure you want to revert to the previous state?"
#define STRING_TDB2_MISSING_UUID     "Cannot locate UUID in task to undo."
#define STRING_TDB2_REVERTED         "Modified task reverted."
#define STRING_TDB2_REMOVED          "Task removed."
#define STRING_TDB2_UNDO_COMPLETE    "Undo complete."
#define STRING_TDB2_UNDO_SYNCED      "Cannot undo change because the task was already synced.  Modify the task instead."
#define STRING_TDB2_DIRTY_EXIT       "Exiting with unwritten changes to {1}"
#define STRING_TDB2_UNWAIT           "Un-waiting task '{1}'"

// recur.cpp
#define STRING_RECUR_CREATE          "Creating recurring task instance '{1}'"

// View
#define STRING_VIEW_TOO_SMALL        "The report has a minimum width of {1} and does not fit in the available width of {2}."

// Usage text.  This is an exception, and contains \n characters and formatting.
#define STRING_CMD_HELP_TEXT \
  "Taskwarrior のドキュメンテーションは、'man task', 'man taskrc', 'man " \
  "task-color', 'man task-sync' または http://taskwarrior.org にあります。\n" \
  "\n" \
  "一般的なコマンド形式は以下の通りです:\n" \
  "  task [<filter>] <command> [<mods>]\n" \
  "\n" \
  "<filter> は、選択するタスクに対して、0個以上使えます。" \
  "例は以下の通り:\n" \
  "  task                                      <command> <mods>\n" \
  "  task 28                                   <command> <mods>\n" \
  "  task +weekend                             <command> <mods>\n" \
  "  task project:Home due.before:today        <command> <mods>\n" \
  "  task ebeeab00-ccf8-464b-8b58-f7f2d606edfb <command> <mods>\n" \
  "\n" \
  "既定値では、フィルタの各要素は暗黙の 'and' 演算子で結合されていますが、 " \
  "'or' と 'xor' も括弧も使えます:\n" \
  "  task '(/[Cc]at|[Dd]og/ or /[0-9]+/)'      <command> <mods>\n" \
  "\n" \
  "フィルタは、IDまたはUUID数を使って固有のタスクをターゲットにすることも出来ます。" \
  "複数のタスクを指定するには、以下の形式のどれかを使います:\n" \
  "  task 1,2,3                                    delete\n" \
  "  task 1-3                                      info\n" \
  "  task 1,2-5,19                                 modify pri:H\n" \
  "  task 4-7 ebeeab00-ccf8-464b-8b58-f7f2d606edfb info\n" \
  "\n" \
  "<mods> は0個以上の、選択されたタスクに対して変更を加えます。 " \
  "例は以下の通り:\n" \
  "  task <filter> <command> project:Home\n" \
  "  task <filter> <command> +weekend +garden due:tomorrow\n" \
  "  task <filter> <command> Description/annotation text\n" \
  "  task <filter> <command> /from/to/     <- replace first match\n" \
  "  task <filter> <command> /from/to/g    <- replace all matches\n" \
  "\n" \
  "タグは任意の単語、文字数を取れます:\n" \
  "  +tag       + はタグを追加します\n" \
  "  -tag       - はタグを削除します\n" \
  "\n" \
  "内蔵の属性は以下の通り:\n" \
  "  description:    タスクの説明文\n" \
  "  status:         タスクのステータス - pending, completed, deleted, waiting\n" \
  "  project:        プロジェクト名\n" \
  "  priority:       優先度\n" \
  "  due:            期日\n" \
  "  recur:          繰り返し頻度\n" \
  "  until:          タスクの満了日\n" \
  "  limit:          レポートまたは'ページ'内の行数'\n" \
  "  wait:           タスクが保留になるまでの日時\n" \
  "  entry:          タスク生成日\n" \
  "  end:            タスク完了/削除日" \
  "  start:          タスク開始日\n" \
  "  scheduled:      タスク開始をスケジュールした日\n" \
  "  modified:       Date task was last modified\n" \
  "  depends:        このタスクが依存する他のタスク\n" \
  "\n" \
  "属性修飾子はフィルタの効果をより正確にします。使える変更子は以下の通りです:\n" \
  "\n" \
  "  Modifiers         Example            Equivalent           Meaning\n" \
  "  ----------------  -----------------  -------------------  -------------------------\n" \
  "                    due:today          due = today          Fuzzy match\n" \
  "  not               due.not:today      due != today         Fuzzy non-match\n" \
  "  before, below     due.before:today   due < today          Exact date comparison\n" \
  "  after, above      due.after:today    due >= tomorrow      Exact date comparison\n" \
  "  none              project.none:      project == ''        Empty\n" \
  "  any               project.any:       project !== ''       Not empty\n" \
  "  is, equals        project.is:x       project == x         Exact match\n" \
  "  isnt              project.isnt:x     project !== x        Exact non-match\n" \
  "  has, contains     desc.has:Hello     desc ~ Hello         Pattern match\n" \
  "  hasnt,            desc.hasnt:Hello   desc !~ Hello        Pattern non-match\n" \
  "  startswith, left  desc.left:Hel      desc ~ '^Hel'        Beginning match\n" \
  "  endswith, right   desc.right:llo     desc ~ 'llo$'        End match\n" \
  "  word              desc.word:Hello    desc ~ '\\bHello\\b'   Boundaried word match\n" \
  "  noword            desc.noword:Hello  desc !~ '\\bHello\\b'  Boundaried word non-match\n" \
  "\n" \
  "さらに、代数演算もサポートします:\n" \
  "  and  or  xor            論理演算子\n" \
  "  <  <=  =  !=  >=  >     比較演算子\n" \
  "  (  )                    優先度変更\n" \
  "\n" \
  "  task due.before:eom priority.not:L   list\n" \
  "  task '(due < eom or priority != L)'  list\n" \
  "\n" \
  "既定値の .taskrc ファイルは以下で切替られます:\n" \
  "  task ... rc:<alternate file> ...\n" \
  "  task ... rc:~/.alt_taskrc ...\n" \
  "\n" \
  ".taskrc (またはその代替) 中の値は以下で上書きできます:\n" \
  "  task ... rc.<name>=<value> ...\n" \
  "  task rc.color=off list\n" \
  "\n" \
  "コマンドまたは属性名のどれでも、それが一意ならば省略形を使えます:\n" \
  "  task list project:Home\n" \
  "  task li       pro:Home\n" \
  "\n" \
  "タスクの説明では、シェルに対する副作用を防ぐ為にエスケープする必要があります:\n" \
  "  task add \"quoted ' quote\"\n" \
  "  task add escaped \\' quote\n" \
  "\n" \
  "引数 -- は、たとえそれらが属性またはタグだとしても、その他すべての引数を" \
  "taskwarrior が 説明 として取り扱うようにさせます:\n" \
  "  task add -- project:Home needs scheduling\n" \
  "\n" \
  "以下に示すいくつかの文字はシェルに対して特別な意味があります:\n" \
  "  $ ! ' \" ( ) ; \\ ` * ? { } [ ] < > | & % # ~\n" \
  "\n"

/*
  To be included later, before the 'precendence' line.

  "  +  -                    Addition, subtraction\n" \
  "  !                       Inversion\n" \
  "  ~  !~                   Match, no match\n" \
*/

// util
#define STRING_UTIL_CONFIRM_YES      "yes"
#define STRING_UTIL_CONFIRM_YES_U    "Yes"
#define STRING_UTIL_CONFIRM_NO       "no"
#define STRING_UTIL_CONFIRM_ALL      "all"
#define STRING_UTIL_CONFIRM_ALL_U    "All"
#define STRING_UTIL_CONFIRM_QUIT     "quit"

// Legacy
#define STRING_LEGACY_PRIORITY       "古い属性が見つかった。'{1}' を '{2}' に変更してください。"

#endif
