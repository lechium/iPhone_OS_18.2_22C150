//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface WFParameterHostingView : UIView
{
    MISSING_TYPE *hostingController;	// 8 = 0x8
    MISSING_TYPE *initialState;	// 16 = 0x10
    MISSING_TYPE *updatedState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a0d68
- (void)detachFromParentViewController;	// IMP=0x00000000001a0bb7
- (void)attachToParentViewController:(id)arg1;	// IMP=0x00000000001a0b54
- (void)configureConfigurationUIViewWithParameter:(id)arg1 state:(id)arg2 processing:(_Bool)arg3 shouldFocus:(_Bool)arg4 variableProvider:(id)arg5 widgetFamily:(long long)arg6 fillProvider:(id)arg7 overridingCellBackgroundColor:(id)arg8 updateBlock:(CDUnknownBlockType)arg9;	// IMP=0x00000000001a015a
- (void)configureViewForRuntimeUIWithParameter:(id)arg1 state:(id)arg2 processing:(_Bool)arg3 shouldFocus:(_Bool)arg4 variableProvider:(id)arg5 updateBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000019ff4f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000019feb0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019fe78
- (void)layoutSubviews;	// IMP=0x000000000019fdd9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000019fc89

@end

