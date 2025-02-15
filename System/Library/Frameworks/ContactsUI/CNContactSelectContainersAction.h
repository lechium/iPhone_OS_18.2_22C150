//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContactContainerPickerViewController, CNUIContainerContext, NSString;

__attribute__((visibility("hidden")))
@interface CNContactSelectContainersAction : CNContactAction
{
    CNContactContainerPickerViewController *_containerPicker;	// 8 = 0x8
    CNUIContainerContext *_containerContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003100be
@property(retain, nonatomic) CNUIContainerContext *containerContext; // @synthesize containerContext=_containerContext;
@property(retain, nonatomic) CNContactContainerPickerViewController *containerPicker; // @synthesize containerPicker=_containerPicker;
- (_Bool)containerPicker:(id)arg1 shouldAllowDeselectionOfContainerWithIdentifier:(id)arg2;	// IMP=0x000000000030ff77
- (void)containerPicker:(id)arg1 didFinishWithPickedContainers:(id)arg2;	// IMP=0x000000000030fb5e
- (void)cleanupForDismissal;	// IMP=0x000000000030fb4a
- (void)performActionWithContainerContext:(id)arg1;	// IMP=0x000000000030f92c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

