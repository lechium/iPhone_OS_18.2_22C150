//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>
#import <PencilKit/PKPaletteViewStateObserving-Protocol.h>

@class PKPaletteView;

@protocol PKPaletteViewInternalDelegate <NSObject, PKPaletteViewStateObserving>
- (void)paletteViewReturnKeyTypeDidChange:(PKPaletteView *)arg1;
- (void)paletteViewContentSizeDidChange:(PKPaletteView *)arg1;
- (void)paletteViewShowFeedbackForToolChange:(PKPaletteView *)arg1;
@end
