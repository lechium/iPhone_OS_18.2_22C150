//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol UITextPasteConfigurationSupporting_Internal;

__attribute__((visibility("hidden")))
@interface UITextPasteController : NSObject
{
    NSMapTable *_sessions;	// 8 = 0x8
    id <UITextPasteConfigurationSupporting_Internal> _supportingView;	// 16 = 0x10
}

+ (id)combineAttributedStrings:(id)arg1 addingSeparation:(_Bool)arg2;	// IMP=0x0010000001776ed3
- (void).cxx_destruct;	// IMP=0x000000000177889e
@property(nonatomic) __weak id <UITextPasteConfigurationSupporting_Internal> supportingView; // @synthesize supportingView=_supportingView;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 forSession:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000177828d
- (id)_combineItemAttributedStrings:(id)arg1 forRange:(id)arg2;	// IMP=0x000000000177808a
- (void)_transformTextPasteItem:(id)arg1;	// IMP=0x0000000001777f3a
- (id)_clampRange:(id)arg1;	// IMP=0x0000000001777c06
- (_Bool)_pasteDelegateHandlesPasting;	// IMP=0x0000000001777b9f
- (void)_restorePasteResultForSession:(id)arg1;	// IMP=0x0000000001777a30
- (void)_executePasteForSession:(id)arg1;	// IMP=0x000000000177745a
- (void)coordinator:(id)arg1 endPastingItems:(id)arg2;	// IMP=0x00000000017771c6
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2 delegate:(id)arg3 matchesTextStyles:(_Bool)arg4;	// IMP=0x000000000177683f
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2;	// IMP=0x0000000001776827
- (_Bool)shouldMatchStyleForItem:(id)arg1;	// IMP=0x00000000017766ad
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(_Bool)arg4 delegate:(id)arg5;	// IMP=0x0000000001775fff
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0000000001775fdc
- (id)initWithSupportingView:(id)arg1;	// IMP=0x0000000001775f4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

