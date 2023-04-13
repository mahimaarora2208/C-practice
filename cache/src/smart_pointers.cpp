#include <iostream>
#include <memory>

class Entity{
    public:
        Entity(){
            std::cout << "Created Entity!" << std::endl;
        }

        ~Entity(){
            std::cout << "Destroyed Entity!" << std::endl; 
        }
        void print(){};

};

int main(){
    {
        // unique pointers
        // std::unique_ptr<Entity> e1(new Entity); OR
        // // std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // throws exception safety when we use make_unique instead of new
        // std::unique_ptr<Entity> entity_copy = entity;  throws exception safety here as its a unique pointer
        // std::shared_ptr<Entity> e0;
        std::weak_ptr<Entity> e0;
        {
            std::shared_ptr<Entity> shared_entity = std::make_shared<Entity>();
            e0 = shared_entity;
            std::cout << e0.use_count() << std::endl;           
        }    
    }
}
