/*
 * Copyright (c) 2019 BestSolution.at and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     Christoph Caks <ccaks@bestsolution.at> - initial API and implementation
 */

#include <iomanip>
#include <string>
#include <string.h>
#include <algorithm>
#include <sstream>

#include <utils/Logger.h>

bool debugEnabled = false;
bool errorEnabled = true;
bool infoEnabled = true;

std::ostream& operator<<(std::ostream& ostr, const LogLevel& level) {
	switch (level) {
	case Debug: return ostr << "DEBUG";
	case Error: return ostr << "ERROR";
	case Info: return ostr << "INFO";
	default: return ostr;
	}
}

#ifdef WIN32
	struct MatchPathSeparator {
		bool operator()(char c) const {
			return c == '\\' || c == '/';
		}
	};
#else
	struct MatchPathSeparator {
		bool operator()(char c) const {
			return c == '/';
		}
	};
#endif

class NullBuffer : public std::streambuf
{
public:
  int overflow(int c) { return c; }
};

class NullStream : public std::ostream {
public:
	NullStream() : std::ostream(&m_sb) {}

	static NullStream instance;
private:
	NullBuffer m_sb;
};

static NullStream nullStream;

std::string filename(std::string file) {
	return std::string(
		std::find_if( file.rbegin(), file.rend(), MatchPathSeparator() ).base(),
		file.end() );
}

std::string cut(std::string str, size_t size) {
	size_t len = str.length();
	if (len < size) return str;
	else return str.substr(len-size, size);
}

std::ostream& Log(LogLevel level, std::string file, int line, std::string func) {


	switch (level) {
	case Debug: if (!debugEnabled) return nullStream;
	case Error: if (!errorEnabled) return nullStream;
	case Info: if (!infoEnabled) return nullStream;
	}
	
	
	
	std::string fname = filename(file);

	std::ostringstream os;
	os << "[C] [" << std::setw(5) << level << "] " << std::setw(40) << std::right << cut(fname, 40) << ":" << std::dec << std::setw(3) << line << " - " << std::setw(100) << std::left << cut(func, 100) << " ";
	return std::cout << os.str();
}

void LogSetEnabled(LogLevel level, bool enable) {
	switch (level) {
	case Debug: debugEnabled = enable; break;
	case Error: errorEnabled = enable; break;
	case Info: infoEnabled = enable; break;
	}
}
