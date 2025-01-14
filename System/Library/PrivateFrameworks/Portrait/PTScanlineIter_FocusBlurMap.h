//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PTScanlineMask_FocusBlurMap;

__attribute__((visibility("hidden")))
@interface PTScanlineIter_FocusBlurMap : NSObject
{
    PTScanlineMask_FocusBlurMap *_mask;	// 8 = 0x8
    unsigned long long _currentTileRow;	// 16 = 0x10
    unsigned long long _currentTile;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000060cb4
@property unsigned long long currentTile; // @synthesize currentTile=_currentTile;
@property unsigned long long currentTileRow; // @synthesize currentTileRow=_currentTileRow;
@property(readonly) PTScanlineMask_FocusBlurMap *mask; // @synthesize mask=_mask;
- (void)_advanceToNextTile;	// IMP=0x0000000000060b65
- (void)_advanceToNextTileRow;	// IMP=0x0000000000060a53
- (void)reset;	// IMP=0x00000000000609f9
- (void)resetX;	// IMP=0x00000000000609be
- (struct _NSRange)nextRangeX;	// IMP=0x000000000006089f
- (struct _NSRange)nextRangeY;	// IMP=0x0000000000060806
- (id)initWithMask:(id)arg1;	// IMP=0x000000000006078b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

