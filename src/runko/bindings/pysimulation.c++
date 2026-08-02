// Copyright 2016 - 2026, Miro Palmu, Joonas Nättilä and the runko contributors
// SPDX-License-Identifier: GPL-3.0-or-later

#include "pybind11/pybind11.h"
#include "runko/simulation.h"

namespace py = pybind11;

namespace simulation {

void
  bind_simulation(py::module& m_sub)
{
  py::class_<runko::simulation>(m_sub, "Simulation")
    .def(py::init<>())
    .def("foobar", &runko::simulation::foobar);
}
}  // namespace simulation
