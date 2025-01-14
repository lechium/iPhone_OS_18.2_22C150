//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber;

@protocol SFEngagementSignal <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *domainEngagementScores;
@property(copy, nonatomic) NSNumber *localScoreConfidence;
@property(copy, nonatomic) NSNumber *serverScoreConfidence;
@property(copy, nonatomic) NSNumber *localScore;
@property(copy, nonatomic) NSNumber *serverScore;
@property(copy, nonatomic) NSNumber *version;
@end

