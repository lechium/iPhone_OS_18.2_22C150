//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenScrubberBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenScrubberBarTileViewController : PUTileViewController
{
    PUBrowsingViewModel *_browsingViewModel;	// 8 = 0x8
    PUReviewScreenBarsModel *_barsModel;	// 16 = 0x10
    PUReviewScreenScrubberBar *__scrubberBar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000055dc76
@property(retain, nonatomic, setter=_setScrubberBar:) PUReviewScreenScrubberBar *_scrubberBar; // @synthesize _scrubberBar=__scrubberBar;
@property(retain, nonatomic) PUReviewScreenBarsModel *barsModel; // @synthesize barsModel=_barsModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000055db8c
- (void)becomeReusable;	// IMP=0x000000000055db32
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000055da82
- (void)_updateVisibilityAnimated:(_Bool)arg1;	// IMP=0x000000000055d905
- (void)_updateViews;	// IMP=0x000000000055d81d
- (id)loadView;	// IMP=0x000000000055d660

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
