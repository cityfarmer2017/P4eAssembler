/**
 * Copyright [2024] <wangdc1111@hotmail.com>
 */
#ifndef INC_TABLE_PROC_TABLE_H_
#define INC_TABLE_PROC_TABLE_H_

#include <string>
#include <memory>

class assembler;

class table {
    friend class match_actionid;
    friend class mask_table;
    friend class mat_link;

 public:
    table(const std::string &in, const std::string &ot) : input_path(in), otput_path(ot) {}
    table() = default;

    table(const table&) = delete;
    table(table&&) = delete;
    table& operator=(const table&) = delete;
    table& operator=(table&&) = delete;

    ~table() = default;

    virtual int generate_table_data(const std::shared_ptr<assembler>&) = 0;

 private:
    std::string input_path;
    std::string otput_path;
};

#endif  // INC_TABLE_PROC_TABLE_H_
