from __future__ import absolute_import

import pkg_resources
try:
    __version__ = pkg_resources.get_distribution(__name__).version
except pkg_resources.DistributionNotFound:
    __version__ = 'unknown'

from .api import get_include
from .api import get_lib
from . import cprob
from . import ellf
