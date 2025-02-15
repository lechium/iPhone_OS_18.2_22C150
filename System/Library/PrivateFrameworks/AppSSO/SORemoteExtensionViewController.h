//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString;
@protocol SORemoteExtensionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SORemoteExtensionViewController : _UIRemoteViewController
{
    id <SORemoteExtensionViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x001000000001c90e
+ (id)serviceViewControllerInterface;	// IMP=0x001000000001c8ee
- (void).cxx_destruct;	// IMP=0x000000000001cb2d
@property(nonatomic) __weak id <SORemoteExtensionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000001c92e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

