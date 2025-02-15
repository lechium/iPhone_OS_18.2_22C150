//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSArray, NSString, VUIAccessViewController;

@interface TVAccessViewServiceViewController : SBUIRemoteAlertServiceViewController
{
    VUIAccessViewController *_accessViewController;	// 8 = 0x8
    NSArray *_bundleIDs;	// 16 = 0x10
    NSString *_accountName;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0040000000001b86
- (void).cxx_destruct;	// IMP=0x0020000000001f21
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_dismiss;	// IMP=0x0010000000001e10
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x0010000000001d1c
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001c6e
- (void)configureWithUserInfo:(id)arg1;	// IMP=0x0010000000001b8e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000018b2
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000001854
- (_Bool)shouldAutorotate;	// IMP=0x001000000000184c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000017b9

@end

