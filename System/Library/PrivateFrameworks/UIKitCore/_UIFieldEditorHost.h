//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFieldEditor, UIView;
@protocol _UIFieldEditorHostingViewRequirements;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorHost : NSObject
{
    UIView<_UIFieldEditorHostingViewRequirements> *_hostingView;	// 8 = 0x8
    UIFieldEditor *_hostedFieldEditor;	// 16 = 0x10
}

+ (id)fieldEditorHostForTextField:(id)arg1;	// IMP=0x0060000000370cb8
- (void).cxx_destruct;	// IMP=0x000000000037103a
@property(readonly, nonatomic) UIFieldEditor *hostedFieldEditor; // @synthesize hostedFieldEditor=_hostedFieldEditor;
@property(readonly, nonatomic) __weak UIView<_UIFieldEditorHostingViewRequirements> *hostingView; // @synthesize hostingView=_hostingView;
- (id)description;	// IMP=0x0000000000370ff7
- (void)layoutIfNeeded;	// IMP=0x0000000000370ff1
- (void)addPlaceholderLabel:(id)arg1;	// IMP=0x0000000000370f4b
- (void)removeFieldEditor;	// IMP=0x0000000000370f19
- (id)_viewForHostingFieldEditor;	// IMP=0x0000000000370ed6
- (void)addFieldEditor:(id)arg1;	// IMP=0x0000000000370db8
@property(readonly, nonatomic, getter=isHostingFieldEditor) _Bool hostingFieldEditor;
- (id)initWithHostingView:(id)arg1;	// IMP=0x0000000000370d46

@end
