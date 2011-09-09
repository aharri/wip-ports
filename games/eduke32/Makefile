# $OpenBSD$

COMMENT =		first person shooter

V = 			20110502-1876
DISTNAME =		eduke32_src_$V
PKGNAME =		eduke32-${V:C/-....//}

CATEGORIES =		games x11

HOMEPAGE =		http://www.eduke32.com/

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv2, BUILD license and shareware data
PERMIT_PACKAGE_CDROM =	"BUILD engine license is not compatible with GPLv2. Data cannot be put on CDROM"
PERMIT_PACKAGE_FTP =	"BUILD engine license is not compatible with GPLv2."
PERMIT_DISTFILES_CDROM ="BUILD engine license is not compatible with GPLv2. Data cannot be put on CDROM"
PERMIT_DISTFILES_FTP =	"BUILD engine license is not compatible with GPLv2."

WANTLIB =		c m pthread stdc++ vorbisfile SDL SDL_mixer

MASTER_SITES =		http://dukeworld.duke4.net/eduke32/synthesis/$V/ \
			http://devio.us/~iku/dist/
MASTER_SITES0 =		ftp://ftp.3drealms.com/share/

DISTFILES =		${DISTNAME}.tar.bz2 \
			3dduke13.zip:0

BUILD_DEPENDS =		archivers/unzip
LIB_DEPENDS =		audio/libvorbis \
			devel/sdl \
			devel/sdl-mixer

MAKE_FLAGS =		PRETTY_OUTPUT=0
USE_GMAKE =		Yes
NO_REGRESS =		Yes

CFLAGS =		`pkg-config --cflags vorbisfile`
LDFLAGS =		`pkg-config --libs vorbisfile`
WRKDIST =		${WRKDIR}/${DISTNAME:S/src_//}

post-extract:
	unzip -d ${WRKDIR}/shareware ${WRKDIR}/DN3DSW13.SHR

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/eduke32 ${WRKSRC}/mapster32 ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/duke3d-data
	cd ${WRKDIR}/shareware && for i in *; do ${INSTALL_DATA} $$i ${PREFIX}/share/duke3d-data/; done

.include <bsd.port.mk>
