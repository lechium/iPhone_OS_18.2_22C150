//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioPacket, FTCancelRequest, FTFinishAudio, FTStartPronGuessRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutablePronGuessStreamingRequest
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x006000000018e607
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x006000000018e52d
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x006000000018e4f3
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTCancelRequest *contentAsFTCancelRequest;
@property(copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(copy, nonatomic) FTStartPronGuessRequest *contentAsFTStartPronGuessRequest;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018dec8
- (id)init;	// IMP=0x000000000018de3a

@end
