//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface AVTHUDView : UIView
{
    UILabel *_totalLatencyLabel;	// 8 = 0x8
    UILabel *_arKitLatencyLabel;	// 16 = 0x10
    UILabel *_updateSyncLatencyLabel;	// 24 = 0x18
    UILabel *_metalLatencyLabel;	// 32 = 0x20
    UILabel *_fpsLabel;	// 40 = 0x28
    UILabel *_audioTimeLabel;	// 48 = 0x30
    UILabel *_timeBetweenARFrameLabel;	// 56 = 0x38
    UILabel *_droppedFrameLabel;	// 64 = 0x40
    UILabel *_shaderCompilationLabel;	// 72 = 0x48
    CDStruct_53ba08a1 _lastFrameData;	// 80 = 0x50
    CALayer *_arKitLatencyBar;	// 152 = 0x98
    CALayer *_updateLatencyBar;	// 160 = 0xa0
    CALayer *_metalLatencyBar;	// 168 = 0xa8
    NSMutableArray *_totalLatencyGraphLayers;	// 176 = 0xb0
    int _selectedGraphIndex;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000004d97e
- (void)_tapAction:(id)arg1;	// IMP=0x000000000004d84b
- (void)_loadSubviews;	// IMP=0x000000000004d288
- (id)_label;	// IMP=0x000000000004d114
- (void)_updateLatencyGraph:(CDStruct_53ba08a1 *)arg1;	// IMP=0x000000000004cac6
- (void)_updateLatencyBar:(CDStruct_53ba08a1 *)arg1;	// IMP=0x000000000004c7b1
- (void)layoutSubviews;	// IMP=0x000000000004c457
- (void)updateWithData:(CDStruct_53ba08a1)arg1;	// IMP=0x000000000004c0be
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004c020

@end

