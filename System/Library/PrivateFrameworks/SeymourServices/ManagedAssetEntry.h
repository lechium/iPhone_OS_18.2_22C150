//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface ManagedAssetEntry : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000614140

// Remaining properties
@property(nonatomic) int loadStatus; // @dynamic loadStatus;
@property(nonatomic, copy) NSString *localURL; // @dynamic localURL;
@property(nonatomic, copy) NSString *remoteURL; // @dynamic remoteURL;
@property(nonatomic) long long size; // @dynamic size;

@end
