//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITextFormattingViewController, _UISceneHostingController;
@protocol _UIRemoteSheet;

__attribute__((visibility("hidden")))
@interface _UITextFormattingSceneHostingImpl : NSObject
{
    _UISceneHostingController *_hostingController;	// 8 = 0x8
    UITextFormattingViewController *delegateTextFormattingViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000015ce99a
@property(nonatomic) __weak UITextFormattingViewController *delegateTextFormattingViewController; // @synthesize delegateTextFormattingViewController;
- (void)_presentTypographySettingsForFont:(id)arg1;	// IMP=0x00000000015ce90a
- (void)_presentFontPickerWithConfiguration:(id)arg1 selectedFonts:(id)arg2;	// IMP=0x00000000015ce87f
- (void)_presentColorPicker:(struct CGRect)arg1 selectedColor:(id)arg2;	// IMP=0x00000000015ce7fd
- (void)_textFormattingDidFinish;	// IMP=0x00000000015ce7c0
- (void)_textFormattingDidChangeValue:(id)arg1 textAttributesData:(id)arg2;	// IMP=0x00000000015ce735
@property(readonly, nonatomic) id <_UIRemoteSheet> _remoteSheet;
- (void)clientIsReady;	// IMP=0x00000000015ce6ea
- (void)setupSceneHosting;	// IMP=0x00000000015ce57a
- (void)setRemoteFormattingDescriptor:(id)arg1;	// IMP=0x00000000015ce526
- (void)setRemoteConfiguration:(id)arg1;	// IMP=0x00000000015ce4d2
- (void)setupRemoteHosting;	// IMP=0x00000000015ce451

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
