//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityAchievementsDaemon/NSObject-Protocol.h>

@class ACHDataStore, NSArray, NSDictionary, NSString;

@protocol ACHDataStorePropertyProviding <NSObject>
@property(retain, nonatomic) NSDictionary *dataStoreProperties;
@property(readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)dataStoreDidClearAllProperties:(ACHDataStore *)arg1 completion:(void (^)(_Bool))arg2;
@end

