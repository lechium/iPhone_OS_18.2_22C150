//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC18SharingViewService23B389StartViewController
{
    MISSING_TYPE *pairPressed_;	// 8 = 0x8
    MISSING_TYPE *player;	// 16 = 0x10
    MISSING_TYPE *mainBtn;	// 24 = 0x18
    MISSING_TYPE *playerYConstraint;	// 32 = 0x20
    MISSING_TYPE *topInfoLbl;	// 40 = 0x28
    MISSING_TYPE *bottomInfoLbl;	// 48 = 0x30
    MISSING_TYPE *bubbleMonitor;	// 56 = 0x38
    MISSING_TYPE *viewWillAppearTimestamp;	// 64 = 0x40
    MISSING_TYPE *bypassBatteryTooLowCheck;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000053970
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000538f0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000053780
- (id)initWithMainController:(id)arg1;	// IMP=0x00100000000535c0
- (void)handleTapOutside;	// IMP=0x00100000000531b0
- (void)continuePressed;	// IMP=0x0010000000053060
- (void)dismissPressed;	// IMP=0x0010000000052c90
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000052c50
- (void)transitionOutOfMulti;	// IMP=0x0010000000052a80
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000514f0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000051270
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0010000000053a10

@end

