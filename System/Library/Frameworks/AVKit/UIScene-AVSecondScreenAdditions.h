//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScene.h>

@interface UIScene (AVSecondScreenAdditions)
+ (id)avkit_secondScreenScenes;	// IMP=0x008000000014d4b3
- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;	// IMP=0x001000000014d425
- (void)avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2;	// IMP=0x001000000014d411
- (void)avkit_resetPreferredModeSwitchRequest;	// IMP=0x001000000014d3ee
- (_Bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;	// IMP=0x001000000014d3e6
- (_Bool)avkit_isForeground;	// IMP=0x001000000014d3ab
- (long long)avkit_screenType;	// IMP=0x001000000014d3a3
- (id)avkit_asWindowScene;	// IMP=0x001000000014d39b
@end
