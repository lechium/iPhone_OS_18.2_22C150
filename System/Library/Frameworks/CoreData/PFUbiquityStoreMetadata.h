//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class NSData, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreMetadata : NSManagedObject
{
}

- (id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3;	// IMP=0x000000000028422a

// Remaining properties
@property(retain, nonatomic) NSString *modelVersionHashString; // @dynamic modelVersionHashString;
@property(retain, nonatomic) NSSet *peerStates; // @dynamic peerStates;
@property(retain, nonatomic) NSSet *primaryKeyRanges; // @dynamic primaryKeyRanges;
@property(retain, nonatomic) NSString *storeIdentifier; // @dynamic storeIdentifier;
@property(retain, nonatomic) NSData *storeOptionsBinaryPlistData; // @dynamic storeOptionsBinaryPlistData;
@property(retain, nonatomic) NSString *storeType; // @dynamic storeType;
@property(retain, nonatomic) NSString *storeURLString; // @dynamic storeURLString;
@property(retain, nonatomic) NSSet *transactionEntries; // @dynamic transactionEntries;
@property(retain, nonatomic) NSString *ubiquityName; // @dynamic ubiquityName;
@property(retain, nonatomic) NSString *ubiquityRelativePath; // @dynamic ubiquityRelativePath;
@property(retain, nonatomic) NSString *ubiquityRootURLString; // @dynamic ubiquityRootURLString;

@end

