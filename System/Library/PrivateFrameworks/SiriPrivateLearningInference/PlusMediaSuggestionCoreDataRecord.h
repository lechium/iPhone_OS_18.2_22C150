//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSOrderedSet, NSString, NSUUID, PlusMediaReferenceCoreDataRecord;

@interface PlusMediaSuggestionCoreDataRecord : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000154500

// Remaining properties
@property(nonatomic, retain) NSOrderedSet *contributingGroundTruth; // @dynamic contributingGroundTruth;
@property(nonatomic, copy) NSUUID *id; // @dynamic id;
@property(nonatomic, retain) PlusMediaReferenceCoreDataRecord *inferredMediaReference; // @dynamic inferredMediaReference;
@property(nonatomic) double lastUpdated; // @dynamic lastUpdated;
@property(nonatomic, copy) NSData *leftHandKey; // @dynamic leftHandKey;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic) double score; // @dynamic score;
@property(nonatomic, copy) NSData *scoreHistory; // @dynamic scoreHistory;
@property(nonatomic, retain) NSOrderedSet *tags; // @dynamic tags;
@property(nonatomic) double timestamp; // @dynamic timestamp;

@end
