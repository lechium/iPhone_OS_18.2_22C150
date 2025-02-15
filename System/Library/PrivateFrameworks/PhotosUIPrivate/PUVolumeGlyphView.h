//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer, CAStateController, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUVolumeGlyphView : UIView
{
    CALayer *_glyphLayer;	// 8 = 0x8
    CAStateController *_stateController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_loadingQueue;	// 24 = 0x18
    NSString *_stateName;	// 32 = 0x20
}

+ (id)classSubstitions;	// IMP=0x00100000004b6480
- (void).cxx_destruct;	// IMP=0x00000000004b6286
@property(copy, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;	// IMP=0x00000000004b61f6
- (void)layoutSubviews;	// IMP=0x00000000004b6091
- (void)_handleGlyphLayerDidLoad:(id)arg1;	// IMP=0x00000000004b5f62
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004b5e57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

