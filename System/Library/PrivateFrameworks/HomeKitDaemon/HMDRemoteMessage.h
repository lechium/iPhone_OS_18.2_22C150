//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessage.h>

@class HMDHomeKitVersion, HMDRemoteMessageSenderContext, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessage : HMFMessage
{
    long long _type;	// 16 = 0x10
    NSUUID *_transactionIdentifier;	// 24 = 0x18
    unsigned long long _sendOptions;	// 32 = 0x20
    HMDHomeKitVersion *_sourceVersion;	// 40 = 0x28
}

+ (id)messageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4 restriction:(unsigned long long)arg5;	// IMP=0x0060000000f5e375
+ (id)secureMessageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4 timeout:(double)arg5 restriction:(unsigned long long)arg6;	// IMP=0x0060000000f5e2bf
+ (id)secureMessageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4 restriction:(unsigned long long)arg5;	// IMP=0x0060000000f5e213
+ (id)secureMessageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4;	// IMP=0x0060000000f5e170
+ (id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;	// IMP=0x0060000000f5e0ce
- (void).cxx_destruct;	// IMP=0x0000000000f5e09d
@property(retain, nonatomic) HMDHomeKitVersion *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(readonly, nonatomic) unsigned long long sendOptions; // @synthesize sendOptions=_sendOptions;
@property(copy, nonatomic) NSUUID *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithDestination:(id)arg1;	// IMP=0x0000000000f5de48
@property(nonatomic) _Bool disallowsIDSRacing;
@property(readonly, nonatomic) NSString *collapseID;
@property(retain, nonatomic) NSString *toID;
@property(retain, nonatomic) HMDRemoteMessageSenderContext *senderContext;
@property(copy, nonatomic) NSString *attributedMessageName;
@property(nonatomic) unsigned long long responseRestriction;
@property(nonatomic) unsigned long long restriction;
- (void)setInternalResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f5d7d0
- (void)setResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f5d756
@property(nonatomic, getter=isSecure) _Bool secure;
- (_Bool)isRemote;	// IMP=0x0000000000f5d5bc
- (id)privateDescription;	// IMP=0x0000000000f5d5a8
- (id)description;	// IMP=0x0000000000f5d594
- (id)debugDescription;	// IMP=0x0000000000f5d57d
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000f5d2df
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 headers:(id)arg5 type:(long long)arg6 timeout:(double)arg7 secure:(_Bool)arg8 restriction:(unsigned long long)arg9 sendOptions:(unsigned long long)arg10 collapseID:(id)arg11;	// IMP=0x0000000000f5cfdc
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(_Bool)arg7 restriction:(unsigned long long)arg8 sendOptions:(unsigned long long)arg9 collapseID:(id)arg10;	// IMP=0x0000000000f5cf91
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 headers:(id)arg5 type:(long long)arg6 timeout:(double)arg7 secure:(_Bool)arg8 restriction:(unsigned long long)arg9 sendOptions:(unsigned long long)arg10;	// IMP=0x0000000000f5cf52
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(_Bool)arg7 restriction:(unsigned long long)arg8 sendOptions:(unsigned long long)arg9;	// IMP=0x0000000000f5cf10
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(_Bool)arg7 restriction:(unsigned long long)arg8;	// IMP=0x0000000000f5cee1
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(_Bool)arg7;	// IMP=0x0000000000f5cebc
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 headers:(id)arg5 type:(long long)arg6 timeout:(double)arg7 secure:(_Bool)arg8;	// IMP=0x0000000000f5ce7f
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(_Bool)arg6 restriction:(unsigned long long)arg7;	// IMP=0x0000000000f5ce49
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 headers:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(_Bool)arg7;	// IMP=0x0000000000f5ce0f
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(_Bool)arg6;	// IMP=0x0000000000f5cdea
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6;	// IMP=0x0000000000f5cdbd
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000f5cd99
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;	// IMP=0x0000000000f5cd6a

@end
