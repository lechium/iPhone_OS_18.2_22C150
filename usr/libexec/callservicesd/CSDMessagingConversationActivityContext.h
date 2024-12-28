//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TUConversationActivityContext;

@interface CSDMessagingConversationActivityContext : PBCodable
{
    NSString *_actionDescription;	// 8 = 0x8
    NSString *_completedDescription;	// 16 = 0x10
    NSString *_contextIdentifier;	// 24 = 0x18
    NSString *_ongoingDescription;	// 32 = 0x20
}

+ (id)activityContextWithTUActivityContext:(id)arg1;	// IMP=0x0020000000065a3c
- (void).cxx_destruct;	// IMP=0x0020000000092fc0
@property(retain, nonatomic) NSString *completedDescription; // @synthesize completedDescription=_completedDescription;
@property(retain, nonatomic) NSString *ongoingDescription; // @synthesize ongoingDescription=_ongoingDescription;
@property(retain, nonatomic) NSString *actionDescription; // @synthesize actionDescription=_actionDescription;
- (void)setContextIdentifier:(id)arg1;	// IMP=0x0010000000092f3d
- (id)contextIdentifier;	// IMP=0x0010000000092f2c
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000092e89
- (unsigned long long)hash;	// IMP=0x0010000000092e05
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000092cf9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000092c0f
- (void)copyTo:(id)arg1;	// IMP=0x0010000000092b6c
- (void)writeTo:(id)arg1;	// IMP=0x0010000000092ad5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000092ac8
- (id)dictionaryRepresentation;	// IMP=0x0010000000092833
- (id)description;	// IMP=0x0010000000092784
@property(readonly, nonatomic) _Bool hasCompletedDescription;
@property(readonly, nonatomic) _Bool hasOngoingDescription;
@property(readonly, nonatomic) _Bool hasActionDescription;
@property(readonly, nonatomic) _Bool hasContextIdentifier;
@property(readonly, nonatomic) TUConversationActivityContext *tuConversationActivityContext;

@end
