#pragma once

std::strong_ordering operator<=>(const QString& lhs, const QString& rhs) {
	auto c = lhs.compare(rhs);
	if (c < 0) {
		return std::strong_ordering::less;
	} else if (c == 0) {
		return std::strong_ordering::equal;
	} else { //(c > 0)
		return std::strong_ordering::greater;
	}
}
