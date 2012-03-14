# $OpenBSD$

ONLY_FOR_ARCHS =	i386 amd64
BROKEN-amd64 =		64b and endianness bugs when loading data

COMMENT =		first person shooter
COMMIT_ID =		66feb1c
DISTNAME =		mbait-avpmp-${COMMIT_ID}
PKGNAME =		avp-20091121
CATEGORIES =		games x11

HOMEPAGE =		https://github.com/mbait/avpmp

MAINTAINER =		Antti Harri <iku@openbsd.fi>

PERMIT_PACKAGE_CDROM =	"Freely available but no rights granted"
PERMIT_PACKAGE_FTP =	"Freely available but no rights granted"
PERMIT_DISTFILES_CDROM ="Freely available but no rights granted"
PERMIT_DISTFILES_FTP =	"Freely available but no rights granted"

WANTLIB += SDL c m openal pthread stdc++

FETCH_MANUALLY += "You must fetch ${DISTNAME}.tar.gz from"
FETCH_MANUALLY += "${HOMEPAGE}/tarball/${COMMIT_ID} manually."

LIB_DEPENDS =		audio/openal \
			devel/sdl
# For debugging
#DEBUG =			-ggdb3 -O0 -DDB_LEVEL=5

MAKE_FLAGS =		CC="${CC}" CXX="${CXX}"
MAKE_ENV =		CFLAGS="${CFLAGS}" CXXFLAGS="${CXXFLAGS}"

USE_GMAKE =		Yes
NO_REGRESS =		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/avp ${PREFIX}/bin

.include <bsd.port.mk>
