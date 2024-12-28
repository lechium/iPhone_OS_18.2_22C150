//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSPayloadMessageStatsCounts, NSMutableDictionary;

@interface APSPayloadMessageStats : NSObject
{
    APSPayloadMessageStatsCounts *_incomingCounts;	// 8 = 0x8
    NSMutableDictionary *_incomingCountsByTopic;	// 16 = 0x10
    APSPayloadMessageStatsCounts *_outgoingCounts;	// 24 = 0x18
    NSMutableDictionary *_outgoingCountsByTopic;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000088f7c
@property(retain, nonatomic) NSMutableDictionary *outgoingCountsByTopic; // @synthesize outgoingCountsByTopic=_outgoingCountsByTopic;
@property(retain, nonatomic) APSPayloadMessageStatsCounts *outgoingCounts; // @synthesize outgoingCounts=_outgoingCounts;
@property(retain, nonatomic) NSMutableDictionary *incomingCountsByTopic; // @synthesize incomingCountsByTopic=_incomingCountsByTopic;
@property(retain, nonatomic) APSPayloadMessageStatsCounts *incomingCounts; // @synthesize incomingCounts=_incomingCounts;
- (void)prepareForFullWake;	// IMP=0x0010000000088cf7
- (void)prepareForDarkWake;	// IMP=0x0010000000088ade
- (id)outgoingCountsForTopic:(id)arg1;	// IMP=0x0010000000088a60
- (id)incomingCountsForTopic:(id)arg1;	// IMP=0x00100000000889e2
- (void)payloadMessageSent:(id)arg1;	// IMP=0x001000000008893a
- (void)payloadMessageReceived:(id)arg1;	// IMP=0x0010000000088892
- (id)init;	// IMP=0x00100000000887ef

@end
