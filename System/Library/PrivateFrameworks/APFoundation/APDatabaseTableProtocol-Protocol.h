//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APFoundation/APPurgeableCacheObjectP-Protocol.h>
#import <APFoundation/NSObject-Protocol.h>

@class APDatabaseManager, NSString;

@protocol APDatabaseTableProtocol <NSObject, APPurgeableCacheObjectP>
@property(readonly, nonatomic) __weak APDatabaseManager *manager;
@property(readonly, nonatomic) Class rowClass;
@property(readonly, nonatomic) NSString *tableName;
@end

