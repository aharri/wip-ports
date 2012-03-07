# $OpenBSD$

COMMENT =	Enhanced Duke Nukem 3D engine
#RDATE =	20111001
#RTAG =		2055
RDATE =		20120301
RTAG =		2394
DISTNAME =	eduke32_src_${RDATE}-${RTAG}
PKGNAME =	eduke32-2.0.0.${RTAG}
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	games x11 wip

HOMEPAGE =	http://www.eduke32.com/

MAINTAINER =	Ryan Freeman <ryan@slipgate.org>

# GPLv2, BUILD license and shareware data
PERMIT_PACKAGE_CDROM =  "BUILD engine license is not compatible with GPLv2. Data cannot be put on CDROM"
PERMIT_PACKAGE_FTP =    "BUILD engine license is not compatible with GPLv2."
PERMIT_DISTFILES_CDROM ="BUILD engine license is not compatible with GPLv2. Data cannot be put on CDROM"
PERMIT_DISTFILES_FTP =  "BUILD engine license is not compatible with GPLv2."

BUILD_DEPENDS = archivers/unzip

.if ${MACHINE_ARCH} == "i386"
BUILD_DEPENDS += devel/nasm
.endif

WANTLIB =	SDL c m pthread stdc++ SDL_mixer>=3 vorbisfile vpx

LIB_DEPENDS =	audio/libvorbis \
		multimedia/libvpx \
		devel/sdl \
		devel/sdl-mixer 

MASTER_SITES =	http://dukeworld.duke4.net/eduke32/synthesis/${RDATE}-${RTAG}/ \
		http://devio.us/~iku/dist/
MASTER_SITES0 =	ftp://ftp.3drealms.com/share/

DISTFILES =	${DISTNAME}${EXTRACT_SUFX} \
		3dduke13.zip:0

SEPERATE_BUILD = concurrent
MAKE_FLAGS =	PRETTY_OUTPUT=0 CC="${CC}" CXX="${CXX}"
USE_GMAKE =	Yes
NO_REGRESS =	Yes

WRKDIST =	${WRKDIR}/eduke32_${RDATE}-${RTAG}/

post-extract:
	${LOCALBASE}/bin/unzip -d ${WRKDIR}/shareware ${WRKDIR}/DN3DSW13.SHR
	# check for data files in correct location
	@perl -pi -e "s,/usr/share/games/eduke32,${TRUEPREFIX}/share/duke3d," \
		${WRKSRC}/source/astub.c
	@perl -pi -e "s,/usr/share/games/eduke32,${TRUEPREFIX}/share/duke3d," \
		${WRKSRC}/source/game.c

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/eduke32 ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKBUILD}/mapster32 ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/duke3d/
	cd ${WRKDIR}/shareware && for i in *; do ${INSTALL_DATA} $$i ${PREFIX}/share/duke3d/; done

.include <bsd.port.mk>
