#include "ManejadorFinanciera.hh"

ManejadorFinanciera *ManejadorFinanciera::mfInstance = NULL;

ManejadorFinanciera::ManejadorFinanciera() {}

ManejadorFinanciera *ManejadorFinanciera::getInstance() {
  if (mfInstance == NULL) {
    mfInstance = new ManejadorFinanciera();
  }
  return mfInstance;
}

void ManejadorFinanciera::agregarFinanciera(Financiera *financiera) {
  this->financieras.insert(make_pair(financiera->getNombre(), financiera));
}

bool ManejadorFinanciera::existeFinanciera(string nombreFinanciera) {
  auto financiera = this->financieras.find(nombreFinanciera);
  return financiera != this->financieras.end();
}

Financiera *ManejadorFinanciera::obtenerFinanciera(string nombreFinanciera) {
  auto financiera = this->financieras.find(nombreFinanciera);
  return financiera->second;
}

void ManejadorFinanciera::eliminarFinanciera(string nombreFinanciera) {
  this->financieras.erase(nombreFinanciera);
}

map<string, Financiera *> ManejadorFinanciera::obtenerFinancieras() {
  return this->financieras;
}

ManejadorFinanciera::~ManejadorFinanciera() {}
