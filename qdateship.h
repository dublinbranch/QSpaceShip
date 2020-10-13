#pragma once

std::strong_ordering operator<=>(const QDate& lhs, const QDate& rhs) {
	if (lhs < rhs) {
		return std::strong_ordering::less;
	} else if (lhs == rhs) {
		return std::strong_ordering::equal;
	} else { //(c > 0)
		return std::strong_ordering::greater;
	}
}
