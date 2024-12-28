//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSObject;
@protocol WFPINEntryViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface WFRemotePINEntryViewController : _UIRemoteViewController
{
    NSObject<WFPINEntryViewControllerProtocol> *_delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x0010000000002c82
+ (id)serviceViewControllerInterface;	// IMP=0x0010000000002c62
@property(nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000002d98
- (_Bool)simplePIN;	// IMP=0x0000000000002d90
- (_Bool)isNumericPIN;	// IMP=0x0000000000002d88
- (_Bool)requiresKeyboard;	// IMP=0x0000000000002d80
- (void)permitURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002d4f
- (void)getIsPINPresentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002d1e
- (void)userDidCancel;	// IMP=0x0000000000002d01
- (void)userEnteredCorrectPIN;	// IMP=0x0000000000002ce4
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000002ca2
- (void)setPageTitle:(id)arg1;	// IMP=0x0000000000002c31
- (void)setURL:(id)arg1;	// IMP=0x0000000000002c00
- (void)dealloc;	// IMP=0x0000000000002bc0
- (void)viewDidLoad;	// IMP=0x0000000000002b48

@end
