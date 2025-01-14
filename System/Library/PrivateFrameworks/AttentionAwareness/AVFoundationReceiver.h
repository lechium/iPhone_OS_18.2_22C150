//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AVFoundationReceiving;

__attribute__((visibility("hidden")))
@interface AVFoundationReceiver : NSObject
{
    _Bool _activateAttentionDetection;	// 8 = 0x8
    _Bool _activateEyeRelief;	// 9 = 0x9
    _Bool _activatePersonDetection;	// 10 = 0xa
    _Bool _running;	// 11 = 0xb
    id <AVFoundationReceiving> _receiver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e12b
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) _Bool activatePersonDetection; // @synthesize activatePersonDetection=_activatePersonDetection;
@property(nonatomic) _Bool activateEyeRelief; // @synthesize activateEyeRelief=_activateEyeRelief;
@property(nonatomic) _Bool activateAttentionDetection; // @synthesize activateAttentionDetection=_activateAttentionDetection;
@property(retain, nonatomic) id <AVFoundationReceiving> receiver; // @synthesize receiver=_receiver;
- (id)initForReceiver:(id)arg1 activateAttentionDetection:(_Bool)arg2 activateEyeRelief:(_Bool)arg3 activatePersonDetection:(_Bool)arg4;	// IMP=0x000000000001e039

@end

