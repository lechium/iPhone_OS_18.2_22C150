//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface _TtC13AppProtection17PreferenceSetting : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000000952b0

// Remaining properties
@property(nonatomic, copy) NSString *bundleid; // @dynamic bundleid;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(nonatomic) _Bool locked; // @dynamic locked;
@property(nonatomic) _Bool provisional; // @dynamic provisional;

@end

