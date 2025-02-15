//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIImageViewAnimationProperties : NSObject
{
    NSArray *_animationImages;	// 8 = 0x8
    NSArray *_highlightedAnimationImages;	// 16 = 0x10
    double _animationDuration;	// 24 = 0x18
    long long _animationRepeatCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000122ef2c
@property(nonatomic) long long animationRepeatCount; // @synthesize animationRepeatCount=_animationRepeatCount;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSArray *highlightedAnimationImages; // @synthesize highlightedAnimationImages=_highlightedAnimationImages;
@property(retain, nonatomic) NSArray *animationImages; // @synthesize animationImages=_animationImages;

@end

