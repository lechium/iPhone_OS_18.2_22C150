//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MathTypesetting/NSObject-Protocol.h>

@class EQKitRenderContext, EQKitSelection;
@protocol EQKitInspectable, EQKitLayoutContext;

@protocol EQKitLayout <NSObject>
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) struct CGRect erasableBounds;
@property(readonly, nonatomic) double naturalAlignmentOffset;
@property(readonly, nonatomic) double vsize;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
@property(readonly, nonatomic) double height;
- (id <EQKitInspectable>)rootInspectable;
- (EQKitSelection *)selectionForPoint:(struct CGPoint)arg1;
- (void)renderIntoContext:(EQKitRenderContext *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)layoutWithContext:(id <EQKitLayoutContext>)arg1;
@end
