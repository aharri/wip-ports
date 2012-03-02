# $OpenBSD$

COMMENT =	Qt-based 2D CAD system

V =		20120301
DISTNAME =	librecad-$V
PKGNAME =	librecad-1.0.1.$V
CATEGORIES =	cad graphics

HOMEPAGE =	http://librecad.org/

MAINTAINER =	Antti Harri <iku@openbsd.fi>

# GPLv2 and other free licenses
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += ICE QtGui QtHelp QtNetwork QtSql QtXml SM
WANTLIB += X11 Xext Xi Xinerama Xrender c fontconfig freetype
WANTLIB += m z pthread

MASTER_SITES = http://openbsd.fi/dist/
#MASTER_SITES =	https://github.com/LibreCAD/LibreCAD/tarball/$V/

MODULES =	x11/qt4 gcc4
BUILD_DEPENDS =	devel/boost

MODGCC4_ARCHS =	*
MODGCC4_LANGS =	c++
MODGCC4_VERSION=4.6

NO_REGRESS =	Yes

QMAKE_FLAGS =	QMAKE_CXX="${CXX}" QMAKE_CXXFLAGS="${CXXFLAGS}" LIBS="${LDFLAGS}"
CXXFLAGS +=	`pkg-config --cflags freetype2`
LDFLAGS +=	`pkg-config --libs freetype2`

pre-configure:
	${SUBST_CMD} ${WRKSRC}/librecad/src/lib/engine/rs_system.cpp

do-configure:
	cd ${WRKSRC} && \
		${SETENV} ${QMAKE_ENV} qmake4 ${QMAKE_FLAGS} librecad.pro

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/unix/librecad ${PREFIX}/bin
.for dir in fonts patterns qm
	${INSTALL_DATA_DIR} ${PREFIX}/share/librecad/${dir}
	${INSTALL_DATA} ${WRKSRC}/unix/resources/${dir}/* ${PREFIX}/share/librecad/${dir}
.endfor

.include <bsd.port.mk>
