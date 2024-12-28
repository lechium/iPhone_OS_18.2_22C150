//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalDatabaseInitializationConfiguration, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CADSeparatedDatabasePool : NSObject
{
    int _databaseID;	// 8 = 0x8
    CalDatabaseInitializationConfiguration *_config;	// 16 = 0x10
    NSString *_databasePath;	// 24 = 0x18
    unsigned long long _lastChangeTimestamp;	// 32 = 0x20
    NSMutableArray *_connections;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003be24
@property(readonly, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(nonatomic) unsigned long long lastChangeTimestamp; // @synthesize lastChangeTimestamp=_lastChangeTimestamp;
@property(readonly, nonatomic) int databaseID; // @synthesize databaseID=_databaseID;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) CalDatabaseInitializationConfiguration *config; // @synthesize config=_config;
- (void)purgeConnectionsLastUsedPriorTo:(unsigned long long)arg1 stats:(CDStruct_70551160 *)arg2;	// IMP=0x000000000003bbfa
- (void)_returnConnectionToPool:(id)arg1;	// IMP=0x000000000003bba1
- (id)initWithConfig:(id)arg1 databaseID:(int)arg2;	// IMP=0x000000000003ba6f

@end
