//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSGroupServer, NSString;

@interface IDSDGroupContextDataSource : NSObject
{
    IDSGroupServer *_groupServer;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x002000000013032e
- (void).cxx_destruct;	// IMP=0x0020000000134ec1
@property(retain, nonatomic) IDSGroupServer *groupServer; // @synthesize groupServer=_groupServer;
- (id)_sponsorAccount;	// IMP=0x0010000000134dd3
- (id)_sponsorAlias;	// IMP=0x0010000000134d59
- (id)_groupWithDeviceIdentity:(id)arg1 parent:(id)arg2 groupInfo:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000134d51
- (void)_participantsForDestinations:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000134d4b
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000134c52
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000134a94
- (void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001339d1
- (void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001330c4
- (void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000132f1a
- (void)_groupFromServerResponse:(id)arg1 context:(id)arg2 groupID:(id)arg3 error:(id)arg4 resultCode:(long long)arg5 resultDictionary:(id)arg6 allEntries:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000131370
- (void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001303d9
- (id)init;	// IMP=0x0010000000130383

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

