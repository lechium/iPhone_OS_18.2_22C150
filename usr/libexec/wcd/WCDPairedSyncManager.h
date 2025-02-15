//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PSYSyncCoordinator;
@protocol OS_os_transaction;

@interface WCDPairedSyncManager : NSObject
{
    NSObject<OS_os_transaction> *_syncTransaction;	// 8 = 0x8
    PSYSyncCoordinator *_coordinator;	// 16 = 0x10
    NSMutableDictionary *_identifiersToSyncSessions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000021f32
@property(retain) NSMutableDictionary *identifiersToSyncSessions; // @synthesize identifiersToSyncSessions=_identifiersToSyncSessions;
@property(retain) PSYSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) NSObject<OS_os_transaction> *syncTransaction; // @synthesize syncTransaction=_syncTransaction;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000021cee
- (_Bool)handlePotentialPairedSyncForComplicationsFailedWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0010000000021bb8
- (void)handlePairedSyncForComplicationsAckWithIdentifier:(id)arg1 success:(_Bool)arg2;	// IMP=0x00100000000219dc
@property(readonly) NSString *state;
- (id)init;	// IMP=0x00100000000217eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
// Error: Property attributes should begin with the type ('T') attribute, property name: hash
// Property attributes: (null)

@property(readonly) Class superclass;

@end

