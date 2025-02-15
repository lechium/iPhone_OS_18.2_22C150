//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBModifyRelationship, _INPBString;

@protocol _INPBSetRelationshipIntent <NSObject>
+ (Class)contactIdentifiersType;
@property(readonly, nonatomic) _Bool hasTargetRelationship;
@property(retain, nonatomic) _INPBModifyRelationship *targetRelationship;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long contactIdentifiersCount;
@property(copy, nonatomic) NSArray *contactIdentifiers;
- (_INPBString *)contactIdentifiersAtIndex:(unsigned long long)arg1;
- (void)addContactIdentifiers:(_INPBString *)arg1;
- (void)clearContactIdentifiers;
@end

