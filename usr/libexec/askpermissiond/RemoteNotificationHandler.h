//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString;
@protocol OS_dispatch_queue;

@interface RemoteNotificationHandler : NSObject
{
    APSConnection *_apsConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_apsQueue;	// 16 = 0x10
}

+ (id)sharedHandler;	// IMP=0x0020000000018818
- (void).cxx_destruct;	// IMP=0x002000000001ba87
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apsQueue; // @synthesize apsQueue=_apsQueue;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (id)_storeDSIDsForMediaType:(id)arg1 onlyIncludeActive:(_Bool)arg2;	// IMP=0x001000000001b650
- (id)_allStoreDSIDs;	// IMP=0x001000000001b3cd
- (id)_activeStoreDSIDs;	// IMP=0x001000000001b147
- (id)_accountMediaTypes;	// IMP=0x001000000001b0dd
- (id)_cloudDSID;	// IMP=0x001000000001b05c
- (void)_registerCloudPublicToken:(id)arg1;	// IMP=0x001000000001ab31
- (void)_handleRequesterNotification:(id)arg1 andSuppressDialog:(_Bool)arg2;	// IMP=0x001000000001a882
- (void)_handleStoreNotificationPayload:(id)arg1;	// IMP=0x0010000000019f16
- (void)_handleApproverNotification:(id)arg1;	// IMP=0x0010000000019c6f
- (void)_handleCloudNotificationPayload:(id)arg1;	// IMP=0x00100000000192bc
- (void)_startConnection;	// IMP=0x0010000000018f4a
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000018b14
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000000189b3
- (void)handleLegacyStoreNotificationPayload:(id)arg1;	// IMP=0x00100000000188de
- (void)start;	// IMP=0x001000000001886d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

