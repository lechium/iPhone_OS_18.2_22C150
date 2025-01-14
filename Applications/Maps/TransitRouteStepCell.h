//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TransitSegmentSteppingModeSign, TransitSteppingCameraFramer;

@interface TransitRouteStepCell
{
    TransitSegmentSteppingModeSign *_sign;	// 112 = 0x70
    TransitSteppingCameraFramer *_cameraFramer;	// 120 = 0x78
}

+ (id)cellWithRoute:(id)arg1 sign:(id)arg2;	// IMP=0x004000000080c22a
- (void).cxx_destruct;	// IMP=0x002000000080cfca
@property(retain, nonatomic) TransitSteppingCameraFramer *cameraFramer; // @synthesize cameraFramer=_cameraFramer;
@property(retain, nonatomic) TransitSegmentSteppingModeSign *sign; // @synthesize sign=_sign;
- (CDUnknownBlockType)snapshotBlock;	// IMP=0x001000000080cc05
- (void)drawPinInRect:(struct CGRect)arg1 zoomLevel:(double)arg2;	// IMP=0x001000000080cbff
- (void)drawRouteLineInRect:(struct CGRect)arg1 zoomLevel:(double)arg2;	// IMP=0x001000000080cbf9
- (id)instructionStringsArray;	// IMP=0x001000000080c7fe
- (unsigned long long)numberOfSteps;	// IMP=0x001000000080c7b6
- (long long)signIndexForStepIndex:(long long)arg1;	// IMP=0x001000000080c60e
- (long long)signIndexForSign:(id)arg1;	// IMP=0x001000000080c4c3
- (id)routeStep;	// IMP=0x001000000080c3b4
- (id)initWithRoute:(id)arg1 sign:(id)arg2;	// IMP=0x001000000080c298

@end

