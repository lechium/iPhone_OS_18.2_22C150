//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol FCCKZonePruningAssistant <NSObject>
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(NSString *)arg1;
- (double)softMaxRecordAgeWhenMigratingZoneName:(NSString *)arg1;
- (NSArray *)pruneRecords:(NSArray *)arg1 forZoneName:(NSString *)arg2;
- (_Bool)canHelpPruneZoneName:(NSString *)arg1;
@end

