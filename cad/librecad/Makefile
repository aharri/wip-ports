# $OpenBSD$

COMMENT =	Qt-based 2D CAD system

V =		20111126
DISTNAME =	librecad-$V
PKGNAME =	librecad-1.0.0.$V
CATEGORIES =	cad graphics

HOMEPAGE =	http://librecad.org/

MAINTAINER =	Antti Harri <iku@openbsd.fi>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += ICE QtGui QtHelp QtNetwork QtSql QtXml SM
WANTLIB += X11 Xext Xi Xinerama Xrender c fontconfig freetype
WANTLIB += m pthread stdc++

MASTER_SITES = http://openbsd.fi/dist/
#MASTER_SITES =	https://github.com/LibreCAD/LibreCAD/tarball/$V/

MODULES =	x11/qt4

NO_REGRESS =	Yes

#MAKE_ENV+=	QTDIR=${MODQT_LIBDIR} \
#		MAKE=${MAKE_PROGRAM}
#MAKE_FLAGS =	CXXFLAGS="-I${PREFIX}/include/X11/qt4/QtHelp/"
#MAKE_ENV =	CXXFLAGS="${CXXFLAGS}"

#SUBST_VARS=	CXXFLAGS LOCALBASE MODQT_LIBDIR
SUBST_VARS =	MODQT_LIBDIR V

#CFLAGS =	-I${PREFIX}include/X11/qt4/QtHelp/
#WRKDIST =	${WRKDIR}/LibreCAD-LibreCAD-df9e745

pre-configure:
	${SUBST_CMD} ${WRKSRC}/scripts/postprocess-unix.sh \
		${WRKSRC}/librecad.pro \
		${WRKSRC}/src/lib/engine/rs_system.cpp

do-configure:
	cd ${WRKSRC} && \
		${SETENV} ${QMAKE_ENV} qmake4 ${QMAKE_FLAGS} librecad.pro

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/unix/librecad ${PREFIX}/bin
.for dir in fonts patterns qm
	${INSTALL_DATA_DIR} ${PREFIX}/share/librecad/${dir}
	${INSTALL_DATA} ${WRKSRC}/unix/resources/${dir}/* ${PREFIX}/share/librecad/${dir}
.endfor
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/librecad
	cd ${WRKSRC}/support/doc && tar cf - . | \
		tar -C ${PREFIX}/share/doc/librecad -xf -
	${INSTALL_DATA} ${WRKSRC}/LICENSE ${PREFIX}/share/doc/librecad
	chown -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/share/doc/librecad/*

.include <bsd.port.mk>
