//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit27CalculateScrubberController : NSObject
{
    MISSING_TYPE *viewController;	// 8 = 0x8
    MISSING_TYPE *scrubber;	// 16 = 0x10
    MISSING_TYPE *kSendValueTimeInterval;	// 24 = 0x18
    MISSING_TYPE *latestUpdateTimestamp;	// 32 = 0x20
    MISSING_TYPE *latestValue;	// 40 = 0x28
    MISSING_TYPE *view;	// 56 = 0x38
    MISSING_TYPE *delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000476150
- (id)init;	// IMP=0x00000000004760f0
- (void)sendValueChanged;	// IMP=0x00000000004760c0
- (id)activeScrubberView;	// IMP=0x0000000000475fb0
- (void)hideScrubber;	// IMP=0x0000000000475f80
- (void)didEndScrub;	// IMP=0x0000000000475f00
- (void)showScrubberFor:(id)arg1 frame:(struct CGRect)arg2 compact:(_Bool)arg3;	// IMP=0x0000000000475e60
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000476280
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x0000000000476270
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x00000000004761d0

@end

