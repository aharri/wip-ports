# $OpenBSD: ports/graphics/freeimage/Makefile,v 1.1.1.1 2009/03/20 13:53:04 eric Exp $

COMMENT=		c/c++ library for common image format

DISTNAME=		FreeImage3110
PKGNAME=		freeimage-3.11.0
REVISION =		0
CATEGORIES=		graphics

SHARED_LIBS+=		freeimage	1.0
SHARED_LIBS+=		freeimageplus	1.0

HOMEPAGE=		http://freeimage.sourceforge.net/

MAINTAINER=		Eric Faurot <eric@openbsd.org>

# GPL / "FreeImage Public Nons^WLicense"
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes 
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes 

WANTLIB=		stdc++

MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=freeimage/}
EXTRACT_SUFX=		.zip

CFLAGS +=		-fPIC

WRKDIST=		${WRKDIR}/FreeImage

USE_GMAKE=		Yes

MAKE_ENV=		LIBfreeimage_VERSION=${LIBfreeimage_VERSION} \
			LIBfreeimageplus_VERSION=${LIBfreeimageplus_VERSION}
MAKE_FLAGS =		COMPILERFLAGS="${CFLAGS}"
ALL_TARGET =		FreeImage

do-build:
	cd "${WRKSRC}" && env -i ${MAKE_ENV} ${MAKE_PROGRAM} ${MAKE_FLAGS} \
		-f Makefile.gnu ${ALL_TARGET}
	cd "${WRKSRC}" && env -i ${MAKE_ENV} ${MAKE_PROGRAM} ${MAKE_FLAGS} \
		-f Makefile.fip ${ALL_TARGET}

do-install:
	${INSTALL_DATA} \
		${WRKSRC}/Wrapper/FreeImagePlus/FreeImagePlus.h \
		${WRKSRC}/Source/FreeImage.h \
		${PREFIX}/include/
	${INSTALL_DATA} \
		${WRKSRC}/libfreeimage.a \
		${WRKSRC}/libfreeimage.so.${LIBfreeimage_VERSION} \
		${WRKSRC}/libfreeimageplus.a \
		${WRKSRC}/libfreeimageplus.so.${LIBfreeimageplus_VERSION} \
		${PREFIX}/lib/

.include <bsd.port.mk>
