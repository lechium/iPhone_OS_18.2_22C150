//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, NSValue;

__attribute__((visibility("hidden")))
@interface AVAirMessage : NSObject
{
    unsigned int _type;	// 8 = 0x8
    NSString *_itemIdentifier;	// 16 = 0x10
    NSString *_MIMEType;	// 24 = 0x18
    NSString *_extendedLanguageTag;	// 32 = 0x20
    NSValue *_value;	// 40 = 0x28
    NSData *_rawData;	// 48 = 0x30
    NSArray *_array;	// 56 = 0x38
    NSDictionary *_dictionary;	// 64 = 0x40
    NSDictionary *_initialRepresentation;	// 72 = 0x48
}

+ (id)messageWithParts:(id)arg1;	// IMP=0x00400000000b3614
+ (id)messageWithPosterArtworkMetadata:(id)arg1 itemIdentifier:(id)arg2;	// IMP=0x00400000000b353b
+ (id)messageWithExternalMetadata:(id)arg1 itemIdentifier:(id)arg2;	// IMP=0x00400000000b34ae
+ (id)messageWithUserScrubToAssetTime:(double)arg1 itemIdentifier:(id)arg2;	// IMP=0x00400000000b340c
+ (id)messageWithRequiresLinearPlayback:(_Bool)arg1 itemIdentifier:(id)arg2;	// IMP=0x00400000000b336f
+ (id)_nameForDataCompressionAlgorithm:(long long)arg1;	// IMP=0x00400000000b32ac
+ (id)_decompressBodyData:(id)arg1 forCompressionAlgorithm:(id)arg2;	// IMP=0x00400000000b302f
+ (_Bool)isAirMessagingEnabled;	// IMP=0x00400000000b2df4
+ (id)commonDictionaryRepresentationKeys;	// IMP=0x00400000000b2dc4
+ (id)dictionaryRepresentationCommon;	// IMP=0x00400000000b2caf
+ (id)buildVersion;	// IMP=0x00400000000b2c7f
+ (id)currentAppIdentifier;	// IMP=0x00400000000b2c28
+ (id)currentOSIdentifier;	// IMP=0x00400000000b2c1b
- (void).cxx_destruct;	// IMP=0x00000000000b2bb1
@property(readonly, nonatomic) NSDictionary *initialRepresentation; // @synthesize initialRepresentation=_initialRepresentation;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSValue *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *extendedLanguageTag; // @synthesize extendedLanguageTag=_extendedLanguageTag;
@property(copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (id)number;	// IMP=0x00000000000b2a6d
- (id)messageDataRepresentation;	// IMP=0x00000000000b26cd
- (_Bool)shouldUseJSONForBody;	// IMP=0x00000000000b2602
- (id)headerTextRepresenationForBodyDataLength:(unsigned long long)arg1 extraHeaders:(id)arg2;	// IMP=0x00000000000b21bc
@property(readonly, nonatomic) NSData *jsonDataRepresentation;
- (id)description;	// IMP=0x00000000000b1d75
- (id)allRecognizedKeysForDictionaryRepresentation;	// IMP=0x00000000000b1d17
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithMessageType:(unsigned int)arg1 itemIdentifier:(id)arg2 dictionaryRepresentation:(id)arg3;	// IMP=0x00000000000b114c
- (id)initWithMessageType:(unsigned int)arg1 itemIdentifier:(id)arg2;	// IMP=0x00000000000b1094

@end

