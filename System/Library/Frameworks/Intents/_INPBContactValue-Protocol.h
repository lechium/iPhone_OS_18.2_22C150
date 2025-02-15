//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBContactHandle, _INPBImageValue, _INPBValueMetadata;

@protocol _INPBContactValue <NSObject>
+ (Class)aliasesType;
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(nonatomic) _Bool hasSuggestionType;
@property(nonatomic) int suggestionType;
@property(nonatomic) _Bool hasSearchProvider;
@property(nonatomic) int searchProvider;
@property(readonly, nonatomic) _Bool hasRelationship;
@property(copy, nonatomic) NSString *relationship;
@property(readonly, nonatomic) _Bool hasPhoneticNameSuffix;
@property(copy, nonatomic) NSString *phoneticNameSuffix;
@property(readonly, nonatomic) _Bool hasPhoneticNamePrefix;
@property(copy, nonatomic) NSString *phoneticNamePrefix;
@property(readonly, nonatomic) _Bool hasPhoneticMiddleName;
@property(copy, nonatomic) NSString *phoneticMiddleName;
@property(readonly, nonatomic) _Bool hasPhoneticLastName;
@property(copy, nonatomic) NSString *phoneticLastName;
@property(readonly, nonatomic) _Bool hasPhoneticFirstName;
@property(copy, nonatomic) NSString *phoneticFirstName;
@property(readonly, nonatomic) _Bool hasPhonemeData;
@property(copy, nonatomic) NSString *phonemeData;
@property(readonly, nonatomic) _Bool hasNickName;
@property(copy, nonatomic) NSString *nickName;
@property(readonly, nonatomic) _Bool hasNameSuffix;
@property(copy, nonatomic) NSString *nameSuffix;
@property(readonly, nonatomic) _Bool hasNamePrefix;
@property(copy, nonatomic) NSString *namePrefix;
@property(readonly, nonatomic) _Bool hasMiddleName;
@property(copy, nonatomic) NSString *middleName;
@property(readonly, nonatomic) _Bool hasLastName;
@property(copy, nonatomic) NSString *lastName;
@property(nonatomic) _Bool hasIsMe;
@property(nonatomic) _Bool isMe;
@property(nonatomic) _Bool hasIsContactSuggestion;
@property(nonatomic) _Bool isContactSuggestion;
@property(readonly, nonatomic) _Bool hasImage;
@property(retain, nonatomic) _INPBImageValue *image;
@property(readonly, nonatomic) _Bool hasHandle;
@property(copy, nonatomic) NSString *handle;
@property(readonly, nonatomic) _Bool hasFullName;
@property(copy, nonatomic) NSString *fullName;
@property(readonly, nonatomic) _Bool hasFirstName;
@property(copy, nonatomic) NSString *firstName;
@property(readonly, nonatomic) _Bool hasCustomIdentifier;
@property(copy, nonatomic) NSString *customIdentifier;
@property(readonly, nonatomic) _Bool hasContactHandle;
@property(retain, nonatomic) _INPBContactHandle *contactHandle;
@property(readonly, nonatomic) unsigned long long aliasesCount;
@property(copy, nonatomic) NSArray *aliases;
- (int)StringAsSuggestionType:(NSString *)arg1;
- (NSString *)suggestionTypeAsString:(int)arg1;
- (int)StringAsSearchProvider:(NSString *)arg1;
- (NSString *)searchProviderAsString:(int)arg1;
- (_INPBContactHandle *)aliasesAtIndex:(unsigned long long)arg1;
- (void)addAliases:(_INPBContactHandle *)arg1;
- (void)clearAliases;
@end

