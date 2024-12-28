//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKAchievementDescription.h>

@class UIImage;

@interface GKAchievementDescription (UI)
+ (id)placeholderCompletedAchievementImage;	// IMP=0x00200000000b34ce
+ (id)incompleteAchievementImage;	// IMP=0x00200000000b3477
- (void)loadImageWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b321c
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b2e78
- (void)showBanner;	// IMP=0x00100000000b364c
- (id)imageURL;	// IMP=0x00100000000b3525

// Remaining properties
@property(readonly, retain, nonatomic) UIImage *image;
@end
