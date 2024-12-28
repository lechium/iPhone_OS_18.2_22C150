//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class AFVoiceInfo, NSString;

@interface _ADPBDeviceOutputVoiceInfo : PBCodable
{
    int _gender;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    NSString *_voiceName;	// 24 = 0x18
    struct {
        unsigned int gender:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001649b9
@property(retain, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001648ec
- (unsigned long long)hash;	// IMP=0x0010000000164877
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000164794
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001646d1
- (void)copyTo:(id)arg1;	// IMP=0x001000000016464e
- (void)writeTo:(id)arg1;	// IMP=0x00100000001645cb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001645be
- (id)dictionaryRepresentation;	// IMP=0x00100000001644bb
- (id)description;	// IMP=0x001000000016440c
@property(readonly, nonatomic) _Bool hasVoiceName;
- (int)StringAsGender:(id)arg1;	// IMP=0x0010000000164343
- (id)genderAsString:(int)arg1;	// IMP=0x00100000001642fb
@property(nonatomic) _Bool hasGender;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(retain, nonatomic, setter=_ad_setVoiceInfo:) AFVoiceInfo *_ad_voiceInfo;

@end
