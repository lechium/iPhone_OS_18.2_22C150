//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDataString;

@protocol _INPBDataString <NSObject>
+ (Class)alternativesType;
@property(readonly, nonatomic) _Bool hasVocabularyIdentifier;
@property(copy, nonatomic) NSString *vocabularyIdentifier;
@property(readonly, nonatomic) _Bool hasPronunciationHint;
@property(copy, nonatomic) NSString *pronunciationHint;
@property(readonly, nonatomic) _Bool hasLocalizedValue;
@property(copy, nonatomic) NSString *localizedValue;
@property(readonly, nonatomic) unsigned long long alternativesCount;
@property(copy, nonatomic) NSArray *alternatives;
- (_INPBDataString *)alternativesAtIndex:(unsigned long long)arg1;
- (void)addAlternatives:(_INPBDataString *)arg1;
- (void)clearAlternatives;
@end

