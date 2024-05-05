#include <vector>

// Forward declaration of Component class
class Component;

class Entity {
public:
    std::vector<Component*> components;
};

class Component {
public:
    virtual void update() = 0;
};

class PositionComponent : public Component {
public:
    float x, y;
    void update() override {
        // Update position logic
    }
};

class RenderSystem {
public:
    void render(Entity* entity) {
        // Render logic
    }
};

int main() {
    Entity playerEntity;
    playerEntity.components.push_back(new PositionComponent());
    // Assuming there's a RenderComponent class defined somewhere

    RenderSystem renderSystem;
    renderSystem.render(&playerEntity);

    return 0;
}
