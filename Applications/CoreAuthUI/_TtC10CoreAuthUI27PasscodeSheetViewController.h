//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC10CoreAuthUI27PasscodeSheetViewController
{
    MISSING_TYPE *context;	// 8 = 0x8
    MISSING_TYPE *authorizationViewManager;	// 16 = 0x10
    MISSING_TYPE *failures;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000029ff0
- (id)initWithInternalInfo:(id)arg1 parent:(id)arg2;	// IMP=0x0010000000029f30
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000029cb0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000029ba0
- (id)initWithInternalInfo:(id)arg1 mechanism:(id)arg2 backoffCounter:(id)arg3 remoteUIHost:(id)arg4 allowsLandscape:(_Bool)arg5;	// IMP=0x0010000000029a20
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000029870
- (_Bool)shouldPresentWithAnimation;	// IMP=0x00100000000294c0
- (_Bool)isFullScreenController;	// IMP=0x0010000000029490
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000029410
- (void)loadView;	// IMP=0x00100000000282f0
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewModelDidRejectDevicePasscode:(id)arg1;	// IMP=0x001000000002a050

@end

