//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AMSCloudDataManagerDataSourceDelegate;

@interface AMSCloudKitDataSource : NSObject
{
    _Bool _useSandboxEnvironment;	// 8 = 0x8
    id <AMSCloudDataManagerDataSourceDelegate> _delegate;	// 16 = 0x10
    NSString *_pushNotificationTopic;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000197ff5
@property(retain, nonatomic) NSString *pushNotificationTopic; // @synthesize pushNotificationTopic=_pushNotificationTopic;
@property(nonatomic) _Bool useSandboxEnvironment; // @synthesize useSandboxEnvironment=_useSandboxEnvironment;
@property(nonatomic) __weak id <AMSCloudDataManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_identityUpdated:(id)arg1;	// IMP=0x0010000000197df5
- (void)_accountChanged:(id)arg1;	// IMP=0x0010000000197c49
- (void)handlePushNotification:(id)arg1;	// IMP=0x001000000019771e
- (id)containerWithContainerIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x00100000001975c5
- (void)dealloc;	// IMP=0x0010000000197550
- (id)init;	// IMP=0x00100000001974ef
- (id)initWithPushNotificationTopic:(id)arg1;	// IMP=0x00100000001973dd

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
