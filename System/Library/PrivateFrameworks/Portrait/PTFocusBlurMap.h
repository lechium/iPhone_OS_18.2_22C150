//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface PTFocusBlurMap : NSObject
{
    struct PTFigCaptureStreamFocusBlurMap *_map;	// 8 = 0x8
    unsigned long long _sensorWidth;	// 16 = 0x10
    unsigned long long _sensorHeight;	// 24 = 0x18
    unsigned long long _validX;	// 32 = 0x20
    unsigned long long _validY;	// 40 = 0x28
    unsigned long long _validWidth;	// 48 = 0x30
    unsigned long long _validHeight;	// 56 = 0x38
    struct CGRect _autoFocusRect;	// 64 = 0x40
}

@property(readonly) unsigned long long validHeight; // @synthesize validHeight=_validHeight;
@property(readonly) unsigned long long validWidth; // @synthesize validWidth=_validWidth;
@property(readonly) unsigned long long validY; // @synthesize validY=_validY;
@property(readonly) unsigned long long validX; // @synthesize validX=_validX;
@property(readonly) unsigned long long sensorHeight; // @synthesize sensorHeight=_sensorHeight;
@property(readonly) unsigned long long sensorWidth; // @synthesize sensorWidth=_sensorWidth;
@property struct CGRect autoFocusRect; // @synthesize autoFocusRect=_autoFocusRect;
- (struct CGRect)_boxFromComponent:(id)arg1;	// IMP=0x000000000003d5c6
- (struct CGRect)_sensorPixelRectFromRegion:(id)arg1;	// IMP=0x000000000003d556
- (id)_nodesFromTileRect:(struct CGRect)arg1;	// IMP=0x000000000003d355
- (struct CGRect)_tileRectFromNodes:(id)arg1;	// IMP=0x000000000003d1a8
- (struct CGRect)_sensorPixelRectFromTileRect:(struct CGRect)arg1;	// IMP=0x000000000003d162
- (struct CGRect)_tileRectFromSensorPixelRect:(struct CGRect)arg1;	// IMP=0x000000000003d118
- (struct CGRect)_pixelRectFromNormalRect:(struct CGRect)arg1;	// IMP=0x000000000003d0e3
- (struct CGRect)_normalRectFromPixelRect:(struct CGRect)arg1;	// IMP=0x000000000003d0aa
- (struct CGRect)_validNormalizedRectFromSensorPixelRect:(struct CGRect)arg1;	// IMP=0x000000000003d022
- (id)_largestOfComponents:(id)arg1;	// IMP=0x000000000003ce58
- (id)_connectedComponents:(id)arg1;	// IMP=0x000000000003cd3b
- (id)_connectedComponentWithNode:(unsigned long long)arg1 unvisited:(id)arg2;	// IMP=0x000000000003cb53
- (id)_inFocusNodes;	// IMP=0x000000000003ca9e
- (id)_blurExtendedNodes:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000003c999
- (void)_getBlurRangeOfNodes:(id)arg1 blurMin:(int *)arg2 blurMax:(int *)arg3;	// IMP=0x000000000003c8f6
- (id)_blurExtendedNodes:(id)arg1 blurMin:(int)arg2 blurMax:(int)arg3;	// IMP=0x000000000003c820
- (id)_nodesBetweenBlurMin:(int)arg1 blurMax:(int)arg2;	// IMP=0x000000000003c7a7
- (id)_nodesForNormalizedRect:(struct CGRect)arg1;	// IMP=0x000000000003c6f4
- (unsigned long long)tileYForTile:(unsigned long long)arg1;	// IMP=0x000000000003c6de
- (unsigned long long)tileXForTile:(unsigned long long)arg1;	// IMP=0x000000000003c6c5
@property(readonly) unsigned long long tileCountY;
@property(readonly) unsigned long long tileCountX;
@property(readonly) unsigned long long tileHeight;
@property(readonly) unsigned long long tileWidth;
@property(readonly) unsigned long long inputHeight;
@property(readonly) unsigned long long inputWidth;
@property(readonly) unsigned long long inputY;
@property(readonly) unsigned long long inputX;
- (struct CGRect)validNormalizedRectFromRegion:(id)arg1;	// IMP=0x000000000003c5e5
@property(readonly) struct CGRect focusValidNormalizedRect;
@property(readonly) struct CGRect inputValidNormalizedRect;
- (struct CGRect)_inputSensorPixelRect;	// IMP=0x000000000003c47a
@property(readonly) NSIndexSet *largestFocusRegion;
@property(readonly) NSIndexSet *inFocusRegion;
- (void)_initValidRectFromSensorWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x000000000003c317
- (id)initWithFocusBlurMapDictionary:(id)arg1;	// IMP=0x000000000003ba8f
- (id)initWithFocusBlurMapData:(id)arg1 sensorSize:(struct CGSize)arg2 validSensorRect:(struct CGRect)arg3;	// IMP=0x000000000003b89b
- (void)dealloc;	// IMP=0x000000000003b85c
- (id)init;	// IMP=0x000000000003b7ed

@end
