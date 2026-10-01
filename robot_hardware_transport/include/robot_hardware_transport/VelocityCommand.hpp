#ifndef VELOCITY_COMMAND_HPP
#define VELOCITY_COMMAND_HPP

class VelocityCommand {
private:
    // Variables encapsuladas para proteger el estado del comando
    float linear_x_;
    float angular_z_;

public:
    // Constructor: inicializa las velocidades en cero (robot detenido)
    VelocityCommand(float linear = 0.0f, float angular = 0.0f)
        : linear_x_(linear), angular_z_(angular) {}

    // Métodos de acceso que retornan la velocidad lineal en m/s y angular en rad/s
    float getLinearX() const { return linear_x_; }
    float getAngularZ() const { return angular_z_; }

    // Método de actualización para reescribir los valores de velocidad
    void setCommand(float linear, float angular) {
        linear_x_ = linear;
        angular_z_ = angular;
    }
};

#endif // VELOCITY_COMMAND_HPP