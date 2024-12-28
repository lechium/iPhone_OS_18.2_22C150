//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit26PeoplePickerViewController : UIViewController
{
    MISSING_TYPE *availableRecipientTintColor;	// 8 = 0x8
    MISSING_TYPE *unavailableRecipientTintColor;	// 16 = 0x10
    MISSING_TYPE *gondolaRecipientTintColor;	// 24 = 0x18
    MISSING_TYPE *restrictedRecipientTintColor;	// 32 = 0x20
    MISSING_TYPE *constants;	// 40 = 0x28
    MISSING_TYPE *callProviderManager;	// 64 = 0x40
    MISSING_TYPE *senderIdentityPillView;	// 72 = 0x48
    MISSING_TYPE *searchController;	// 80 = 0x50
    MISSING_TYPE *viewModel;	// 88 = 0x58
    MISSING_TYPE *style;	// 96 = 0x60
    MISSING_TYPE *reporter;	// 104 = 0x68
    MISSING_TYPE *videoButton;	// 112 = 0x70
    MISSING_TYPE *audioButton;	// 120 = 0x78
    MISSING_TYPE *addPeopleButton;	// 128 = 0x80
    MISSING_TYPE *stackView;	// 136 = 0x88
    MISSING_TYPE *possibleRecipients;	// 144 = 0x90
    MISSING_TYPE *loggedInvalidRecipients;	// 152 = 0x98
    MISSING_TYPE *existingAddresses;	// 160 = 0xa0
    MISSING_TYPE *idsDestinations;	// 168 = 0xa8
    MISSING_TYPE *idsGroupDestinations;	// 176 = 0xb0
    MISSING_TYPE *meHandles;	// 184 = 0xb8
    MISSING_TYPE *restrictionPolicy;	// 192 = 0xc0
    MISSING_TYPE *keyboardHeight;	// 200 = 0xc8
    MISSING_TYPE *selectedSenderIdentity;	// 208 = 0xd0
    MISSING_TYPE *actionBar;	// 216 = 0xd8
    MISSING_TYPE *currentConversation;	// 224 = 0xe0
    MISSING_TYPE *currentConversationLink;	// 232 = 0xe8
    MISSING_TYPE *$__lazy_storage_$_smsAccount;	// 240 = 0xf0
    MISSING_TYPE *$__lazy_storage_$_maxParticipantLimit;	// 248 = 0xf8
    MISSING_TYPE *delegate;	// 264 = 0x108
    MISSING_TYPE *appName;	// 280 = 0x118
    MISSING_TYPE *stagedActivity;	// 296 = 0x128
    MISSING_TYPE *initialRecipientDestinations;	// 304 = 0x130
    MISSING_TYPE *setPreventsApplicationTerminationWhenModal;	// 312 = 0x138
    MISSING_TYPE *addButtonHandler;	// 328 = 0x148
    MISSING_TYPE *linkShareCoordinator;	// 344 = 0x158
    MISSING_TYPE *scheduleIDSQuerySubject;	// 384 = 0x180
    MISSING_TYPE *scheduleIDSQueryGroupSubject;	// 392 = 0x188
    MISSING_TYPE *scheduleIDSCachedQuerySubject;	// 400 = 0x190
    MISSING_TYPE *scheduleIDSQueryDebouncer;	// 408 = 0x198
    MISSING_TYPE *scheduleIDSQueryGroupDebouncer;	// 416 = 0x1a0
    MISSING_TYPE *scheduleIDSCachedQueryDebouncer;	// 424 = 0x1a8
}

- (void).cxx_destruct;	// IMP=0x00000000000eea84
- (void)willDismissViewAnimated:(_Bool)arg1;	// IMP=0x00000000000eea34
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000ee9bd
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000ee8c8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ee7d1
- (void)viewDidLoad;	// IMP=0x00000000000edabd
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000ecc02
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ec7b1
- (void)cancelButtonTapped;	// IMP=0x00000000000ef398
- (void)handleIDSStatusChangedWithNotification:(id)arg1;	// IMP=0x00000000000ef296
- (void)keyboardWillHideWithNotification:(id)arg1;	// IMP=0x00000000000ef018
- (void)keyboardWillShowWithNotification:(id)arg1;	// IMP=0x00000000000fbf62
- (id)menuForPillView:(id)arg1;	// IMP=0x00000000000f6e04
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x00000000000f6f9e
- (id)searchController:(id)arg1 contextMenuConfigurationForRecipient:(id)arg2;	// IMP=0x00000000000f7ae9
- (void)didTapTextViewAccessoryButtonForSearchController:(id)arg1 anchoredToView:(id)arg2;	// IMP=0x00000000000f7a7a
- (void)searchController:(id)arg1 didTapTableAccessoryForRecipient:(id)arg2;	// IMP=0x00000000000f77f9
- (unsigned long long)searchController:(id)arg1 presentationOptionsForRecipient:(id)arg2;	// IMP=0x00000000000f7428
- (id)searchController:(id)arg1 tintColorForRecipient:(id)arg2;	// IMP=0x00000000000f73ab
- (id)searchController:(id)arg1 preferredRecipientForRecipient:(id)arg2;	// IMP=0x00000000000f732c
- (void)searchController:(id)arg1 didEndDisplayingRowForRecipient:(id)arg2;	// IMP=0x00000000000f7246
- (void)searchController:(id)arg1 willDisplayRowForRecipient:(id)arg2;	// IMP=0x00000000000f71d2
- (void)searchController:(id)arg1 didRemoveRecipient:(id)arg2;	// IMP=0x00000000000f70f4
- (void)searchController:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x00000000000f7080
- (id)searchController:(id)arg1 composeRecipientForAddress:(id)arg2;	// IMP=0x00000000000f6ff9
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x00000000000f952a

@end
