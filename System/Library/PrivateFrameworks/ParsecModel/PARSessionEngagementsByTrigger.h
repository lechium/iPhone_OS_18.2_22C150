//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface PARSessionEngagementsByTrigger : NSManagedObject
{
}

- (void).cxx_destruct;	// IMP=0x000000000000204c
- (void).cxx_construct;	// IMP=0x0000000000002043
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000001ff7

// Remaining properties
@property(nonatomic) short client; // @dynamic client;
@property(nonatomic) short go; // @dynamic go;
@property(nonatomic) _Bool isSuggestion; // @dynamic isSuggestion;
@property(nonatomic) _Bool isTopHit; // @dynamic isTopHit;
@property(nonatomic) short tap; // @dynamic tap;
@property(nonatomic, copy) NSDate *timestamp; // @dynamic timestamp;

@end

