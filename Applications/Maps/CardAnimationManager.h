//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CardAnimation;

@interface CardAnimationManager : NSObject
{
    CardAnimation *_cardHeightAnimation;	// 8 = 0x8
    unsigned long long _cardHeightAnimationPushCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000c90ec1
- (void)popCardHeightAnimation;	// IMP=0x0010000000c90e9f
- (void)pushCardHeightAnimation:(id)arg1;	// IMP=0x0010000000c90e50
@property(readonly) CardAnimation *cardHeightAnimation;
- (id)defaultCardHeightAnimation;	// IMP=0x0010000000c90daf

@end

