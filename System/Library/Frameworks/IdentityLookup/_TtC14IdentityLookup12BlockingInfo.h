//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, _TtC14IdentityLookup21LiveLookupDBExtension;

@interface _TtC14IdentityLookup12BlockingInfo : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000019bd0

// Remaining properties
@property(nonatomic, retain) _TtC14IdentityLookup21LiveLookupDBExtension *dbExtension; // @dynamic dbExtension;
@property(nonatomic, copy) NSDate *expiration; // @dynamic expiration;
@property(nonatomic, copy) NSString *handle; // @dynamic handle;
@property(nonatomic) _Bool shouldBlock; // @dynamic shouldBlock;

@end
