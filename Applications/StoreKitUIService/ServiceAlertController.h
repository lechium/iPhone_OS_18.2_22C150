//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol ServiceAlertDelegate;

@interface ServiceAlertController : NSObject
{
    NSMutableArray *_alertViews;	// 8 = 0x8
    id <ServiceAlertDelegate> _delegate;	// 16 = 0x10
    id _remoteViewControllerProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000146de
@property(nonatomic) __weak id <ServiceAlertDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_disconnectFromAlertView:(id)arg1;	// IMP=0x00100000000145b8
- (void)alertViewCancel:(id)arg1;	// IMP=0x0010000000014548
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x0010000000014421
- (void)presentAlertForDialog:(id)arg1;	// IMP=0x001000000001403d
- (void)dealloc;	// IMP=0x0010000000013ee5
- (id)initWithRemoteViewControllerProxy:(id)arg1;	// IMP=0x0010000000013e7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

