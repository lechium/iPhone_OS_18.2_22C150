//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface PARImagesPropensity : NSManagedObject
{
}

- (void).cxx_destruct;	// IMP=0x00000000000022c4
- (void).cxx_construct;	// IMP=0x00000000000022bb
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000000226f

// Remaining properties
@property(nonatomic) short image; // @dynamic image;
@property(nonatomic) short other; // @dynamic other;
@property(nonatomic) short querySuggestion; // @dynamic querySuggestion;
@property(nonatomic) short recentResult; // @dynamic recentResult;
@property(nonatomic, copy) NSDate *timestamp; // @dynamic timestamp;
@property(nonatomic) short zkw; // @dynamic zkw;

@end
