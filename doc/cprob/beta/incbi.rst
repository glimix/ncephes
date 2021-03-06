Inverse of incomplete beta function
===================================
.. py:function:: incbi(a, b, y)

    Given y, the function finds x such that `incbet(a, b, y) = x`.

    :param float a: a positive number
    :param float b: a positive number
    :param float x: any number within [0, 1]

See also :py:func:`incbet`.

Description
-----------

The routine performs interval halving or Newton iterations to find the
root of `incbet(a,b,x) - y = 0`.

Accuracy
--------

+----------+------+---------+--------+-------+--------------+
|          |      |         |        |    relative error    |
+----------+------+---------+--------+-------+--------------+
|          |x     |a, b     |        |       |              |
+----------+------+---------+--------+-------+--------------+
|arithmetic|domain|domain   |# trials|peak   |rms           |
+==========+======+=========+========+=======+==============+
|IEEE      |0, 1  |.5, 10000|50000   |5.8e-12|1.3e-13       |
+----------+------+---------+--------+-------+--------------+
|IEEE      |0, 1  |.25, 100 |100000  |1.8e-13|3.9e-15       |
+----------+------+---------+--------+-------+--------------+
|IEEE      |0, 1  |0, 5     |50000   |1.1e-12|5.5e-15       |
+----------+------+---------+--------+-------+--------------+
|VAX       |0, 1  |.5, 100  |25000   |3.5e-14|1.1e-15       |
+----------+------+---------+--------+-------+--------------+
|With a and b constrained to half-integer or integer values |
+----------+------+---------+--------+-------+--------------+
|IEEE      |0, 1  |.5, 10000|50000   |5.8e-12|1.1e-13       |
+----------+------+---------+--------+-------+--------------+
|IEEE      |0, 1  |.5, 100  |100000  |1.7e-14|7.9e-16       |
+----------+------+---------+--------+-------+--------------+
|With a=.5, b constrained to half-integer or integer values |
+----------+------+---------+--------+-------+--------------+
|IEEE      |0, 1  |.5, 10000|10000   |8.3e-11|1.0e-11       |
+----------+------+---------+--------+-------+--------------+

Reference: http://www.netlib.org/cephes/doubldoc.html#incbi
