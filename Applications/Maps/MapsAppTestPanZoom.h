//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MapsAppTestPanZoom
{
    _Bool _isSubTest;	// 8 = 0x8
    _Bool _shouldUseStyleZoom;	// 9 = 0x9
    float _styleZoom;	// 12 = 0xc
    NSArray *_testPoints;	// 16 = 0x10
    double _pitch;	// 24 = 0x18
    double _yaw;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000051f655
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) _Bool shouldUseStyleZoom; // @synthesize shouldUseStyleZoom=_shouldUseStyleZoom;
@property(nonatomic) float styleZoom; // @synthesize styleZoom=_styleZoom;
@property(retain, nonatomic) NSArray *testPoints; // @synthesize testPoints=_testPoints;
- (void)onFullyDrawn:(id)arg1;	// IMP=0x001000000051f2d9
- (void)addFullyDrawnCallback:(CDUnknownBlockType)arg1;	// IMP=0x001000000051f17a
- (void)panLoadCompleted;	// IMP=0x001000000051ee90
- (void)panLoadFinished;	// IMP=0x001000000051edb6
- (void)panToTestPoint:(unsigned int)arg1;	// IMP=0x001000000051e80e
- (_Bool)runTest;	// IMP=0x001000000051e43a
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x001000000051df88

@end

