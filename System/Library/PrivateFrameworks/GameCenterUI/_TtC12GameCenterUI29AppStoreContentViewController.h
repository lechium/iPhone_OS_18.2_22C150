//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UIScrollView, _TtC12GameCenterUI18BootstrapPresenter;

@interface _TtC12GameCenterUI29AppStoreContentViewController
{
    MISSING_TYPE *preferredLargeTitleDisplayMode;	// 48 = 0x30
    MISSING_TYPE *bootstrapPresenter;	// 56 = 0x38
    MISSING_TYPE *pageMetricsPresenter;	// 64 = 0x40
    MISSING_TYPE *dataPresenter;	// 72 = 0x48
    MISSING_TYPE *appStoreContentView;	// 80 = 0x50
    MISSING_TYPE *startTime;	// 88 = 0x58
    MISSING_TYPE *kvoTokens;	// 104 = 0x68
    MISSING_TYPE *isDeeplinked;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000002e291f
- (id)init;	// IMP=0x00000000002e3bf9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002e336c
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002e32f8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000002e320f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002e30f4
- (void)viewDidLoad;	// IMP=0x00000000002e3030
@property(nonatomic) _Bool isDeeplinked; // @synthesize isDeeplinked;
@property(nonatomic, readonly) UIScrollView *scrollView;
@property(nonatomic, retain) _TtC12GameCenterUI18BootstrapPresenter *bootstrapPresenter; // @synthesize bootstrapPresenter;
@property(nonatomic) long long preferredLargeTitleDisplayMode; // @synthesize preferredLargeTitleDisplayMode;
- (void)dealloc;	// IMP=0x00000000002e2902
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e282d
- (id)initWithGameRecord:(id)arg1;	// IMP=0x00000000002e272f

@end

