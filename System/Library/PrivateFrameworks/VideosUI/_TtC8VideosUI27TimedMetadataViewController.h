//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI27TimedMetadataViewController
{
    MISSING_TYPE *templateController;	// 8 = 0x8
    MISSING_TYPE *playerViewSize;	// 16 = 0x10
    MISSING_TYPE *previousViewWidth;	// 32 = 0x20
    MISSING_TYPE *shouldUseVerticalLayout;	// 40 = 0x28
    MISSING_TYPE *existingCellViewModels;	// 48 = 0x30
    MISSING_TYPE *document;	// 56 = 0x38
    MISSING_TYPE *currentTimedEntityMapping;	// 226945024 = 0xd86e800
    MISSING_TYPE *timedEntityMappingsTask;	// 2303512693 = 0x894cd075
    MISSING_TYPE *timedMetadataVendor;	// 3238886888 = 0xc10d7de8
    MISSING_TYPE *logger;	// 109444 = 0x1ab84
    MISSING_TYPE *$__lazy_storage_$_emptyStateViewModel;	// 16703732 = 0xfee0f4
    MISSING_TYPE *$__lazy_storage_$_emptyStatePresenter;	// 1208024789 = 0x4800fed5
    MISSING_TYPE *emptyStateView;	// 2303197438 = 0x894800fe
    MISSING_TYPE *nowPlayingTabDelegate;	// 1208020738 = 0x4800ef02
    MISSING_TYPE *hostedType;	// 1224786189 = 0x4900c10d
}

- (void).cxx_destruct;	// IMP=0x00000000006598a3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000006599cf
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000659992
- (void)dealloc;	// IMP=0x0000000000659886
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000006596e3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000657fb6
- (void)viewDidLoad;	// IMP=0x0000000000657d28
- (void)vui_viewDidLayoutSubviews;	// IMP=0x00000000006577a7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000657074
- (double)nowPlayingTabHeight;	// IMP=0x000000000065af8b
- (void)setNowPlayingTabContextData:(id)arg1;	// IMP=0x000000000065ae99
- (id)getNowPlayingTabContextData;	// IMP=0x000000000065ae8b
- (void)setNowPlayingTabDelegate:(id)arg1;	// IMP=0x000000000065ae44
- (void)setPlayerViewSize:(struct CGSize)arg1;	// IMP=0x000000000065ad8f
- (void)updatePlaybackInfo:(id)arg1;	// IMP=0x000000000065ba9e
- (void)updatePlaybackRate:(double)arg1 elapsedTime:(id)arg2 elapsedTimeTimestamp:(id)arg3;	// IMP=0x000000000065b40a

@end
