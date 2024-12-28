//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UICoordinateSpace;

@protocol PKDrawingReplaySupport
- (void)_replayDrawingCancelled;
- (void)_replayDrawingEnded;
- (void)_replayDrawingMoved:(CDStruct_d06e1602)arg1 coordinateSpace:(id <UICoordinateSpace>)arg2;
- (void)_replayDrawingBegan:(CDStruct_d06e1602)arg1 coordinateSpace:(id <UICoordinateSpace>)arg2 activeInputProperties:(unsigned long long)arg3 inputType:(long long)arg4;

@optional
- (void)_replayDrawingEndedEstimatesTimeout:(double)arg1 withBackgroundQueueCompletion:(void (^)(PKStroke *, NSArray *))arg2;
- (void)_replayDrawingEndedWithBackgroundQueueCompletion:(void (^)(PKStroke *, NSArray *))arg1;
- (void)_replayEstimatedPropertiesUpdated:(CDStruct_d06e1602)arg1;
- (void)_replayDrawingMoved:(CDStruct_d06e1602)arg1;
- (void)_replayDrawingBegan:(CDStruct_d06e1602)arg1;
@end
