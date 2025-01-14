//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, RMManagementSource;

@interface RMDeclarationPayload : NSManagedObject
{
}

+ (_Bool)isSignificantChange:(id)arg1;	// IMP=0x0020000000030629
+ (id)keyPathsForValuesAffectingManagementSourceIdentifier;	// IMP=0x00100000000305b9
- (id)reportDetails;	// IMP=0x002000000003122b
- (void)_validateLoadStateWithErrors:(id)arg1;	// IMP=0x00100000000310db
- (short)_currentLoadState;	// IMP=0x0010000000030f99
- (void)_validateSetOncePropertiesWithErrors:(id)arg1;	// IMP=0x0010000000030b20
- (void)_validateManagementSourceWithErrors:(id)arg1;	// IMP=0x0010000000030a83
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x001000000003085a
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x0010000000030631
@property(readonly, copy, nonatomic) NSString *managementSourceIdentifier;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(copy, nonatomic) NSString *declarationType; // @dynamic declarationType;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) short loadState; // @dynamic loadState;
@property(retain, nonatomic) RMManagementSource *managementSource; // @dynamic managementSource;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;
@property(copy, nonatomic) NSString *serverToken; // @dynamic serverToken;
@property(retain, nonatomic) id state; // @dynamic state;
@property(readonly) Class superclass;

@end

