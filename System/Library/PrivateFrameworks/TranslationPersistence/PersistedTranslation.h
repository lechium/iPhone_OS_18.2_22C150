//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class MISSING_TYPE, NSArray, NSDate, NSString, _TtC22TranslationPersistence15AnySpeechResult, _TtC22TranslationPersistence20AnyTranslationResult;

@interface PersistedTranslation : NSManagedObject
{
    MISSING_TYPE *ttsPlaybackRateDouble;	// 8 = 0x8
    MISSING_TYPE *selfLoggingInvocationId;	// 1163157343 = 0x45545f5f
}

- (void).cxx_destruct;	// IMP=0x0000000000010560
- (void).cxx_construct;	// IMP=0x0000000000010510
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000010490
@property(nonatomic) double ttsPlaybackRateDouble; // @synthesize ttsPlaybackRateDouble;

// Remaining properties
@property(nonatomic, copy) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic, copy) NSString *displayLocalePairText; // @dynamic displayLocalePairText;
@property(nonatomic, copy) NSDate *favoriteDate; // @dynamic favoriteDate;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSArray *interactedIndices; // @dynamic interactedIndices;
@property(nonatomic, copy) NSString *requestID; // @dynamic requestID;
@property(nonatomic, copy) NSString *sessionID; // @dynamic sessionID;
@property(nonatomic, copy) NSString *sourceIdentifier; // @dynamic sourceIdentifier;
@property(nonatomic, retain) _TtC22TranslationPersistence15AnySpeechResult *sourceInput; // @dynamic sourceInput;
@property(nonatomic, copy) NSString *targetIdentifier; // @dynamic targetIdentifier;
@property(nonatomic, retain) _TtC22TranslationPersistence20AnyTranslationResult *targetResult; // @dynamic targetResult;

@end
