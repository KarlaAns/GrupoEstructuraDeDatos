#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <string>

class validaciones {
private:
    std::string cedula;

public:
    validaciones();  // Constructor
    ~validaciones(); // Destructor

    void validacionCedula(std::string& cedula);
    void validacionNombre(std::string& nombre);
    void setCedula(std::string& cedula);
    std::string getCedula() const;
};

#endif // VALIDACIONES_H
