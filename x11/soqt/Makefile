# $OpenBSD$

SHARED_ONLY =		Yes

COMMENT =		library for Coin 3D
V =			1.5.0
DISTNAME =		SoQt-$V
PKGNAME =		soqt-$V

#SHARED_LIBS =

CATEGORIES =		x11 devel
HOMEPAGE =		http://www.coin3d.org/lib/soqt

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =		http://ftp.coin3d.org/coin/src/all/
MODULES =		x11/qt4
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
#LIB_DEPENDS =		???
#REGRESS_DEPENDS =	???

#MAKE_FLAGS =
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#REGRESS_FLAGS =	???

# build/configuration variables
#
#SEPARATE_BUILD =	simple (build in a directory other than WRKSRC)
#SEPARATE_BUILD =	flavored (distinct flavors may share a common WRKSRC)
#USE_GMAKE =		Yes
#USE_GROFF =		Yes
# Programs that uses libtool should use this option,
# unless there is a really good reason not to.
#USE_LIBTOOL =		Yes
# Set CONFIGURE_STYLE to value corresponding to some standard configuration
# 	  perl [modbuild]: perl's MakeMaker Makefile.PL (modbuild: perl's
#	  Module::Build Build.PL)
# 	  gnu [autoconf] [old] [dest]: gnu style configure (old: no
# 	  sysconfdir), (dest: add DESTDIR, does not handle it),
# 	  (autoconf: needed by port, implies gnu)
# 	XXX: cygnus products do NOT use autoconf for making the main
# 		configure from configure.in
# 	  imake [noman]: port uses imake for configuration.
#	  (noman: no man page installation)
# 	  simple: port has its own configure script
CONFIGURE_STYLE =	gnu
#CONFIGURE_SCRIPT =	??? (if other than configure)
#CONFIGURE_ARGS =	--enable-system-expat=no
#CPPFLAGS =		-I${X11BASE}/include `pkg-config --cflags Coin`
CONFIGURE_ENV =		CPPFLAGS="${CFLAGS}" \
			LDFLAGS="${LDFLAGS} -L${X11BASE}/lib"

# for gnu stuff
#AUTOCONF_VERSION =	??? (defaults to 2.13)
#AUTOMAKE_VERSION =	??? (defaults to 1.4)
# config.guess and others are copied here
#MODGNU_CONFIG_GUESS_DIRS = ??? (defaults to ${WRKSRC}


NO_REGRESS =		Yes

CFLAGS =		`pkg-config --cflags Coin` -pthread
LDFLAGS =		`pkg-config --libs Coin`
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#REGRESS_TARGET =	???

.include <bsd.port.mk>
