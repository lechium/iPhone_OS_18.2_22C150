//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, RemoteRecord;

@interface RemoteRecordData : NSManagedObject
{
}

- (void).cxx_destruct;	// IMP=0x0000000000094b40
- (void).cxx_construct;	// IMP=0x0000000000094b30
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000094ab0

// Remaining properties
@property(nonatomic, copy) NSData *data; // @dynamic data;
@property(nonatomic, retain) RemoteRecord *parent; // @dynamic parent;

@end
