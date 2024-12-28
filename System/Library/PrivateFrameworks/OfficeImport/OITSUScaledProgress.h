//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, OITSUProgress, OITSUScaledProgressStorage;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUScaledProgress
{
    OITSUScaledProgressStorage *mStorage;	// 32 = 0x20
    OITSUProgress *mProgress;	// 40 = 0x28
    id mProgressObserver;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *mProgressQueue;	// 56 = 0x38
}

- (void)p_removeProgressObserverFromProgressInQueue;	// IMP=0x0000000000287101
- (void)p_addProgressObserverToProgressInQueue;	// IMP=0x0000000000286fc8
- (void)removeProgressObserver:(id)arg1;	// IMP=0x0000000000286f0c
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000286e46
- (_Bool)isIndeterminate;	// IMP=0x0000000000286e1b
@property double maxValue;
- (double)value;	// IMP=0x0000000000286d46
@property(retain) OITSUProgress *progress;
- (void)dealloc;	// IMP=0x0000000000286acc
- (id)init;	// IMP=0x0000000000286a43

@end
