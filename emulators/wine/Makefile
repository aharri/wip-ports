# $OpenBSD: ports/emulators/wine/Attic/Makefile,v 1.45 2011/05/01 12:12:17 ajacoutot Exp $

# XXX  For ccache use: CC="ccache egcc"
# XXX  This port is not finished and does not work.


SHARED_ONLY =		Yes
ONLY_FOR_ARCHS =	i386 amd64

COMMENT =		wine enables you to run windows binaries

DISTNAME =		wine-1.4

SHARED_LIBS =		wine 0.0

CATEGORIES =		x11 emulators

HOMEPAGE =		http://winehq.org/

MAINTAINER =		Ariane van der Steldt <ariane@stack.nl>

# LGPLv2.1+
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += c m z pthread ssl GL GLU crypto ossaudio ncurses
WANTLIB += ICE SM X11 Xext Xpm Xxf86dga Xxf86vm gphoto2
WANTLIB += gphoto2_port jpeg lcms png sane xslt iconv drm
WANTLIB += pthread-stubs xcb jpeg png gphoto2 gphoto2_port
WANTLIB += sane lcms iconv

MASTER_SITES =		http://ibiblio.org/pub/linux/system/emulators/wine/ \
			http://prdownloads.sourceforge.net/wine/
EXTRACT_SUFX =		.tar.bz2

MODULES =		gcc4
BUILD_DEPENDS =		devel/bison
LIB_DEPENDS =		textproc/libxslt \
			textproc/libxml \
			graphics/jpeg \
			graphics/png \
			graphics/libgphoto2 \
			graphics/sane-backends \
			graphics/lcms \
			converters/libiconv
RUN_DEPENDS =		devel/desktop-file-utils

MODGCC4_ARCHS =		*
MODGCC4_LANGS =		c
MODGCC4_VERSION=	4.6

USE_GMAKE =		Yes
USE_LIBTOOL =		Yes
USE_GROFF =		Yes
CONFIGURE_STYLE =	gnu autoconf

CPPFLAGS =		-I${LOCALBASE}/include \
			-I${LOCALBASE}/include/libpng \
			-I${X11BASE}/include

LDFLAGS =		-L${LOCALBASE}/lib \
			-L${X11BASE}/lib \
			-lz -lm -lcrypto -liconv -pthread

X_EXTRA_LIBS =		-L${X11BASE}/lib \
			-lXau -lXdmcp -ldrm -lGL -lGLU -lXxf86vm -lXdamage

CONFIGURE_ENV =		CPPFLAGS="${CPPFLAGS}" \
			LDFLAGS="${LDFLAGS}" \
			X_EXTRA_LIBS="${X_EXTRA_LIBS}"

# User configuration dir for regress.
MAKE_ENV =		WINEPREFIX="${WRKBUILD}/.wine"

CONFIGURE_ARGS +=	--without-alsa \
			--without-oss \
			--without-capi \
			--without-coreaudio \
			--without-cups \
			--without-gnutls \
			--without-hal \
			--without-ldap

AUTOCONF_VERSION =	2.63

FLAVORS =		cups
FLAVOR ?=
.if ${FLAVOR:L:Mcups}
CONFIGURE_ARGS +=	--with-cups
.else
CONFIGURE_ARGS +=	--without-cups
.endif

.if ${MACHINE_ARCH} == "amd64"
CONFIGURE_ARGS	+=	--enable-win64
.endif

post-configure:
	cd ${WRKSRC} && env -i ${MAKE_ENV} ${MAKE_PROGRAM} ${MAKE_FLAGS} \
		-f ${MAKE_FILE} depend

.include <bsd.port.mk>
