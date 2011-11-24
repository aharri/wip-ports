# $OpenBSD$

COMMENT=	Qt-based 2D CAD system

V=		1.0.0rc4
DISTNAME=	LibreCAD-LibreCAD-$V-0-gdf9e745
PKGNAME=	librecad-${V}
CATEGORIES=	cad graphics

HOMEPAGE=	http://librecad.org/

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

WANTLIB += ICE Qt3Support QtGui QtHelp QtNetwork QtSql QtXml SM
WANTLIB += X11 Xext Xi Xinerama Xrender c fontconfig freetype
WANTLIB += m pthread stdc++

#WANTLIB=		X11 Xext c m pthread stdc++

MASTER_SITES=	https://github.com/LibreCAD/LibreCAD/tarball/$V/

MODULES=	x11/qt4

#USE_GMAKE=	Yes
NO_REGRESS=	Yes

#PORTHOME=	${WRKDIR}

#MAKE_ENV+=	QTDIR=${MODQT_LIBDIR} \
#		MAKE=${MAKE_PROGRAM}
#MAKE_FLAGS =	CXXFLAGS="-I${PREFIX}/include/X11/qt4/QtHelp/"

#SUBST_VARS=	CXXFLAGS LOCALBASE MODQT_LIBDIR
SUBST_VARS =	MODQT_LIBDIR

#CFLAGS =	-I${PREFIX}include/X11/qt4/QtHelp/
WRKDIST =	${WRKDIR}/LibreCAD-LibreCAD-df9e745


pre-configure:
	${SUBST_CMD} ${WRKSRC}/scripts/postprocess-unix.sh
#	${SUBST_CMD} ${WRKSRC}/mkspecs/defs.pro \
#		${WRKSRC}/qcadlib/src/engine/rs_system.h \
#		${WRKSRC}/qcadlib/src/engine/rs_system.cpp \
#		${WRKSRC}/qcad/src/qc_applicationwindow.cpp

do-configure:
	cd ${WRKSRC} && \
		${SETENV} ${QMAKE_ENV} qmake4 ${QMAKE_FLAGS} librecad.pro

#do-build:
#	cd ${WRKBUILD} && qmake4 -project && qmake4 && ${MAKE} ${MAKE_FLAGS}
#do-build:
#	cd ${WRKBUILD}/scripts && \
#		${SETENV} ${MAKE_ENV} /bin/sh ./build_qcad.sh

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/unix/librecad ${PREFIX}/bin
.for dir in fonts patterns qm
	${INSTALL_DATA_DIR} ${PREFIX}/share/librecad/${dir}
	${INSTALL_DATA} ${WRKSRC}/unix/resources/${dir}/* ${PREFIX}/share/librecad/${dir}
.endfor
#	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/qcad
#	${INSTALL_DATA} ${WRKSRC}/qcad/data/* ${PREFIX}/share/examples/qcad
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/librecad
	cd ${WRKSRC}/support/doc && tar cf - . | \
		tar -C ${PREFIX}/share/doc/librecad -xf -
	chown -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/share/doc/librecad/*

.include <bsd.port.mk>
