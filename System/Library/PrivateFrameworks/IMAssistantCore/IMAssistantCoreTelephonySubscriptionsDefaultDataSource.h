//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMAssistantCoreTelephonySubscriptionsDefaultDataSource : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00100000000268f6
- (id)simIDForSenderIdentity:(id)arg1;	// IMP=0x000000000002699b
- (id)handleIDForSenderIdentity:(id)arg1;	// IMP=0x0000000000026993
- (id)bestSenderIdentityForChatWithHandleIDs:(id)arg1;	// IMP=0x000000000002698b
@property(readonly, nonatomic) _Bool deviceHasMultipleSubscriptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

