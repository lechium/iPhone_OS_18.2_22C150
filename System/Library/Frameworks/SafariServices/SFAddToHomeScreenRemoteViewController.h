//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString;
@protocol SFAddToHomeScreenRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFAddToHomeScreenRemoteViewController : _UIRemoteViewController
{
    id <SFAddToHomeScreenRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x001000000010de72
+ (id)serviceViewControllerInterface;	// IMP=0x001000000010de52
+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x001000000010de4a
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000010ddeb
- (void).cxx_destruct;	// IMP=0x000000000010df08
@property(nonatomic) __weak id <SFAddToHomeScreenRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)serviceViewControllerDidFinishWithResult:(_Bool)arg1;	// IMP=0x000000000010de92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

