# Created by: Torsten Zuehlsdorff <tz@FreeBSD.org>
# $FreeBSD$

PORTNAME=	gitlab
PORTVERSION=	10.1.6
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	www devel

MAINTAINER=	idefix@fechner.net
COMMENT=	Web GUI for managing git repositories

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

OPTIONS_SINGLE=	DATABASE
OPTIONS_SINGLE_DATABASE=	PGSQL MYSQL
OPTIONS_DEFAULT=	PGSQL
PGSQL_DESC=	Default PostgreSQL support (preferred)
MYSQL_DESC=	Optional MySQL support

BUILD_DEPENDS=	gem:devel/ruby-gems

# the rubygems of RUN_DEPENDS matches the order of the Gemfile
# which makes maintaining this long list much easier!
# only rubygem-pg and rubygem-mysql are defined later as RUN_DEPENDS
# for the options
RUN_DEPENDS=	git>=2.14.1:devel/git \
	gitlab-shell>=5.9.3:devel/gitlab-shell\
	gitlab-workhorse>=2.0.0:www/gitlab-workhorse \
	redis>=2.8.23:databases/redis \
	npm>=4.3.0:www/npm \
	yarn>=0.17.0:www/yarn \
	rubygem-rails4>=4.2.8:www/rubygem-rails4 \
	rubygem-rails-deprecated_sanitizer>=1.0.3:devel/rubygem-rails-deprecated_sanitizer \
	rubygem-responders>=2.0:www/rubygem-responders \
	rubygem-sprockets3>=3.7:devel/rubygem-sprockets3 \
	rubygem-default_value_for>=3.0.1:devel/rubygem-default_value_for \
	rubygem-rugged>=0.26.0:devel/rubygem-rugged \
	rubygem-grape-route-helpers>=2.1.0:devel/rubygem-grape-route-helpers \
	rubygem-faraday>=0.12.0:www/rubygem-faraday \
	rubygem-devise>=4.2:devel/rubygem-devise \
	rubygem-doorkeeper>=4.2:security/rubygem-doorkeeper \
	rubygem-doorkeeper-openid_connect>=1.2.0:security/rubygem-doorkeeper-openid_connect \
	rubygem-omniauth>=1.4.2:security/rubygem-omniauth \
	rubygem-omniauth-auth0>=1.4.1:net/rubygem-omniauth-auth0 \
	rubygem-omniauth-azure-oauth2>=0.0.9:net/rubygem-omniauth-azure-oauth2 \
	rubygem-omniauth-cas3>=1.1.4:security/rubygem-omniauth-cas3 \
	rubygem-omniauth-facebook>=4.0.0:net/rubygem-omniauth-facebook \
	rubygem-omniauth-github11>=1.1.1:net/rubygem-omniauth-github11 \
	rubygem-omniauth-gitlab>=1.0.2:security/rubygem-omniauth-gitlab \
	rubygem-omniauth-google-oauth2>=0.5.2:net/rubygem-omniauth-google-oauth2 \
	rubygem-omniauth-kerberos>=0.3.0:net/rubygem-omniauth-kerberos \
	rubygem-omniauth-oauth2-generic>=0.2.2:security/rubygem-omniauth-oauth2-generic \
	rubygem-omniauth-saml>=1.7.0:security/rubygem-omniauth-saml \
	rubygem-omniauth-shibboleth>=1.2.0:security/rubygem-omniauth-shibboleth \
	rubygem-omniauth-twitter>=1.2.0:net/rubygem-omniauth-twitter \
	rubygem-omniauth_crowd>=2.2.0:devel/rubygem-omniauth_crowd \
	rubygem-omniauth-authentiq>=0.3.1:net/rubygem-omniauth-authentiq \
	rubygem-rack-oauth2>=1.2.1:security/rubygem-rack-oauth2 \
	rubygem-jwt1>=1.5.6:www/rubygem-jwt1 \
	rubygem-recaptcha>=3.0:devel/rubygem-recaptcha \
	rubygem-akismet>=2.0:devel/rubygem-akismet \
	rubygem-devise-two-factor>=3.0.0:security/rubygem-devise-two-factor \
	rubygem-rqrcode-rails3>=0.1.7:www/rubygem-rqrcode-rails3 \
	rubygem-attr_encrypted>=3.0.0:security/rubygem-attr_encrypted \
	rubygem-u2f0>=0.2.1:net/rubygem-u2f0 \
	rubygem-validates_hostname>=1.0.6:dns/rubygem-validates_hostname \
	rubygem-browser>=2.2:www/rubygem-browser \
	rubygem-gpgme>=2.0.13:security/rubygem-gpgme \
	rubygem-gitlab_omniauth-ldap>=2.0.4:net/rubygem-gitlab_omniauth-ldap \
	rubygem-net-ldap>=0.16.0:net/rubygem-net-ldap \
	rubygem-gollum-lib-gitlab>=4.2.0:www/rubygem-gollum-lib-gitlab \
	rubygem-gollum-rugged_adapter>=0.4.4:www/rubygem-gollum-rugged_adapter \
	rubygem-github-linguist>=4.7.0:textproc/rubygem-github-linguist \
	rubygem-grape>=1.0:devel/rubygem-grape \
	rubygem-grape-entity>=0.6.0:devel/rubygem-grape-entity \
	rubygem-rack-cors0>=0.4.0:www/rubygem-rack-cors0 \
	rubygem-hashie-forbidden_attributes>=0:devel/rubygem-hashie-forbidden_attributes \
	rubygem-kaminari-rails4>=1.0:www/rubygem-kaminari-rails4 \
	rubygem-hamlit>=2.6.1:www/rubygem-hamlit \
	rubygem-carrierwave>=1.1:www/rubygem-carrierwave \
	rubygem-dropzonejs-rails>=0.7.1:www/rubygem-dropzonejs-rails \
	rubygem-fog-aws1>=1.4:net/rubygem-fog-aws1 \
	rubygem-fog-core>=1.44:devel/rubygem-fog-core \
	rubygem-fog-google>=0.5:net/rubygem-fog-google \
	rubygem-fog-local>=0.3:net/rubygem-fog-local \
	rubygem-fog-openstack>=0.1:net/rubygem-fog-openstack \
	rubygem-fog-rackspace>=0.1.1:net/rubygem-fog-rackspace \
	rubygem-fog-aliyun>=0.2.0:net/rubygem-fog-aliyun \
	rubygem-google-api-client>=0.13.6:devel/rubygem-google-api-client \
	rubygem-unf>=0.1.4:textproc/rubygem-unf \
	rubygem-seed-fu>=2.3.5:databases/rubygem-seed-fu \
	rubygem-html-pipeline1>=1.11.0:textproc/rubygem-html-pipeline1 \
	rubygem-deckar01-task_list>=2.0.0:www/rubygem-deckar01-task_list \
	rubygem-gitlab-markup>=1.6.2:textproc/rubygem-gitlab-markup \
	rubygem-redcarpet>=3.4:textproc/rubygem-redcarpet \
	rubygem-redcloth>=4.3.2:www/rubygem-redcloth \
	rubygem-rdoc>=4.2:devel/rubygem-rdoc \
	rubygem-org-ruby>=0.9.12:textproc/rubygem-org-ruby \
	rubygem-creole>=0.5.0:textproc/rubygem-creole \
	rubygem-wikicloth>=0.8.1:textproc/rubygem-wikicloth \
	rubygem-asciidoctor>=1.5.2:textproc/rubygem-asciidoctor \
	rubygem-asciidoctor-plantuml>=0.0.7:textproc/rubygem-asciidoctor-plantuml \
	rubygem-rouge2>=2.0:textproc/rubygem-rouge2 \
	rubygem-truncato>=0.7.9:textproc/rubygem-truncato \
	rubygem-bootstrap_form>=2.7.0:devel/rubygem-bootstrap_form \
	rubygem-nokogiri>=1.8.1:textproc/rubygem-nokogiri  \
	rubygem-diffy>=3.1.0:textproc/rubygem-diffy \
	rubygem-unicorn>=5.1.0:www/rubygem-unicorn \
	rubygem-unicorn-worker-killer>=0.4.4:www/rubygem-unicorn-worker-killer \
	rubygem-state_machines-activerecord>=0.4.0:databases/rubygem-state_machines-activerecord \
	rubygem-acts-as-taggable-on>=4.0.0:www/rubygem-acts-as-taggable-on \
	rubygem-sidekiq>=5.0.0:devel/rubygem-sidekiq \
	rubygem-sidekiq-cron>=0.6.0:devel/rubygem-sidekiq-cron \
	rubygem-redis-namespace>=1.5.2:databases/rubygem-redis-namespace \
	rubygem-sidekiq-limit_fetch>=3.4:devel/rubygem-sidekiq-limit_fetch \
	rubygem-rufus-scheduler>=3.4.0:devel/rubygem-rufus-scheduler \
	rubygem-httparty>=0.13.3:www/rubygem-httparty \
	rubygem-rainbow2>=2.2:devel/rubygem-rainbow2 \
	rubygem-settingslogic>=2.0.9:devel/rubygem-settingslogic \
	rubygem-re2>=1.1.1:devel/rubygem-re2 \
	rubygem-version_sorter>=2.1.0:textproc/rubygem-version_sorter \
	rubygem-redis-rails>=5.0.1:www/rubygem-redis-rails \
	rubygem-redis3>=3.2:databases/rubygem-redis3 \
	rubygem-connection_pool>=2.0:net/rubygem-connection_pool \
	rubygem-hipchat>=1.5.0:net-im/rubygem-hipchat \
	rubygem-jira-ruby>=1.4:devel/rubygem-jira-ruby \
	rubygem-gitlab-flowdock-git-hook>=1.0.1:www/rubygem-gitlab-flowdock-git-hook \
	rubygem-gemnasium-gitlab-service>=0.2:devel/rubygem-gemnasium-gitlab-service \
	rubygem-slack-notifier1>=1.5.1:devel/rubygem-slack-notifier1 \
	rubygem-asana>=0.6.0:www/rubygem-asana \
	rubygem-ruby-fogbugz>=0.2.1:devel/rubygem-ruby-fogbugz \
	rubygem-kubeclient>=2.2.0:www/rubygem-kubeclient \
	rubygem-d3_rails-rails4>=3.5.0:www/rubygem-d3_rails-rails4 \
	rubygem-sanitize>=2.0:textproc/rubygem-sanitize \
	rubygem-babosa>=1.0.2:textproc/rubygem-babosa \
	rubygem-loofah>=2.0.3:textproc/rubygem-loofah \
	rubygem-licensee8>=8.7:devel/rubygem-licensee8 \
	rubygem-rack-attack>=4.4.1:www/rubygem-rack-attack \
	rubygem-ace-rails-ap>=4.1.0:www/rubygem-ace-rails-ap \
	rubygem-mousetrap-rails>=1.4.6:www/rubygem-mousetrap-rails \
	rubygem-charlock_holmes>=0.7.5:textproc/rubygem-charlock_holmes \
	rubygem-oj2>=2.17.4:devel/rubygem-oj2 \
	rubygem-chronic>=0.10.2:devel/rubygem-chronic \
	rubygem-chronic_duration>=0.10.6:devel/rubygem-chronic_duration \
	rubygem-webpack-rails>=0.9.10:www/rubygem-webpack-rails \
	rubygem-rack-proxy>=0.6.0:www/rubygem-rack-proxy \
	rubygem-sass-rails5>=5.0.6:textproc/rubygem-sass-rails5 \
	rubygem-uglifier>=2.7.2:www/rubygem-uglifier \
	rubygem-addressable>=2.5.2:www/rubygem-addressable \
	rubygem-bootstrap-sass>=3.3.0:www/rubygem-bootstrap-sass \
	rubygem-font-awesome-rails-rails4>=4.7:devel/rubygem-font-awesome-rails-rails4 \
	rubygem-gemojione>=3.3:graphics/rubygem-gemojione \
	rubygem-gon>=6.1.0:www/rubygem-gon \
	rubygem-jquery-atwho-rails>=1.3.2:www/rubygem-jquery-atwho-rails \
	rubygem-jquery-rails>=4.1.0:www/rubygem-jquery-rails \
	rubygem-request_store>=1.3:devel/rubygem-request_store \
	rubygem-select2-rails3>=3.5.9:www/rubygem-select2-rails3 \
	rubygem-virtus>=1.0.1:devel/rubygem-virtus \
	rubygem-base32>=0.3.0:converters/rubygem-base32 \
	rubygem-sentry-raven>=2.5.3:devel/rubygem-sentry-raven \
	rubygem-premailer-rails>=1.9.7:mail/rubygem-premailer-rails \
	rubygem-ruby_parser>=3.8.4:devel/rubygem-ruby_parser \
	rubygem-rails-i18n-4>=4.0.9:devel/rubygem-rails-i18n-4 \
	rubygem-gettext_i18n_rails>=1.8.0:devel/rubygem-gettext_i18n_rails \
	rubygem-gettext_i18n_rails_js>=1.2.0:devel/rubygem-gettext_i18n_rails_js \
	rubygem-gettext>=3.2.2:devel/rubygem-gettext \
	rubygem-peek>=1.0.1:devel/rubygem-peek \
	rubygem-peek-gc>=0.0.2:devel/rubygem-peek-gc \
	rubygem-peek-host>=1.0.0:devel/rubygem-peek-host \
	rubygem-peek-performance_bar>=1.3.0:devel/rubygem-peek-performance_bar \
	rubygem-peek-rblineprof>=0.2.0:devel/rubygem-peek-rblineprof \
	rubygem-peek-redis>=1.2.0:devel/rubygem-peek-redis \
	rubygem-peek-sidekiq>=1.0.3:devel/rubygem-peek-sidekiq \
	rubygem-prometheus-client-mmap>=0.7.0.beta18:devel/rubygem-prometheus-client-mmap \
	rubygem-octokit>=4.6.2:net/rubygem-octokit \
	rubygem-mail_room>=0.9.1:mail/rubygem-mail_room \
	rubygem-email_reply_trimmer>=0.1:mail/rubygem-email_reply_trimmer \
	rubygem-html2text>=0:textproc/rubygem-html2text \
	rubygem-ruby-prof>=0.16.2:devel/rubygem-ruby-prof \
	rubygem-oauth2>=1.4.0:net/rubygem-oauth2 \
	rubygem-paranoia>=2.3.1:databases/rubygem-paranoia \
	rubygem-health_check>=2.6.0:devel/rubygem-health_check \
	rubygem-vmstat>=2.3.0:sysutils/rubygem-vmstat \
	rubygem-sys-filesystem>=1.1.6:sysutils/rubygem-sys-filesystem \
	rubygem-net-ssh>=4.1.0:security/rubygem-net-ssh \
	rubygem-rbnacl4<=4.0.2:security/rubygem-rbnacl4 \
	rubygem-rbnacl-libsodium>=0:security/rubygem-rbnacl-libsodium \
	rubygem-bcrypt_pbkdf>=1.0:security/rubygem-bcrypt_pbkdf \
	rubygem-gitaly-proto>=0.39.0:net/rubygem-gitaly-proto \
	rubygem-gitaly>=0.8.0:net/rubygem-gitaly \
	rubygem-toml-rb>=0.3.15:www/rubygem-toml-rb \
	rubygem-flipper010>=0.10.2:devel/rubygem-flipper010 \
	rubygem-flipper-active_record010>=0.10.2:databases/rubygem-flipper-active_record010 \
	rubygem-lograge>=0.5:www/rubygem-lograge \
	rubygem-grape_logging>=1.7:devel/rubygem-grape_logging \
	rubygem-rinku>=1.7.3:www/rubygem-rinku

PGSQL_RUN_DEPENDS=	rubygem-pg>=0.18.2:databases/rubygem-pg \
	rubygem-peek-pg>=1.3.0:databases/rubygem-peek-pg
MYSQL_RUN_DEPENDS=	rubygem-mysql2>=0.4.5:databases/rubygem-mysql2 \
	rubygem-peek-mysql2>=1.1.0:databases/rubygem-peek-mysql2

USE_RUBY=	yes

USE_RC_SUBR=	gitlab
USE_GITHUB=	yes
GH_ACCOUNT=	gitlabhq
GH_PROJECT=	gitlabhq

USERS=	git
GROUPS=	git

NO_ARCH=	yes
NO_BUILD=	yes

post-patch-MYSQL-on:
	${CP} ${WRKSRC}/config/database.yml.mysql ${WRKSRC}/config/database.yml.sample

post-patch-MYSQL-off:
	${REINPLACE_CMD} -e "/gem 'mysql2'/d" ${WRKSRC}/Gemfile
	${REINPLACE_CMD} -e "/gem 'peek-mysql2'/d" ${WRKSRC}/Gemfile

post-patch-PGSQL-on:
	${CP} ${WRKSRC}/config/database.yml.postgresql ${WRKSRC}/config/database.yml.sample

post-patch-PGSQL-off:
	${REINPLACE_CMD} -e "/gem 'pg'/d" ${WRKSRC}/Gemfile
	${REINPLACE_CMD} -e "/gem 'peek-pg'/d" ${WRKSRC}/Gemfile

do-install:
	${FIND} ${WRKSRC} -name '*.orig' -delete
	${FIND} ${WRKSRC} -name '*.bak' -delete
	${FIND} ${WRKSRC} -name '*.gitkeep' -delete
	${FIND} ${WRKSRC} -name '*.gitignore' -delete
	${FIND} ${WRKSRC} -name "Gemfile.lock" -delete
	${MV} ${WRKSRC}/config/gitlab.yml.example ${WRKSRC}/config/gitlab.yml.sample
	${MV} ${WRKSRC}/config/unicorn.rb.example ${WRKSRC}/config/unicorn.rb.sample
	${MV} ${WRKSRC}/config/resque.yml.example ${WRKSRC}/config/resque.yml.sample
	${MV} ${WRKSRC}/config/secrets.yml.example ${WRKSRC}/config/secrets.yml.sample
	${MV} ${WRKSRC}/config/initializers/rack_attack.rb.example ${WRKSRC}/config/initializers/rack_attack.rb.sample
	${MV} ${WRKSRC}/lib/support/nginx/gitlab ${WRKSRC}/lib/support/nginx/gitlab.sample
	${MV} ${WRKSRC}/lib/support/nginx/gitlab-ssl ${WRKSRC}/lib/support/nginx/gitlab-ssl.sample
	${MKDIR} ${STAGEDIR}/home/git/repositories
	${MKDIR} ${STAGEDIR}${PREFIX}/www/${PORTNAME}/public/assets
	${MKDIR} ${STAGEDIR}${PREFIX}/www/${PORTNAME}/public/uploads
	${MKDIR} ${STAGEDIR}${PREFIX}/www/${PORTNAME}/tmp/cache
	${MKDIR} ${STAGEDIR}${PREFIX}/www/${PORTNAME}/tmp/sessions
	${MKDIR} ${STAGEDIR}${PREFIX}/www/${PORTNAME}/tmp/backups
	${MKDIR} ${STAGEDIR}${PREFIX}/www/${PORTNAME}/shared/tmp
	${MKDIR} ${STAGEDIR}${PREFIX}/www/${PORTNAME}/shared/artifacts/tmp/work
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/www/${PORTNAME})

.include <bsd.port.mk>
