#ifndef POSE2D_HPP
#define POSE2D_HPP

class Pose2D {
private:
    // Variables encapsuladas para evitar modificaciones accidentales
    float x_;
    float y_;
    float theta_;

public:
    // Constructor: inicializa el punto en (0,0,0) por defecto
    Pose2D(float x = 0.0f, float y = 0.0f, float theta = 0.0f) 
        : x_(x), y_(y), theta_(theta) {}

    // Métodos de acceso (Getters) que retornan las posiciones[cite: 7]
    float getX() const { return x_; }
    float getY() const { return y_; }
    float getTheta() const { return theta_; }

    // Método de actualización (Setter) para modificar los valores de forma segura[cite: 7]
    void setPose(float x, float y, float theta) {
        x_ = x;
        y_ = y;
        theta_ = theta;
    }
};

#endif // POSE2D_HPP