//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUBrowsingSession, PUScrubberView, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface PUScrubberBarItemController : NSObject
{
    PUScrubberView *_scrubberView;	// 8 = 0x8
    UIBarButtonItem *_scrubberBarButtonItem;	// 16 = 0x10
    PUBrowsingSession *_browsingSession;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000580243
@property(retain, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
- (void)_updateScrubberBarButtonItemIfNeeded;	// IMP=0x0000000000580118
- (void)_invalidateScrubberBarButtonItem;	// IMP=0x00000000005800df
@property(readonly, nonatomic) UIBarButtonItem *scrubberBarButtonItem; // @synthesize scrubberBarButtonItem=_scrubberBarButtonItem;

@end

