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

bool ManejadorFinanciera::existeFinanciera(string financiera) {
  map<string, Financiera *>::iterator it;
  it = this->financieras.find(financiera);
  return it != this->financieras.end();
}

Financiera *ManejadorFinanciera::obtenerFinanciera(string financiera) {
  map<string, Financiera *>::iterator it;
  it = this->financieras.find(financiera);
  return it->second;
}

void ManejadorFinanciera::eliminarFinanciera(string financiera) {
  map<string, Financiera *>::iterator it;
  it = this->financieras.find(financiera);
  delete it->second;
  this->financieras.erase(financiera);
}

map<string, Financiera *> ManejadorFinanciera::obtenerFinancieras() {
  return this->financieras;
}

ManejadorFinanciera::~ManejadorFinanciera() {}
