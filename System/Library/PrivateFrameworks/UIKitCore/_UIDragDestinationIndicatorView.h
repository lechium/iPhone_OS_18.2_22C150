//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationIndicatorView : UIView
{
    _Bool _isSourceList;	// 160 = 0xa0
    NSIndexPath *_currentIndexPath;	// 168 = 0xa8
    double _scaleFactor;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000176930e
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool isSourceList; // @synthesize isSourceList=_isSourceList;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000001768f80
- (void)positionHorizontallyCenteredInFrame:(struct CGRect)arg1;	// IMP=0x0000000001768ee2
- (void)positionOnCellFrame:(struct CGRect)arg1 above:(_Bool)arg2;	// IMP=0x0000000001768e5e
- (void)positionVerticallyCenteredInFrame:(struct CGRect)arg1;	// IMP=0x0000000001768da4
- (id)initWithSourceListStyle:(_Bool)arg1;	// IMP=0x0000000001768cd8

@end
