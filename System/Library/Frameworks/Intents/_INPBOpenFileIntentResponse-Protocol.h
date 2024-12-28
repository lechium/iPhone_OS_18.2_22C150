//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBInteger, _INPBString;

@protocol _INPBOpenFileIntentResponse <NSObject>
+ (Class)entitiesType;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool success;
@property(readonly, nonatomic) _Bool hasQuery;
@property(retain, nonatomic) _INPBString *query;
@property(readonly, nonatomic) _Bool hasNumResults;
@property(retain, nonatomic) _INPBInteger *numResults;
@property(readonly, nonatomic) unsigned long long entitiesCount;
@property(copy, nonatomic) NSArray *entities;
- (_INPBString *)entitiesAtIndex:(unsigned long long)arg1;
- (void)addEntities:(_INPBString *)arg1;
- (void)clearEntities;
@end
