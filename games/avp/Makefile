# $OpenBSD$

#ONLY_FOR_ARCHS =	???
#NOT_FOR_ARCHS =	???
#SHARED_ONLY =		???

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

#MODULES =		???
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
LIB_DEPENDS =		audio/openal \
			devel/sdl

MAKE_FLAGS =		CC="${CC}" CXX="${CXX}"
MAKE_ENV =		CFLAGS="${CFLAGS}" CXXFLAGS="${CXXFLAGS}"

USE_GMAKE =		Yes
NO_REGRESS =		Yes

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/avp ${PREFIX}/bin

.include <bsd.port.mk>
