PORTNAME=	picard
DISTVERSION=	2.22.9
CATEGORIES=	biology java
MASTER_SITES=	http://github.com/broadinstitute/picard/releases/download/${PORTVERSION}/
PKGNAMESUFFIX=	-tools
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.jar

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	CLI tools for manipulating high-throughput sequencing (HTS) data
WWW=		https://broadinstitute.github.io/picard/

LICENSE=	MIT

RUN_DEPENDS=	samtools:biology/samtools

USES=		java

CONFLICTS_INSTALL=	picard # bin/picard

SUB_FILES=	picard
NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/picard ${JAVAJARDIR}/picard.jar

do-extract:
	# No extract

do-install:
	${INSTALL_DATA} ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX} \
		${STAGEDIR}${JAVAJARDIR}
	${INSTALL_SCRIPT} ${WRKDIR}/picard ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
