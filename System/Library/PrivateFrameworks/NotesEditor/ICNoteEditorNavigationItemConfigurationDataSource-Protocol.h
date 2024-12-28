//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/NSObject-Protocol.h>

@class ICNoteEditorNavigationItemConfiguration, ICStyleSelectorViewController, ICTableAttachmentViewController, NSString, UIBarButtonItem, UITextInputAssistantItem, UIToolbar, UIView, UIViewController, UIWindowScene;

@protocol ICNoteEditorNavigationItemConfigurationDataSource <NSObject>
- (UIToolbar *)noteEditorNavigationItemConfigurationToolbar:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (ICTableAttachmentViewController *)noteEditorNavigationItemConfigurationTableAttachmentViewController:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (ICStyleSelectorViewController *)noteEditorNavigationItemConfigurationStyleSelectorViewController:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIWindowScene *)noteEditorNavigationItemConfigurationPresentingWindowScene:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIViewController *)noteEditorNavigationItemConfigurationPresentingViewController:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIView *)noteEditorNavigationItemConfigurationPresentingSourceView:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UITextInputAssistantItem *)noteEditorNavigationItemConfigurationInputAssistantItem:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIToolbar *)noteEditorNavigationItemConfigurationInputAccessoryToolbar:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIBarButtonItem *)noteEditorNavigationItemConfigurationCollaborationBarButtonItem:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (NSString *)noteEditorNavigationItemConfigurationChecklistAccessibilityValue:(ICNoteEditorNavigationItemConfiguration *)arg1;
@end
