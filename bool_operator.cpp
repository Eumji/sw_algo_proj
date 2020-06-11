typedef struct Result_PQ {
	std::string number;
	int idx;
	bool operator <(const Result_PQ& o)const {
		if (number[0] == '9' && o.number[0] == '9') return number < o.number;
		else if (number[0] == '9') return true;
		else if (o.number[0] == '9') return false;
		else return number < o.number;
	};
};
