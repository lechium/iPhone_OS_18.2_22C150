//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPersistentHistoryToken, NSString;

@protocol BCCloudSyncVersions
@property(readonly, nonatomic) long long syncVersion;
@property(readonly, nonatomic) long long localVersion;
@property(readonly, nonatomic) long long cloudVersion;
@property(readonly, nonatomic) long long historyTokenOffset;
@property(readonly, copy, nonatomic) NSPersistentHistoryToken *historyToken;
@property(readonly, copy, nonatomic) NSString *dataType;
@end
