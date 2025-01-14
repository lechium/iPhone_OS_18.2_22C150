//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerCreatedZoneRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    NSString *_zoneAccountIdentifier;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000052542e
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly, copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly, copy, nonatomic) NSString *zoneAccountIdentifier; // @synthesize zoneAccountIdentifier=_zoneAccountIdentifier;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0010000000525188
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000525148
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x0010000000524e62
- (id)requestIdentifier;	// IMP=0x0010000000524de8
- (unsigned long long)requestType;	// IMP=0x0010000000524ddd
- (id)initWithZoneAccountIdentifier:(id)arg1 containerName:(id)arg2 zoneName:(id)arg3;	// IMP=0x0010000000524d0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

