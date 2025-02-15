//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CacheDeleteVolume, NSArray, NSDictionary, NSMutableDictionary, NSString;

@protocol CDPurgeableResultCache
- (_Bool)hasInvalids;
- (_Bool)isStale;
- (_Bool)isEmpty;
- (void)invalidateAllForgettingPushers:(_Bool)arg1;
- (long long)recentStateForVolume:(CacheDeleteVolume *)arg1;
- (NSDictionary *)recentInfoForVolumes:(NSArray *)arg1 atUrgency:(int)arg2 validateResults:(_Bool)arg3 targetVolume:(NSString *)arg4;
- (NSMutableDictionary *)dictionaryByMerging:(NSMutableDictionary *)arg1 with:(NSDictionary *)arg2;
- (NSDictionary *)recentInfoForVolume:(CacheDeleteVolume *)arg1 atUrgency:(int)arg2;
- (NSDictionary *)recentInfoForVolume:(CacheDeleteVolume *)arg1 atUrgency:(int)arg2 validateResults:(_Bool)arg3;
- (NSDictionary *)recentPurgeableTotals:(int)arg1;
@end

