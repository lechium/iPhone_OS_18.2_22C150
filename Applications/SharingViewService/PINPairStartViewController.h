//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PINPairStartViewController
{
    UIActivityIndicatorView *_activityIndicatorView;	// 32 = 0x20
    NSUUID *_deviceIdentifier;	// 40 = 0x28
    unsigned char _deviceVersion;	// 48 = 0x30
    UIButton *_dismissButton;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    UIButton *_pairButton;	// 72 = 0x48
    UILabel *_progressLabel;	// 80 = 0x50
    _Bool _started;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000ff734
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x00100000000ff6ac
- (void)handlePairButton:(id)arg1;	// IMP=0x00100000000ff480
- (void)handleDismissButton:(id)arg1;	// IMP=0x00100000000ff3f8
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00100000000ff364
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000ff2e2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000ff077

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

