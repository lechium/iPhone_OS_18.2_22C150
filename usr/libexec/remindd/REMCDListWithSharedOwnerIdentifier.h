//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSUUID, REMCDSharee;

@interface REMCDListWithSharedOwnerIdentifier : NSManagedObject
{
}

- (void).cxx_destruct;	// IMP=0x00400000001e5040
- (void).cxx_construct;	// IMP=0x00100000001e5030
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00100000001e4fb0

// Remaining properties
@property(nonatomic, retain) REMCDSharee *sharedOwner; // @dynamic sharedOwner;
@property(nonatomic, copy) NSUUID *sharedOwnerIdentifier; // @dynamic sharedOwnerIdentifier;

@end

