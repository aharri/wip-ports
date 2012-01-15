# $OpenBSD$

#ONLY_FOR_ARCHS =	???
#NOT_FOR_ARCHS =	???
#SHARED_ONLY =		???

COMMENT =		Wolfenstein: Enemy Territory

DISTNAME =		enemy-territory-20120114
#PKGNAME =		???

#SHARED_LIBS =		???

CATEGORIES =		games x11

HOMEPAGE =		http://www.splashdamage.com/wolfet

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv3
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

#WANTLIB =		???

MASTER_SITES =		http://openbsd.fi/dist/

MODULES =		devel/scons
BUILD_DEPENDS =		devel/nasm
#RUN_DEPENDS =		???
#LIB_DEPENDS =		???

MODSCONS_FLAGS =	BUILD="release" \
			MYCPPFLAGS="${CXXFLAGS}"

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#REGRESS_FLAGS =	???

NO_REGRESS =		Yes

CXXFLAGS +=		-I${X11BASE}/include
#LDFLAGS =		???
WRKSRC =		${WRKDIST}/src

pre-configure:
	${SUBST_CMD} ${WRKSRC}/SConscript.core

.include <bsd.port.mk>
