//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class SRSiriViewController;

@interface SRViewController : UIViewController
{
    SRSiriViewController *_siriVC;	// 8 = 0x8
    int _expectedTeardownCounter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000088edd
- (void)willEnterForegroundHandler;	// IMP=0x0010000000088ec0
- (void)willResignActiveHandler;	// IMP=0x0010000000088ea3
- (void)didBecomeActiveHandler;	// IMP=0x0010000000088e86
- (void)tearDownViews;	// IMP=0x0010000000088bd9
- (void)_cleanupAllViews;	// IMP=0x001000000008882b
- (void)setUpViews;	// IMP=0x0010000000088448
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000008843e
- (id)preferredFocusEnvironments;	// IMP=0x00100000000883a3
- (void)viewDidLoad;	// IMP=0x001000000008830c

@end

