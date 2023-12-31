#ifndef TABLE_H
#define TABLE_H

#include "row.h"

#include <vector>

class Table {
public:
	Table() = default;
	Table(const std::string&);
	void insertRow(const Row&);
	void updateRow(int, const Row&);
	std::vector<Row> selectAll() const;
	Row selectRow(int);
	void selectRowNum(int);
	void select(const std::vector<std::string>&) const;
	void deleteRow(int);
	std::string getName() const;
	void show() const;
	bool loadFromFile(const std::string&, Row&) const;
	bool loadFromFile(const std::string&);
    	bool saveToFile(const std::string&, const Row&) const;
    	bool meetCondition(const Row&, const std::string&);
private:
	std::vector<Row> rows;
	std::string name;
	std::vector<std::string> rowFiles;
	std::string generateFileName(int) const;
};

#endif // TABLE_H
