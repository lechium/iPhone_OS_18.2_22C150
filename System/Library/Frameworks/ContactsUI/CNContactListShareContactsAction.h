//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactCardFieldPicker, CNContactListShareContactsActionContext, NSArray, NSString, UIActivityViewController, UIView;
@protocol CNContactListActionDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListShareContactsAction : NSObject
{
    id <CNContactListActionDelegate> _delegate;	// 8 = 0x8
    CNContactListShareContactsActionContext *_context;	// 16 = 0x10
    NSArray *_contacts;	// 24 = 0x18
    NSArray *_filteredContacts;	// 32 = 0x20
    CNContactCardFieldPicker *_fieldPicker;	// 40 = 0x28
    UIActivityViewController *_activityViewController;	// 48 = 0x30
    UIView *_sourceView;	// 56 = 0x38
}

+ (id)descriptorForRequiredKeys;	// IMP=0x001000000037d7e8
- (void).cxx_destruct;	// IMP=0x000000000037d669
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) CNContactCardFieldPicker *fieldPicker; // @synthesize fieldPicker=_fieldPicker;
@property(retain, nonatomic) NSArray *filteredContacts; // @synthesize filteredContacts=_filteredContacts;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(readonly, nonatomic) CNContactListShareContactsActionContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <CNContactListActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contactCardFieldPicker:(id)arg1 didFinishWithContacts:(id)arg2;	// IMP=0x000000000037d42a
- (id)customActionViewControllerForActivityViewController:(id)arg1;	// IMP=0x000000000037d418
- (id)customLocalizedActionTitleForActivityViewController:(id)arg1;	// IMP=0x000000000037d3bc
- (_Bool)_customizationAvailableForActivityViewController:(id)arg1;	// IMP=0x000000000037d2f3
- (id)_customizationGroupsForActivityViewController:(id)arg1;	// IMP=0x000000000037d2e6
- (id)activityItemForContacts:(id)arg1;	// IMP=0x000000000037d17b
- (void)presentShareSheet;	// IMP=0x000000000037cd6c
- (void)presentFilterFieldPicker;	// IMP=0x000000000037ccc6
- (void)setupForContactFieldPicker;	// IMP=0x000000000037cc07
- (_Bool)editRequiresAuthorization;	// IMP=0x000000000037cbff
- (void)performAction;	// IMP=0x000000000037cb61
- (_Bool)shouldReloadListOnCompletion;	// IMP=0x000000000037cb59
- (id)initWithContacts:(id)arg1 sourceView:(id)arg2 context:(id)arg3;	// IMP=0x000000000037ca90
- (id)initWithContacts:(id)arg1 sourceView:(id)arg2;	// IMP=0x000000000037ca7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

