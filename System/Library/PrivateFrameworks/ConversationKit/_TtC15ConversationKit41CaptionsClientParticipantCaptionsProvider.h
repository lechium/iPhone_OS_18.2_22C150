//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit41CaptionsClientParticipantCaptionsProvider : NSObject
{
    MISSING_TYPE *logger;	// 210239488 = 0xc880000
    MISSING_TYPE *participantCaptionsProviderDelegate;	// 1937330991 = 0x7379532f
    MISSING_TYPE *avcCaptionsClient;	// 0 = 0x0
    MISSING_TYPE *lowConfidenceThreshold;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000060b50d
- (id)init;	// IMP=0x000000000060b62d
- (void)dealloc;	// IMP=0x000000000060b4f0
- (void)captionsClient:(id)arg1 didDetectGibberish:(_Bool)arg2;	// IMP=0x000000000060ca0c
- (void)captionsServerDidDie:(id)arg1;	// IMP=0x000000000060c75a
- (void)captionsClient:(id)arg1 didUpdateCaptions:(id)arg2 source:(int)arg3;	// IMP=0x000000000060c659
- (void)captionsClient:(id)arg1 didStopCaptioningWithReason:(unsigned char)arg2;	// IMP=0x000000000060be4d
- (void)captionsClient:(id)arg1 didStartCaptioningWithReason:(unsigned char)arg2;	// IMP=0x000000000060bc97
- (void)captionsClient:(id)arg1 didDisableCaptions:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000060bc1b
- (void)captionsClient:(id)arg1 didEnableCaptions:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000060b7da

@end

