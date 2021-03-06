#include <Arduino.h>

#include <SerializableModel.h>

#ifndef L0Model_class_h
#define L0Model_class_h

class L0Model : public SerializableModel
{
public:
    L0Model();
    ~L0Model();

    bool enabled;
    int level;

    void toJson(JsonDocument &);
    void fromJson(JsonDocument &);
};

#endif
