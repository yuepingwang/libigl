// Double

m.def("slice", []
(
  const Eigen::SparseMatrix<double>& X,
  const Eigen::MatrixXi& R,
  const Eigen::MatrixXi& C,
  Eigen::SparseMatrix<double>& Y
)
{
  assert_is_VectorX("R",R);
  assert_is_VectorX("C",C);
  return igl::slice(X,R,C,Y);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("C"), py::arg("Y"));

m.def("slice", []
(
  const Eigen::SparseMatrix<double>& X,
  const Eigen::MatrixXi& R,
  const int& dim,
  Eigen::SparseMatrix<double>& Y
)
{
  assert_is_VectorX("R",R);
  return igl::slice(X,R,dim,Y);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("dim"), py::arg("Y"));

m.def("slice", []
(
  const Eigen::MatrixXd& X,
  const Eigen::MatrixXi& R,
  const Eigen::MatrixXi& C,
  Eigen::MatrixXd& Y
)
{
  assert_is_VectorX("R",R);
  assert_is_VectorX("C",C);
  return igl::slice(X,R,C,Y);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("C"), py::arg("Y"));

m.def("slice", []
(
  const Eigen::MatrixXd& X,
  const Eigen::MatrixXi& R,
  Eigen::MatrixXd& Y
)
{
  assert_is_VectorX("R",R);
  return igl::slice(X,R,Y);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("Y"));

m.def("slice", []
(
  const Eigen::MatrixXd& X,
  const Eigen::MatrixXi& R
)
{
  assert_is_VectorX("R",R);
  return igl::slice(X,R);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"));

m.def("slice", []
(
  const Eigen::MatrixXd& X,
  const Eigen::MatrixXi& R,
  const int& dim
)
{
  assert_is_VectorX("R",R);
  return igl::slice(X,R,dim);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("dim"));

// int
m.def("slice", []
(
  const Eigen::SparseMatrix<int>& X,
  const Eigen::MatrixXi& R,
  const Eigen::MatrixXi& C,
  Eigen::SparseMatrix<int>& Y
)
{
  assert_is_VectorX("R",R);
  assert_is_VectorX("C",C);
  return igl::slice(X,R,C,Y);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("C"), py::arg("Y"));

m.def("slice", []
(
  const Eigen::SparseMatrix<int>& X,
  const Eigen::MatrixXi& R,
  const int& dim,
  Eigen::SparseMatrix<int>& Y
)
{
  assert_is_VectorX("R",R);
  return igl::slice(X,R,dim,Y);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("dim"), py::arg("Y"));

m.def("slice", []
(
  const Eigen::MatrixXi& X,
  const Eigen::MatrixXi& R,
  const Eigen::MatrixXi& C,
  Eigen::MatrixXi& Y
)
{
  assert_is_VectorX("R",R);
  assert_is_VectorX("C",C);
  return igl::slice(X,R,C,Y);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("C"), py::arg("Y"));

m.def("slice", []
(
  const Eigen::MatrixXi& X,
  const Eigen::MatrixXi& R,
  Eigen::MatrixXi& Y
)
{
  assert_is_VectorX("R",R);
  return igl::slice(X,R,Y);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("Y"));

m.def("slice", []
(
  const Eigen::MatrixXi& X,
  const Eigen::MatrixXi& R
)
{
  assert_is_VectorX("R",R);
  return igl::slice(X,R);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"));

m.def("slice", []
(
  const Eigen::MatrixXi& X,
  const Eigen::MatrixXi& R,
  const int& dim
)
{
  assert_is_VectorX("R",R);
  return igl::slice(X,R,dim);
}, __doc_igl_slice,
py::arg("X"), py::arg("R"), py::arg("dim"));
