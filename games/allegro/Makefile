# $OpenBSD: ports/games/allegro/Makefile,v 1.7 2011/04/18 11:53:18 landry Exp $

BROKEN-hppa =	./src/x/xdga2s.s:25: Error: symbol .text is already defined

COMMENT =	game programming library for C/C++ developers

SHARED_ONLY =	Yes

V =		5.0.4
DISTNAME =	allegro-$V
CATEGORIES =	games devel multimedia

SHARED_LIBS +=  allegro                   0.0 # 5.0
SHARED_LIBS +=  allegro_acodec            0.0 # 5.0
SHARED_LIBS +=  allegro_audio             0.0 # 5.0
SHARED_LIBS +=  allegro_color             0.0 # 5.0
SHARED_LIBS +=  allegro_dialog            0.0 # 5.0
SHARED_LIBS +=  allegro_font              0.0 # 5.0
SHARED_LIBS +=  allegro_image             0.0 # 5.0
SHARED_LIBS +=  allegro_main              0.0 # 5.0
SHARED_LIBS +=  allegro_memfile           0.0 # 5.0
SHARED_LIBS +=  allegro_primitives        0.0 # 5.0
SHARED_LIBS +=  allegro_ttf               0.0 # 5.0

HOMEPAGE =	http://alleg.sourceforge.net/
MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=alleg/}

# bsd-like
# "Altered source versions must be plainly marked as such
#  and must not be misrepresented as being the original software."
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += GL GLU ICE SM X11 Xcomposite Xcursor Xdamage Xext Xfixes
WANTLIB += Xi Xinerama Xpm Xrandr Xrender atk-1.0 cairo expat
WANTLIB += fontconfig freetype gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0
WANTLIB += glib-2.0 gmodule-2.0 gobject-2.0 gthread-2.0 gtk-x11-2.0
WANTLIB += iconv intl jpeg m ogg openal pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pixman-1 png pthread-stubs vorbis vorbisfile
WANTLIB += xcb xcb-render xcb-shm z

# still needed?
SUBST_VARS =		V

MODULES =		devel/cmake
LIB_DEPENDS =		audio/libvorbis \
			audio/openal \
			converters/libiconv \
			devel/atk \
			graphics/cairo \
			graphics/jpeg \
			x11/gtk+2

CONFIGURE_ARGS =	-DCMAKE_C_FLAGS="${CFLAGS}" \
			-DCMAKE_BUILD_TYPE=OpenBSD \
			-DWANT_OSS=Off

NO_REGRESS =		Yes

CFLAGS +=		-I${X11BASE}/include -L${X11BASE}/lib -L${PREFIX}/lib

post-extract:
	cp ${FILESDIR}/sndio.c ${WRKSRC}/src/unix

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/allegro
	cd ${WRKSRC}/docs/man && pax -rw . ${PREFIX}/man/man3/
	cd ${WRKSRC}/docs/html/refman && pax -rw . ${PREFIX}/share/doc/allegro

.include <bsd.port.mk>
