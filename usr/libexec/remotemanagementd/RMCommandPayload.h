//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, RMCommandPayloadState, RMManagementSource;

@interface RMCommandPayload : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingManagementSourceIdentifier;	// IMP=0x00200000000243e1
- (id)reportDetails;	// IMP=0x0020000000024c38
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x00100000000246bd
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x0010000000024451
@property(readonly, copy, nonatomic) NSString *managementSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) RMManagementSource *managementSource; // @dynamic managementSource;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;
@property(retain, nonatomic) RMCommandPayloadState *state; // @dynamic state;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end
