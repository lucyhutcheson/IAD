//
//  GameOver.h
//  testApp
//
//  Created by Lucy Hutcheson on 12/1/13.
//  Copyright (c) 2013 Lucy Hutcheson. All rights reserved.
//

#import "CCLayer.h"
#import "cocos2d.h"


@interface GameOver : CCLayer
{
    CGSize winSize;
    int losses;
}

+(CCScene *) scene;

@end
