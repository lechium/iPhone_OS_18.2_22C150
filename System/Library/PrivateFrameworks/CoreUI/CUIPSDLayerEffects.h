//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject
{
    _Bool _visible;	// 8 = 0x8
    double _effectScale;	// 16 = 0x10
    NSMutableDictionary *_effectList;	// 24 = 0x18
}

@property(retain) NSMutableDictionary *effectList; // @synthesize effectList=_effectList;
@property double effectScale; // @synthesize effectScale=_effectScale;
@property _Bool visible; // @synthesize visible=_visible;
- (void)dealloc;	// IMP=0x00000000000ae697
- (void)addLayerEffectComponent:(id)arg1;	// IMP=0x00000000000ae63d
- (id)colorOverlay;	// IMP=0x00000000000ae620
- (id)dropShadow;	// IMP=0x00000000000ae603
- (id)init;	// IMP=0x00000000000ae5a7

@end
