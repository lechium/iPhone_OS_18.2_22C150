//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class BMBiomeScheduler, BMStoreEvent, BMStream, BPSSink, NSObject, NSString;
@protocol HMDUserActivityType3BiomeStreamSubscriberDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDUserActivityType3BiomeStreamSubscriber : HMFObject
{
    _Bool _configured;	// 8 = 0x8
    id <HMDUserActivityType3BiomeStreamSubscriberDelegate> _delegate;	// 16 = 0x10
    BPSSink *_sink;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_biomeQueue;	// 32 = 0x20
    BMBiomeScheduler *_scheduler;	// 40 = 0x28
    BMStream *_stream;	// 48 = 0x30
    BMStoreEvent *_cachedMostRecentEvent;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
    CDUnknownBlockType _filterEventBlock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000850afe
@property(readonly, nonatomic) CDUnknownBlockType filterEventBlock; // @synthesize filterEventBlock=_filterEventBlock;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) BMStoreEvent *cachedMostRecentEvent; // @synthesize cachedMostRecentEvent=_cachedMostRecentEvent;
@property(readonly, nonatomic) BMStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) BMBiomeScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *biomeQueue; // @synthesize biomeQueue=_biomeQueue;
@property(retain, nonatomic) BPSSink *sink; // @synthesize sink=_sink;
@property(nonatomic, getter=isConfigured) _Bool configured; // @synthesize configured=_configured;
@property(nonatomic) __weak id <HMDUserActivityType3BiomeStreamSubscriberDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unconfigure;	// IMP=0x00000000008509b4
- (_Bool)isEvent:(id)arg1 within24HoursInThePastOfDate:(id)arg2;	// IMP=0x000000000085087e
- (id)_fetchMostRecentEventFromDate:(id)arg1;	// IMP=0x0000000000850522
- (void)fetchMostRecentEventWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000850436
- (id)mostRecentEvent;	// IMP=0x0000000000850389
- (void)registerForBiomeStreamWithIdentifier:(id)arg1;	// IMP=0x00000000008500cd
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000085003b
- (id)initWithIdentifier:(id)arg1 stream:(id)arg2 filterEventBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000084febf

@end

