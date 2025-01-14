//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVScrubbingGesturePlatformConfiguration;

__attribute__((visibility("hidden")))
@interface AVScrubbingGestureConfiguration : NSObject
{
    _Bool _usesNaturalDirection;	// 8 = 0x8
    _Bool _linearSeeking;	// 9 = 0x9
    float _syntheticFriction;	// 12 = 0xc
    AVScrubbingGesturePlatformConfiguration *_platformConfiguration;	// 16 = 0x10
}

+ (id)configurationWithSyntheticFriction:(float)arg1 usesNaturalDirection:(_Bool)arg2 platformConfiguration:(id)arg3;	// IMP=0x006000000003dd62
+ (id)defaultConfiguration;	// IMP=0x006000000003dcee
- (void).cxx_destruct;	// IMP=0x000000000003dcde
@property(readonly, nonatomic) AVScrubbingGesturePlatformConfiguration *platformConfiguration; // @synthesize platformConfiguration=_platformConfiguration;
@property(readonly, nonatomic) _Bool linearSeeking; // @synthesize linearSeeking=_linearSeeking;
@property(readonly, nonatomic) _Bool usesNaturalDirection; // @synthesize usesNaturalDirection=_usesNaturalDirection;
@property(readonly, nonatomic) float syntheticFriction; // @synthesize syntheticFriction=_syntheticFriction;

@end

