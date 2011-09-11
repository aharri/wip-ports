# $OpenBSD$

SHARED_ONLY =		Yes

COMMENT =		fast and lightweight 2D rigid body physics library in C
V =			6.0.1
DISTNAME =		Chipmunk-$V
PKGNAME =		libchipmunk-$V
SHARED_LIBS =		chipmunk 0.0 # 6.0

CATEGORIES =		devel
HOMEPAGE =		http://code.google.com/p/chipmunk-physics/

# MIT
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =		http://files.slembcke.net/chipmunk/release/Chipmunk-6.x/
EXTRACT_SUFX =		.tgz

CONFIGURE_ARGS =	-DBUILD_DEMOS=OFF \
			-DBUILD_STATIC=OFF \
			-DINSTALL_STATIC=OFF

MODULES =		devel/cmake
LIB_DEPENDS =		graphics/freeglut
NO_REGRESS =		Yes

.include <bsd.port.mk>
