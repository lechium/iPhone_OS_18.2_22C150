//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface ManagedSocialMediaHandle : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000626fd0

// Remaining properties
@property(nonatomic, retain) NSSet *contributor; // @dynamic contributor;
@property(nonatomic, copy) NSString *platform; // @dynamic platform;
@property(nonatomic, retain) NSSet *trainerMetadata; // @dynamic trainerMetadata;
@property(nonatomic, copy) NSString *url; // @dynamic url;

@end
