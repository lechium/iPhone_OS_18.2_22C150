//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTPostItnHammerRequest, FTPostItnHammerResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableAsrPostItnHammerMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000ab34b
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x00600000000ab2bc
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x00600000000ab27c
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTPostItnHammerResponse *session_messageAsFTPostItnHammerResponse;
@property(copy, nonatomic) FTPostItnHammerRequest *session_messageAsFTPostItnHammerRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aae4f
- (id)init;	// IMP=0x00000000000aadc1

@end
