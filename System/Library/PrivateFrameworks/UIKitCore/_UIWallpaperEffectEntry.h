//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisualEffectViewEntry.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIWallpaperEffectEntry : _UIVisualEffectViewEntry
{
    UIColor *_backgroundColor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000075f293
@property(retain) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)isSameTypeOfEffect:(id)arg1;	// IMP=0x000000000075f264
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x000000000075f25c
- (void)applyIdentityEffectToView:(id)arg1;	// IMP=0x000000000075f1ef
- (void)applyRequestedEffectToView:(id)arg1;	// IMP=0x000000000075f186
- (void)addEffectToView:(id)arg1;	// IMP=0x000000000075f11d

@end

