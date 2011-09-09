# $OpenBSD: ports/lang/kaffe/Makefile,v 1.52 2011/06/20 21:54:37 jasper Exp $
ONLY_FOR_ARCHS=	amd64 i386 powerpc

COMMENT-main=	"kaffe.org's Java JDK1.4 compiler, runtime and libs"

DISTNAME=	kaffe-20110704

CATEGORIES=	lang

SHARED_LIBS +=		kaffe	0.0
SHARED_LIBS +=		kaffevm	3.0

MASTER_SITES=	${HOMEPAGE}ftp/pub/kaffe/v1.1.x-development/ \
		http://openbsd.fi/dist/

HOMEPAGE=	http://www.kaffe.org/

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MODULES=	devel/gettext
# libtool needs to support -dlopen option
USE_LIBTOOL=	gnu
USE_GMAKE=	Yes
USE_GROFF =	Yes

BUILD_DEPENDS=	archivers/zip \
		lang/jikes>=1.22p0
LIB_DEPENDS=	archivers/zziplib \
		x11/gtk+2 \
		devel/libaudiofile \
		audio/esound \
		devel/libtool,-ltdl \
		devel/pcre \
		devel/glib2 \
		lang/classpath
RUN_DEPENDS=	archivers/zip \
		lang/jikes>=1.22p0

WANTLIB += c glib-2.0 ltdl m pcre pthread z zzip

SEPARATE_BUILD=	concurrent

MULTI_PACKAGES=	-main
PREFIX=		${LOCALBASE}/kaffe
PREFIX-main=	${LOCALBASE}

CONFIGURE_STYLE=gnu
AUTOCONF_VERSION =      2.67
AUTOMAKE_VERSION =      1.11

CONFIGURE_ENV=	CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
		LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

# XXX: hardcodings
CONFIGURE_ARGS+= \
		--with-iconv-prefix="${LOCALBASE}" \
		--disable-boehm-gc-configuration \
		--with-engine=intrp \
		--with-classpath-prefix="/usr/local" \
		--with-classpath-classes="/usr/local/share/classpath/glibj.zip"

GNU_ARCH=	${MACHINE_ARCH:S/amd64/x86_64/}
SUBST_VARS=	GNU_ARCH


pre-configure:
	cd ${WRKSRC}; \
		AUTOMAKE_VERSION="${AUTOMAKE_VERSION}" \
		AUTOCONF_VERSION="${AUTOCONF_VERSION}" \
		autoreconf -fi

.include <bsd.port.mk>
