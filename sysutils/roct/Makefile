PORTNAME=	roct
PORTVERSION=	1.9.1
CATEGORIES=	sysutils

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Radeon Open Compute Thunk Interface
WWW=		https://github.com/RadeonOpenCompute/ROCT-Thunk-Interface

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

ONLY_FOR_ARCHS=	amd64 powerpc64

LIB_DEPENDS=	libpci.so:devel/libpci

USES=		cmake pkgconfig
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	iotamudelta
GH_PROJECT=	ROCT-Thunk-Interface
GH_TAGNAME=	9d1fb76

post-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/include/roct
	${MKDIR} ${STAGEDIR}/${PREFIX}/include/roct/linux
	${INSTALL_DATA} ${WRKSRC}/include/hsakmt.h ${STAGEDIR}/${PREFIX}/include/roct/.
	${INSTALL_DATA} ${WRKSRC}/include/hsakmttypes.h ${STAGEDIR}/${PREFIX}/include/roct/.
	${INSTALL_DATA} ${WRKSRC}/include/linux/kfd_ioctl.h ${STAGEDIR}/${PREFIX}/include/roct/linux/.

.include <bsd.port.mk>
