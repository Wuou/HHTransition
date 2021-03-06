//
//  AnimationStyle.h
//  https://github.com/yuwind/HHTransition
//
//  Created by 豫风 on 2018/6/1.
//  Copyright © 2018年 豫风. All rights reserved.
//

#ifndef AnimationStyle_h
#define AnimationStyle_h

typedef enum : NSUInteger{
    AnimationStyleNone = 0,
    AnimationStyleCircle,//for present
    AnimationStyleBackScale,//for present
    AnimationStyleErect,//common
    AnimationStyleTilted,//common
    AnimationStyleScale,//for push
    AnimationStyleBack,//for push
    AnimationStyleCube,//for push
    AnimationStyleSuckEffect,//for push
    AnimationStyleOglFlip,//for push
    AnimationStyleRippleEffect,//for push
    AnimationStylePageCurl,//for push
    AnimationStyleCameralIrisHollowOpen,//for push
} AnimationStyle;

#endif /* AnimationStyle_h */
