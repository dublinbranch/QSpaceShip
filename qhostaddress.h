#ifndef QHOSTADDR_SPCS
#define QHOSTADDR_SPCS

std::strong_ordering operator<=>(const QHostAddress& lhs, const QHostAddress& rhs) {
	return lhs.toIPv4Address() <=> rhs.toIPv4Address();
}


#endif // SITECHECK_H
