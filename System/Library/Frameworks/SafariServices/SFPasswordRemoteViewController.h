//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString;
@protocol SFPasswordRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFPasswordRemoteViewController : _UIRemoteViewController
{
    id <SFPasswordRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x001000000007c78c
+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x001000000007c784
+ (id)passwordServiceViewControllerName;	// IMP=0x001000000007c777
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007c6eb
- (void).cxx_destruct;	// IMP=0x000000000007c877
@property(nonatomic) __weak id <SFPasswordRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)willDismissServiceViewController;	// IMP=0x000000000007c80e
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000007c7ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

