//
//  Enemy.hpp
//  Charm-them-all
//
//  Created by Piotrek Kiełek on 10/10/17.
//  Copyright © 2017 Piotrek Kiełek. All rights reserved.
//

#ifndef Enemy_hpp
#define Enemy_hpp

#include <SFML/Graphics.hpp>
class Enemy {
public:
    sf::Texture texture;
    sf::CircleShape corp;
    int speed;
    bool charmed;
    int charm_time;
    
    Enemy(sf::Vector2f position);
    ~Enemy();
    void Update(sf::Vector2f position);
    void Draw(sf::RenderWindow& window);
    sf::Vector2f movet(float rotation);
};

#endif /* Enemy_hpp */
