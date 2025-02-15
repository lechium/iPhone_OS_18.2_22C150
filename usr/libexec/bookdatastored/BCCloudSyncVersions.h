//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSPersistentHistoryToken, NSString;

@interface BCCloudSyncVersions : NSManagedObject
{
}

@property(copy, nonatomic) NSPersistentHistoryToken *historyToken; // @dynamic historyToken;
- (void)configureFromSyncVersions:(id)arg1;	// IMP=0x001000000004460c
- (id)mutableCopy;	// IMP=0x00100000000445de

// Remaining properties
@property(nonatomic) long long cloudVersion; // @dynamic cloudVersion;
@property(copy, nonatomic) NSString *dataType; // @dynamic dataType;
@property(nonatomic) long long historyTokenOffset; // @dynamic historyTokenOffset;
@property(nonatomic) long long localVersion; // @dynamic localVersion;
@property(copy, nonatomic) NSData *rawHistoryToken; // @dynamic rawHistoryToken;
@property(nonatomic) long long syncVersion; // @dynamic syncVersion;

@end

