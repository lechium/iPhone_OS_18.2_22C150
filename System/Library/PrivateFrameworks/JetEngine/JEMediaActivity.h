//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol JEMediaPlaylistItem;

@interface JEMediaActivity : NSObject
{
    MISSING_TYPE *pipelineHandler;	// 8 = 0x8
    MISSING_TYPE *type;	// 16 = 0x10
    MISSING_TYPE *playlistItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000226cb0
- (id)init;	// IMP=0x0000000000226c50
- (void)postProcessedStopMetricsFieldsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000226b80
- (void)postProcessedStartMetricsFieldsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000226930
- (id)stopMetricsFields;	// IMP=0x0000000000226730
- (id)startMetricsFields;	// IMP=0x00000000002266b0
- (id)eventDataForTransitioningEvents;	// IMP=0x0000000000226590
- (void)stoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 transitioningEventData:(id)arg5;	// IMP=0x0000000000226380
- (void)startedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 transitioningEventData:(id)arg5;	// IMP=0x0000000000225ec0
- (unsigned long long)positionWithOverallPosition:(unsigned long long)arg1;	// IMP=0x0000000000225e50
- (id)initWithType:(long long)arg1 playlistItem:(id)arg2 pipeline:(id)arg3 topic:(id)arg4;	// IMP=0x00000000002259b0
@property(nonatomic, readonly) _Bool isStopped;
@property(nonatomic, retain) id <JEMediaPlaylistItem> playlistItem; // @synthesize playlistItem;
@property(nonatomic) long long type; // @synthesize type;

@end
