
from django.conf.urls import url
from django.contrib import admin
from django.conf.urls import include
from django.conf import settings
from django.conf.urls.static import static
from rango import views




urlpatterns = [
    url(r'^$', views.index,  name='index'),
    url(r'^rango/' , include('rango.urls')),
    url(r'^admin/', admin.site.urls),
    url(r'^accounts/register/$', views.RangoRegistrationView.as_view(), name='registration_register'),
    url(r'^accounts/', include('registration.backends.simple.urls')),
]+ static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)


