//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/AVMusicAppBehavior.h>

@class MISSING_TYPE;

@interface PlayerViewControllerBehavior : AVMusicAppBehavior
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *onGoingJumpToTimeInfo;	// 24 = 0x18
    MISSING_TYPE *reporter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004c6ac
- (id)init;	// IMP=0x000000000004c669
- (void)willMoveToContext:(id)arg1;	// IMP=0x000000000004a58d
- (void)contextWillHandleUserAction:(long long)arg1;	// IMP=0x000000000004a4e3
- (void)skipToNextItem;	// IMP=0x0000000000049c39
- (void)skipToPreviousItem;	// IMP=0x0000000000049c00

@end

