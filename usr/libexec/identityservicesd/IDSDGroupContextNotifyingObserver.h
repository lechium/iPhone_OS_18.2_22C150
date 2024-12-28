//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IDSDGroupContextNotifyingObserverDelegate;

@interface IDSDGroupContextNotifyingObserver : NSObject
{
    id <IDSDGroupContextNotifyingObserverDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000158a98
@property(retain, nonatomic) id <IDSDGroupContextNotifyingObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)groupContextDidReceiveRegistrationIdentityUpdate:(id)arg1;	// IMP=0x0010000000158a67
- (void)groupContext:(id)arg1 didReceiveDecryptionFailureForGroup:(id)arg2;	// IMP=0x0010000000158a4e
- (void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;	// IMP=0x0010000000158a32
- (void)groupContext:(id)arg1 didCacheGroup:(id)arg2;	// IMP=0x0010000000158a19
- (void)groupContext:(id)arg1 didCreateGroup:(id)arg2;	// IMP=0x0010000000158a00
- (void)dealloc;	// IMP=0x00100000001589bd
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000158952

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
