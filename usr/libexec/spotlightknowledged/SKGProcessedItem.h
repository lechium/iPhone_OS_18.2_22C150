//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SKGEmbedding;

@interface SKGProcessedItem : NSObject
{
    NSMutableDictionary *_interactions;	// 8 = 0x8
    NSMutableSet *_keyphrases;	// 16 = 0x10
    NSMutableSet *_emailAddresses;	// 24 = 0x18
    NSMutableSet *_phoneNumbers;	// 32 = 0x20
    NSMutableSet *_addresses;	// 40 = 0x28
    NSMutableSet *_locations;	// 48 = 0x30
    NSMutableSet *_dates;	// 56 = 0x38
    NSMutableSet *_flights;	// 64 = 0x40
    NSMutableSet *_links;	// 72 = 0x48
    NSMutableSet *_trackingNumbers;	// 80 = 0x50
    NSMutableSet *_currencies;	// 88 = 0x58
    NSMutableArray *_detectedCalendarEventTypes;	// 96 = 0x60
    NSMutableArray *_primaryEmbeddings;	// 104 = 0x68
    NSMutableArray *_secondaryEmbeddings;	// 112 = 0x70
    unsigned long long _firstChunkLength;	// 120 = 0x78
    unsigned long long _embeddingSize;	// 128 = 0x80
    unsigned long long _embeddingFormat;	// 136 = 0x88
    unsigned long long _embeddingVersion;	// 144 = 0x90
    NSArray *_fsIndexDataContentVersion;	// 152 = 0x98
    NSMutableSet *_owners;	// 160 = 0xa0
    NSMutableSet *_authors;	// 168 = 0xa8
    NSMutableSet *_recipients;	// 176 = 0xb0
    NSMutableSet *_participants;	// 184 = 0xb8
    NSString *_language;	// 192 = 0xc0
    unsigned long long _textSize;	// 200 = 0xc8
    _Bool _isMail;	// 208 = 0xd0
    _Bool _isSafari;	// 209 = 0xd1
    _Bool _isCalendar;	// 210 = 0xd2
    _Bool _isMessages;	// 211 = 0xd3
    _Bool _isPommesCtl;	// 212 = 0xd4
    _Bool _didProcessPeople;	// 213 = 0xd5
    _Bool _errorProcessingPeople;	// 214 = 0xd6
    _Bool _didProcessCalendarEvents;	// 215 = 0xd7
    _Bool _didProcessKeyphrases;	// 216 = 0xd8
    _Bool _errorProcessingKeyphrases;	// 217 = 0xd9
    _Bool _didProcessEmbeddings;	// 218 = 0xda
    _Bool _errorProcessingEmbeddings;	// 219 = 0xdb
    _Bool _isFileSystemConsistent;	// 220 = 0xdc
    NSString *_referenceIdentifier;	// 224 = 0xe0
    NSString *_personaIdentifier;	// 232 = 0xe8
    NSString *_bundleIdentifier;	// 240 = 0xf0
    NSString *_protectionClass;	// 248 = 0xf8
    NSString *_filePath;	// 256 = 0x100
    unsigned long long _textContentSize;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00200000000a452a
@property(nonatomic) _Bool isFileSystemConsistent; // @synthesize isFileSystemConsistent=_isFileSystemConsistent;
@property(nonatomic) _Bool errorProcessingEmbeddings; // @synthesize errorProcessingEmbeddings=_errorProcessingEmbeddings;
@property(nonatomic) _Bool didProcessEmbeddings; // @synthesize didProcessEmbeddings=_didProcessEmbeddings;
// Error: Property attributes should begin with the type ('T') attribute, property name: errorProcessingKeyphrases
// Property attributes: (null)

@property(nonatomic) _Bool didProcessKeyphrases; // @synthesize didProcessKeyphrases=_didProcessKeyphrases;
@property(nonatomic) _Bool didProcessCalendarEvents; // @synthesize didProcessCalendarEvents=_didProcessCalendarEvents;
@property(nonatomic) _Bool errorProcessingPeople; // @synthesize errorProcessingPeople=_errorProcessingPeople;
@property(nonatomic) _Bool didProcessPeople; // @synthesize didProcessPeople=_didProcessPeople;
@property(readonly, nonatomic) _Bool isPommesCtl; // @synthesize isPommesCtl=_isPommesCtl;
@property(readonly, nonatomic) _Bool isMessages; // @synthesize isMessages=_isMessages;
@property(readonly, nonatomic) _Bool isCalendar; // @synthesize isCalendar=_isCalendar;
@property(readonly, nonatomic) _Bool isSafari; // @synthesize isSafari=_isSafari;
@property(readonly, nonatomic) _Bool isMail; // @synthesize isMail=_isMail;
@property(readonly, nonatomic) unsigned long long textContentSize; // @synthesize textContentSize=_textContentSize;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *personaIdentifier; // @synthesize personaIdentifier=_personaIdentifier;
@property(readonly) NSString *referenceIdentifier; // @synthesize referenceIdentifier=_referenceIdentifier;
@property(readonly) SKGEmbedding *embedding;
@property(readonly) NSArray *participants;
@property(readonly) NSArray *recipients;
@property(readonly) NSArray *authors;
@property(readonly) NSArray *owners;
@property(readonly) NSDictionary *interactions;
@property(readonly) NSArray *detectedCalendarEventTypes;
@property(readonly) NSString *textContentLanguage;
- (void)addInteraction:(id)arg1 score:(id)arg2;	// IMP=0x00100000000a41b6
- (void)addParticipants:(id)arg1;	// IMP=0x00100000000a414b
- (void)addRecipients:(id)arg1;	// IMP=0x00100000000a40e0
- (void)addAuthors:(id)arg1;	// IMP=0x00100000000a4075
- (void)addOwners:(id)arg1;	// IMP=0x00100000000a400a
- (void)removeEmbedding;	// IMP=0x00100000000a3fc4
- (void)setFsIndexDataContentVersion:(id)arg1;	// IMP=0x00100000000a3fb0
- (void)setEmbeddingVersion:(unsigned long long)arg1;	// IMP=0x00100000000a3fa3
- (void)setEmbeddingFormat:(unsigned long long)arg1;	// IMP=0x00100000000a3f7b
- (void)setEmbeddingSize:(unsigned long long)arg1;	// IMP=0x00100000000a3f3e
- (void)setChunkLength:(unsigned long long)arg1;	// IMP=0x00100000000a3f34
- (void)addDetectedCalendarEventTypes:(id)arg1;	// IMP=0x00100000000a3eda
- (void)addPrimaryEmbedding:(id)arg1;	// IMP=0x00100000000a3e80
- (void)addSecondaryEmbedding:(id)arg1;	// IMP=0x00100000000a3e26
- (void)addCurrency:(id)arg1;	// IMP=0x00100000000a3dcc
@property(readonly) NSArray *currencies;
@property(readonly) NSArray *trackingNumbers;
- (void)addTrackingNumber:(id)arg1;	// IMP=0x00100000000a3d46
@property(readonly) NSArray *links;
- (void)addLink:(id)arg1;	// IMP=0x00100000000a3cd6
@property(readonly) NSArray *flights;
- (void)addFlight:(id)arg1;	// IMP=0x00100000000a3c66
@property(readonly) NSArray *dates;
- (void)addDate:(id)arg1;	// IMP=0x00100000000a3bf6
@property(readonly) NSArray *locations;
- (void)addLocation:(id)arg1;	// IMP=0x00100000000a3b86
@property(readonly) NSArray *addresses;
- (void)addAddress:(id)arg1;	// IMP=0x00100000000a3b16
@property(readonly) NSArray *phoneNumbers;
- (void)addPhoneNumber:(id)arg1;	// IMP=0x00100000000a3aa6
@property(readonly) NSArray *emailAddresses;
- (void)addEmailAddress:(id)arg1;	// IMP=0x00100000000a3a36
@property(readonly) NSArray *keyphrases;
- (void)addKeyphrase:(id)arg1;	// IMP=0x00100000000a39c6
- (void)clearKeyphrases;	// IMP=0x00100000000a39ac
- (void)setTextContent:(id)arg1;	// IMP=0x00100000000a3985
- (void)setLanguage:(id)arg1;	// IMP=0x00100000000a3971
- (id)initWithReferenceIdentifier:(id)arg1 personaIdentifier:(id)arg2 bundleIdentifier:(id)arg3 protectionClass:(id)arg4;	// IMP=0x00100000000a3677

@end
